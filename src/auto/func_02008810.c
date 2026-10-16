/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0200856c(void);
extern u32 func_02008580(u32 state);
extern u32 data_02106eb4;
extern u16 data_02106eb8[9];
u32 func_020087d4(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_02008810(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0200856c();

    mask = bank & data_02106eb4 & 0x1ff;

    while (1) {
        s32 i = 31 - func_020087d4(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_02106eb8[i] == lockID) {
            data_02106eb8[i] = 0;
            data_02106eb4 &= ~(1 << i);
        }
    }
    func_02008580(enabled);
}
