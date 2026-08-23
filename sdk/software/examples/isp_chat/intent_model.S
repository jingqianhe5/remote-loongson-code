    .section .tpu_weights,"a",@progbits
    .balign 64
    .global isp_intent_model
    .type isp_intent_model, @object
isp_intent_model:
    .incbin "obj/intent_model_q8_8.bin"
    .global isp_intent_model_end
isp_intent_model_end:
    .size isp_intent_model, isp_intent_model_end - isp_intent_model

    .section .note.GNU-stack,"",@progbits
