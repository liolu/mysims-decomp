#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201efd0(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0201f050
    cmn ip, r3, lsl #0x1
    bhs L_0201f064
L_0201efe4:
    orrs ip, r3, r1
    bmi L_0201f018
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0201f000:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0201f018:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bne L_0201f03c
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    orr ip, ip, #0x40000000
    msr cpsr_f, ip
    bxeq lr
L_0201f03c:
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0201f050:
    bne L_0201f000
    cmp r0, #0x0
    bhi L_0201f000
    cmn ip, r3, lsl #0x1
    blo L_0201efe4
L_0201f064:
    bne L_0201f000
    cmp r2, #0x0
    bhi L_0201f000
    b L_0201efe4
}
// clang-format on
