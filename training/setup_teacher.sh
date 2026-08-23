#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
MODEL="$ROOT/models/qwen2.5-1.5b-instruct-q4_k_m.gguf"
LICENSE="$ROOT/models/QWEN_LICENSE"
RUNTIME_ARCHIVE="$ROOT/tools/llama-b10019-bin-ubuntu-vulkan-x64.tar.gz"
RUNTIME_DIR="$ROOT/tools/llama-b10019"
MODEL_SHA=6a1a2eb6d15622bf3c96857206351ba97e1af16c30d7a74ee38970e434e9407e
RUNTIME_SHA=63b1999cdfdcf6acd979f28db9b8c4276b2328d512f431dd99a00d2399ef98cb
REVISION=91cad51170dc346986eccefdc2dd33a9da36ead9

mkdir -p "$ROOT/models" "$ROOT/tools"

download_checked() {
    local url=$1
    local output=$2
    local expected=$3
    if [[ -f "$output" ]] && echo "$expected  $output" | sha256sum --check --status; then
        echo "verified=$output"
        return
    fi
    curl -L --fail --show-error --continue-at - --output "$output" "$url"
    echo "$expected  $output" | sha256sum --check
}

download_checked \
    "https://huggingface.co/Qwen/Qwen2.5-1.5B-Instruct-GGUF/resolve/$REVISION/qwen2.5-1.5b-instruct-q4_k_m.gguf" \
    "$MODEL" "$MODEL_SHA"
download_checked \
    "https://github.com/ggml-org/llama.cpp/releases/download/b10019/llama-b10019-bin-ubuntu-vulkan-x64.tar.gz" \
    "$RUNTIME_ARCHIVE" "$RUNTIME_SHA"

curl -L --fail --show-error \
    --output "$LICENSE" \
    "https://huggingface.co/Qwen/Qwen2.5-1.5B-Instruct-GGUF/resolve/$REVISION/LICENSE"

if [[ ! -x "$RUNTIME_DIR/llama-server" ]]; then
    tar -xzf "$RUNTIME_ARCHIVE" -C "$ROOT/tools"
fi

"$RUNTIME_DIR/llama-server" --version
echo "teacher_ready=$MODEL"
