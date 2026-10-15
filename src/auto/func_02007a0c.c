#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007840();
extern void func_02007850();
extern void r2();
extern char data_02106df0[];
extern char data_02106dfc[];
// clang-format off
asm void func_02007a0c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02106df0
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02007840
    ldr r1, =data_02106df0
    ldr r0, =data_02106df0
    ldr r1, [r1, #0x4]
    ldr r2, [r0, #0x0]
    ldr r0, =data_02106dfc
    blx r2
    bl func_02007850
    ldmfd sp!, {r3, pc}
}
// clang-format on
