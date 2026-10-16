/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006bb4 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02006bb4.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200856c(void);
extern void func_02008580(int state);
extern void func_0200672c(void *queue);
extern void func_0200677c(void *queue);
extern long long func_0202003c(int a, int b);
int func_02006bb4(char *q, void *msg, int flags) {
    int enabled = func_0200856c();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_02008580(enabled);
            return 0;
        }
        func_0200672c(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_0202003c(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_0200677c(q + 8);
    func_02008580(enabled);
    return 1;
}
