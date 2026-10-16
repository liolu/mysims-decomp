/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006a00 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_02006a00.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_02106b48;
extern OSIntrMode func_0200856c(void);
extern OSIntrMode func_02008580(OSIntrMode mode);
u32 func_02006a00(void) {
    OSIntrMode interruptMode = func_0200856c();
    u32 count;

    if (data_02106b48.rescheduleCount < (u32) (0 - 1)) {
        count = data_02106b48.rescheduleCount++;
    }
    (void) func_02008580(interruptMode);

    return count;
}
