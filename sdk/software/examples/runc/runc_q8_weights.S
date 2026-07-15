    .section .tpu_weights,"a",@progbits
    .balign 64
    .global runc_q8_weights
    .type runc_q8_weights, @object
runc_q8_weights:
    .incbin "obj/runc_q8_weights.bin"
    .global runc_q8_weights_end
runc_q8_weights_end:
    .size runc_q8_weights, runc_q8_weights_end - runc_q8_weights

    .section .note.GNU-stack,"",@progbits
