# ISP Intent Classifier Training

This directory owns the complete training path for the small classifier used by
UART commands. Student training requires Python 3 and NumPy only. Optional LLM
distillation uses the local GPU through a self-contained `llama.cpp` runtime;
it does not install Python packages or write outside `training/`.

Validate the manually curated records:

```bash
python3 training/validate_dataset.py
```

The V6 label set recognizes brightness, contrast, filtering/denoising,
sharpening, grayscale, Gamma, binarization and edge-detection categories.
Filtering and denoising intentionally share one `FILTER` category; concrete
filter and sharpen implementations are selected by firmware defaults.
Brightness and contrast use one fixed step. Repeated changes use the
`REPEAT_LAST` intent.

The deployment label set keeps keyword-first `CHAT_HELLO`, `CHAT_NAME` and
`CHAT_HELP` responses. Identity questions return the fixed Loongson
ISP-assistant description, and capability questions list the supported ISP
operations. Other non-ISP input resolves to `UNKNOWN`. Chat classes never write
ISP registers.

Inference is keyword-first. Unambiguous normalized phrases are resolved by the
CPU before TPU submission; only commands without a deterministic keyword match
run through the TPU model. The same resolver is implemented in Python and C and
checked for exact parity by the host test.

Run the explicit target/direction regression suite:

```bash
python3 training/test_direction_cases.py
```

## Local teacher distillation

The pinned teacher is the Apache-2.0 licensed
`Qwen2.5-1.5B-Instruct-GGUF` `Q4_K_M` model. The pinned `llama.cpp b10019`
runtime uses Vulkan device `Vulkan0`; on the development machine this is the
RTX 4050. Downloaded weights, binaries, raw responses and logs stay below
`training/models/`, `training/tools/` and `training/logs/`, which are ignored by
Git.

Download and SHA-256 verify the pinned files:

```bash
training/setup_teacher.sh
```

Generate 20 label-constrained phrases for each of the 24 classes, then validate
the committed distilled dataset:

```bash
python3 training/distill_teacher.py
python3 training/validate_teacher_data.py --minimum 20
python3 training/test_teacher_quality.py
```

`distill_teacher.py` starts a local-only server on `127.0.0.1:18080`, saves
progress after every response and resumes an incomplete output. Generated text
must pass label balance, normalized deduplication, manual-set isolation,
keyword-conflict checks and a conservative semantic gate. If the gate is
tightened, prune stale generated records and fill the resulting gaps:

```bash
python3 training/curate_teacher_data.py
python3 training/distill_teacher.py
```

The reproducible model/runtime revisions and hashes are stored in
`teacher_model.json`. `data/teacher_distilled.meta.json` records generation
settings and the SHA-256 of the 480-record `teacher_distilled.jsonl`. Firmware
builds consume this validated JSONL and never require the teacher model.

Train the selected single-layer centroid classifier, evaluate TPU-compatible
Q8.8 inference across five held-out manual splits, then export the model image:

```bash
python3 training/train_linear_intent.py
```

Generated files are written under `training/out/`:

- `intent_model_fp32.npz`: host-side reference parameters.
- `intent_model_q8_8.bin`: fixed-format board model image.
- `intent_model_manifest.json`: label ordering and held-out metrics.

The exported model has 24 classes, 2,048 input features and one linear layer
(49,152 MACs per model fallback; 98,376-byte model image). Teacher data and
deterministic synthetic data are training-only. The train/test split is
performed on manual records before training augmentation, so generated variants
cannot leak into held-out sets. The current distilled model has five-split Q8.8
raw accuracy mean/minimum `0.825/0.812`; keyword-plus-model resolved accuracy is
`1.000/1.000`. The keyword resolver is part of inference and must be ported with
the feature extractor when the model is integrated into firmware.

`train_intent.py` remains available only as the earlier two-layer MLP
experiment; it is not the selected deployment model.

The board example `sdk/software/examples/isp_chat` regenerates this model at
build time and embeds `intent_model_q8_8.bin` in the firmware. Keyword hits are
applied directly; fallback feature vectors are submitted to the TPU in
64-element chunks. The CPU writes the resolved class to the ISP registers at
`0xBF500000` (the LoongArch uncached
alias of physical `0x1F500000`).  Its default frame configuration is
1920x1080.  AXI2Video is intentionally disconnected; a future external source
will connect to the direct-video integration point in `rtl/soc_top.v`.
