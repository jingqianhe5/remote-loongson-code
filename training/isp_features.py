"""Feature extraction shared by dataset validation and model training."""

from __future__ import annotations

import unicodedata

import numpy as np


FEATURE_DIM = 512
NGRAM_MIN = 1
NGRAM_MAX = 3
FNV_OFFSET = 2166136261
FNV_PRIME = 16777619
START_MARKER = 0x110000
END_MARKER = 0x110001


def normalize_text(text: str) -> str:
    text = unicodedata.normalize("NFKC", text).lower()
    return "".join(
        ch
        for ch in text
        if not ch.isspace() and unicodedata.category(ch)[0] not in {"P", "S"}
    )


def _hash_codepoints(codepoints: list[int]) -> int:
    value = FNV_OFFSET ^ len(codepoints)
    for codepoint in codepoints:
        value ^= codepoint
        value = (value * FNV_PRIME) & 0xFFFFFFFF
    return value


def text_to_features(text: str, feature_dim: int = FEATURE_DIM) -> np.ndarray:
    if feature_dim <= 0 or feature_dim & (feature_dim - 1):
        raise ValueError("feature_dim must be a positive power of two")
    normalized = normalize_text(text)
    codepoints = [START_MARKER, *(ord(ch) for ch in normalized), END_MARKER]
    features = np.zeros(feature_dim, dtype=np.float32)

    for width in range(NGRAM_MIN, NGRAM_MAX + 1):
        for start in range(len(codepoints) - width + 1):
            index = _hash_codepoints(codepoints[start : start + width]) & (feature_dim - 1)
            features[index] = 1.0
    return features


def texts_to_features(texts: list[str], feature_dim: int = FEATURE_DIM) -> np.ndarray:
    return np.stack([text_to_features(text, feature_dim) for text in texts], axis=0)
