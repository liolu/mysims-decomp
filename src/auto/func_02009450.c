#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02009450(void) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
L_0200945c:
    cmp r2, #0x0
    ble L_020094dc
    ldrb lr, [r0], #0x1
    mov r4, #0x8
L_0200946c:
    subs r4, r4, #0x1
    blt L_0200945c
    tst lr, #0x80
    bne L_02009490
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_020094cc
L_02009490:
    ldrb r5, [r0, #0x0]
    mov r6, #0x3
    add r3, r6, r5, asr #0x4
    ldrb r6, [r0], #0x1
    and r5, r6, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
L_020094b8:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_020094b8
L_020094cc:
    cmp r2, #0x0
    movgt lr, lr, lsl #0x1
    bgt L_0200946c
    b L_0200945c
L_020094dc:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
