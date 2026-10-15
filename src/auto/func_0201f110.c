#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201f110(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0201f178
    cmn ip, r3, lsl #0x1
    bhs L_0201f18c
L_0201f124:
    orrs ip, r3, r1
    bmi L_0201f154
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0201f140:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0201f154:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_0201f178:
    bne L_0201f140
    cmp r0, #0x0
    bhi L_0201f140
    cmn ip, r3, lsl #0x1
    blo L_0201f124
L_0201f18c:
    bne L_0201f140
    cmp r2, #0x0
    bhi L_0201f140
    b L_0201f124
}
// clang-format on
