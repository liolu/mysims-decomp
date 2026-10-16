/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_RescheduleThread from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_RescheduleThread.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_02006adc(OSContext *context);
extern void func_02006b28(OSContext *context);
extern int func_020085d0(void);
extern void *func_0200680c(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_02106b6c;
extern struct Globals data_02106b48;
void func_02006220(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_02106b48.rescheduleCount != 0) {
        return;
    }

    info = &data_02106b6c;
    if (data_02106b48.irqDepth != 0 || func_020085d0() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_02106b48.currentThreadPtr;
    cur    = *curPtr;
    next   = func_0200680c();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_02006adc((OSContext *) cur)) {
            return;
        }
    }

    cb = data_02106b48.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_02106b48.currentThread = next;
    func_02006b28((OSContext *) next);
}
