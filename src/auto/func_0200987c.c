#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200987c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8}
    ldr r3, [r0, #0x0]
    ldr r4, [r0, #0x4]
    ldrb r5, [r0, #0xb]
    ldrh r6, [r0, #0xc]
L_02009890:
    cmp r4, #0x0
    ble L_0200990c
    tst r5, #0x80
    bne L_020098c8
L_020098a0:
    cmp r6, #0x0
    ble L_020098f0
    sub r6, r6, #0x1
    ldrb r7, [r1], #0x1
    sub r4, r4, #0x1
    swpb r8, r7, [r3]
    add r3, r3, #0x1
    subs r2, r2, #0x1
    beq L_0200990c
    b L_020098a0
L_020098c8:
    cmp r6, #0x0
    ble L_020098f0
    ldrb r7, [r1], #0x1
L_020098d4:
    sub r4, r4, #0x1
    swpb r8, r7, [r3]
    add r3, r3, #0x1
    subs r6, r6, #0x1
    bgt L_020098d4
    subs r2, r2, #0x1
    beq L_0200990c
L_020098f0:
    ldrb r5, [r1], #0x1
    and r6, r5, #0x7f
    tst r5, #0x80
    addne r6, r6, #0x2
    add r6, r6, #0x1
    subs r2, r2, #0x1
    bne L_02009890
L_0200990c:
    str r3, [r0, #0x0]
    str r4, [r0, #0x4]
    strb r5, [r0, #0xb]
    strh r6, [r0, #0xc]
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8}
    bx lr
}
// clang-format on
