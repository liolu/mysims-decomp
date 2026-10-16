/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
extern int func_0200856c();

extern void func_02008580(int mask);

extern int data_02106b48[];

typedef unsigned int u32;

extern u32 OS_EnableInterrupts(void);

extern void OS_Halt(void);

extern void OSi_IdleThreadProc(void *arg);

/* OS_SetIrqWorkField30 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SetIrqWorkField30.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020069c8(int arg0) {
    int mask;
    int old;
    mask               = func_0200856c();
    old                = data_02106b48[0xc];
    data_02106b48[0xc] = arg0;
    func_02008580(mask);
    return old;
}
