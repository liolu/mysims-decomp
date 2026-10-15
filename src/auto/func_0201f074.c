#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201f074(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0201f0ec
    cmn ip, r3, lsl #0x1
    bhs L_0201f100
L_0201f088:
    orrs ip, r3, r1
    bmi L_0201f0b8
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0201f0a4:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0201f0b8:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_0201f0d8
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_0201f0d8:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_0201f0ec:
    bne L_0201f0a4
    cmp r0, #0x0
    bhi L_0201f0a4
    cmn ip, r3, lsl #0x1
    blo L_0201f088
L_0201f100:
    bne L_0201f0a4
    cmp r2, #0x0
    bhi L_0201f0a4
    b L_0201f088
}
// clang-format on
