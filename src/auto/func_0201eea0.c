#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201eea0(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0201ef14
    cmn ip, r3, lsl #0x1
    bhs L_0201ef28
L_0201eeb4:
    orrs ip, r3, r1
    bmi L_0201eee4
    cmp r1, r3
    cmpeq r0, r2
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_0201eed0:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_0201eee4:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhs r0, #0x1
    movlo r0, #0x0
    bx lr
L_0201ef14:
    bne L_0201eed0
    cmp r0, #0x0
    bhi L_0201eed0
    cmn ip, r3, lsl #0x1
    blo L_0201eeb4
L_0201ef28:
    bne L_0201eed0
    cmp r2, #0x0
    bhi L_0201eed0
    b L_0201eeb4
}
// clang-format on
