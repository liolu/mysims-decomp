
extern void func_02007f88();
// clang-format on

/* func_0200e4a0 from projets/rayman-rr/src/auto/func_0200e4a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02007f78(void) {
    stmfd sp!, {r0, lr}
    bl func_02007f88
    ldmfd sp!, {r0, lr}
    bx lr
}
