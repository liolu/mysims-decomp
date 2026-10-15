#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009a0c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    ldr r3, [r0, #0x0]
    ldr r4, [r0, #0x4]
    ldrb r5, [r0, #0xb]
    ldrb r6, [r0, #0xc]
    ldrb r7, [r0, #0xd]
    ldrb r8, [r0, #0xe]
L_02009a28:
    cmp r4, #0x0
    ble L_02009ae8
    cmp r6, #0x0
    beq L_02009ad0
L_02009a38:
    cmp r2, #0x0
    beq L_02009ae8
    tst r5, #0x80
    bne L_02009a60
    ldrb r9, [r1], #0x1
    sub r4, r4, #0x1
    sub r2, r2, #0x1
    swpb r9, r9, [r3]
    add r3, r3, #0x1
    b L_02009abc
L_02009a60:
    cmp r8, #0x0
    bne L_02009a74
    ldrb r7, [r1], #0x1
    mov r8, #0x1
    sub r2, r2, #0x1
L_02009a74:
    cmp r2, #0x0
    beq L_02009ae8
    and r9, r7, #0xf
    mov r10, r9, lsl #0x8
    ldrb r9, [r1], #0x1
    mov r8, #0x0
    sub r2, r2, #0x1
    orr r9, r9, r10
    add r9, r9, #0x1
    mov r10, #0x3
    adds r7, r10, r7, asr #0x4
    beq L_02009abc
L_02009aa4:
    ldrb r10, [r3, -r9]
    sub r4, r4, #0x1
    swpb r10, r10, [r3]
    add r3, r3, #0x1
    subs r7, r7, #0x1
    bgt L_02009aa4
L_02009abc:
    cmp r4, #0x0
    beq L_02009ae8
    mov r5, r5, lsl #0x1
    subs r6, r6, #0x1
    bne L_02009a38
L_02009ad0:
    cmp r2, #0x0
    beq L_02009ae8
    ldrb r5, [r1], #0x1
    mov r6, #0x8
    sub r2, r2, #0x1
    b L_02009a28
L_02009ae8:
    str r3, [r0, #0x0]
    str r4, [r0, #0x4]
    strb r5, [r0, #0xb]
    strb r6, [r0, #0xc]
    strb r7, [r0, #0xd]
    strb r8, [r0, #0xe]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}
// clang-format on
