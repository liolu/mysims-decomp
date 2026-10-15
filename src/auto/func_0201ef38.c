#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201ef38(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0201efac
    cmn ip, r3, lsl #0x1
    bhs L_0201efc0
L_0201ef4c:
    orrs ip, r3, r1
    bmi L_0201ef7c
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_0201ef68:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0201ef7c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_0201efac:
    bne L_0201ef68
    cmp r0, #0x0
    bhi L_0201ef68
    cmn ip, r3, lsl #0x1
    blo L_0201ef4c
L_0201efc0:
    bne L_0201ef68
    cmp r2, #0x0
    bhi L_0201ef68
    b L_0201ef4c
}
// clang-format on
