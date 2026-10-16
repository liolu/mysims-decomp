/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006900 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02006900.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void func_02007d48(OSAlarm *alarm);
extern void func_02007e84(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int func_0200856c(void);
extern void func_02008580(int mask);
extern void func_0200672c(void *arg);
extern void func_020069a8(void *arg);
extern void **data_02106b48[];
void func_02006900(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    func_02007d48((OSAlarm *) alarm);
    thread                              = data_02106b48[2][0];
    mask                                = func_0200856c();
    *(void **) ((char *) thread + 0xb0) = alarm;
    func_02007e84((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, func_020069a8, &thread);
    while (thread != 0) {
        func_0200672c(0);
    }
    func_02008580(mask);
}
