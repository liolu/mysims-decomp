/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002cd0 from projets/farm-frenzy/src/donor/func_02002cd0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_020d8264;
extern void func_02008994(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_02009124(u32 data, void *dest, u32 size);
extern void func_02004770(void);
extern void func_02008af0(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);
void func_02004770(void) {
    s32 i;

    if (data_020d8264 != -1) {
        func_02008af0(data_020d8264, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_02008994(data_020d8264, (void *) 0x04000360, 0, 0x60);
    } else {
        func_02009124(0, (void *) 0x04000330, 0x10);
        func_02009124(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
