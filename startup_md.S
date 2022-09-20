
.syntax unified
.cpu cortex-m3
.thumb

.word _sdata
.word _edata

.word _sbss
.word _ebss

.global vectors

.section .isr_vector,"a",%progbits
    .type vectors, %object
    .size vectors, .-vectors

vectors:
    .word _estack
    .word Reset_Handler

.section .text.Reset_Handler
    .weak Reset_Handler
    .type Reset_Handler, %function

Reset_Handler:
    movs r1, #0
    b loop_copy

copy_init:
    ldr r3, = _sidata
    ldr r3, [r3, r1]
    str r3, [r0, r1]
    adds r1, r1, #4
loop_copy:
    ldr r0, = _sdata
    ldr r3, = _edata
    cmp r2, r3
    bcc copy_init
    b loop_clear_bss

clear_bss:
    movs r3, #0
    str r3, [r2], #4

loop_clear_bss:
    ldr r3, = _ebss
    cmp r2, r3
    bcc clear_bss

    bl system_init

    bl main
.size Reset_Handler, .-Reset_Handler
