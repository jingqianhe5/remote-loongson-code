#!/usr/bin/env python3
"""Build the row-major Q8.8 matrix-weight image used by the TPU runtime."""

import argparse
import pathlib
import re
import struct


def float_bits_to_q8_8(bits: int) -> int:
    sign = bits >> 31
    exponent = (bits >> 23) & 0xFF
    if exponent == 0:
        return 0
    if exponent == 0xFF:
        return 0x8000 if sign else 0x7FFF

    mantissa = (bits & 0x7FFFFF) | 0x800000
    shift = exponent - 142
    if shift >= 0:
        magnitude = 32768
    else:
        right_shift = -shift
        if right_shift >= 32:
            magnitude = 0
        else:
            magnitude = (mantissa + (1 << (right_shift - 1))) >> right_shift

    if sign:
        return 0x8000 if magnitude >= 32768 else (-magnitude) & 0xFFFF
    return 0x7FFF if magnitude > 32767 else magnitude


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--model-header", required=True)
    parser.add_argument("--out", required=True)
    args = parser.parse_args()

    text = pathlib.Path(args.model_header).read_text(encoding="ascii")
    array_body = text.split("{", 1)[1].split("};", 1)[0]
    model = bytes(int(value, 16) for value in re.findall(r"0x([0-9a-fA-F]{2})", array_body))
    if len(model) < 28:
        raise SystemExit("model image is too short")

    dim, hidden_dim, n_layers, n_heads, n_kv_heads, signed_vocab, seq_len = \
        struct.unpack_from("<7i", model, 0)
    vocab_size = abs(signed_vocab)
    shared_weights = signed_vocab > 0
    if dim <= 0 or n_heads <= 0 or dim % n_heads:
        raise SystemExit("invalid model configuration")

    head_size = dim // n_heads
    offset = 28
    embedding_offset = offset
    offset += vocab_size * dim * 4
    offset += n_layers * dim * 4

    matrix_specs = [
        ("wq", n_layers * dim * n_heads * head_size),
        ("wk", n_layers * dim * n_kv_heads * head_size),
        ("wv", n_layers * dim * n_kv_heads * head_size),
        ("wo", n_layers * n_heads * head_size * dim),
    ]

    groups = []
    for name, count in matrix_specs:
        groups.append((name, offset, count))
        offset += count * 4

    offset += n_layers * dim * 4
    for name, count in (
        ("w1", n_layers * dim * hidden_dim),
        ("w2", n_layers * hidden_dim * dim),
        ("w3", n_layers * dim * hidden_dim),
    ):
        groups.append((name, offset, count))
        offset += count * 4

    offset += dim * 4
    offset += seq_len * head_size * 2 * 4
    classifier_offset = embedding_offset if shared_weights else offset
    groups.append(("wcls", classifier_offset, vocab_size * dim))

    output = bytearray()
    for name, start, count in groups:
        end = start + count * 4
        if end > len(model):
            raise SystemExit(f"{name} exceeds model image ({end} > {len(model)})")
        for pos in range(start, end, 4):
            bits = struct.unpack_from("<I", model, pos)[0]
            output += struct.pack("<H", float_bits_to_q8_8(bits))

    out_path = pathlib.Path(args.out)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_bytes(output)
    print(
        f"[runc_q8] wrote {out_path} ({len(output)} bytes, "
        f"dim={dim} hidden={hidden_dim} layers={n_layers} vocab={vocab_size})"
    )


if __name__ == "__main__":
    main()
