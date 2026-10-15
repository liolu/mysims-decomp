#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, u16, u16, u32); /* extern */
M2C_UNK func_02051e08(void *, s32);                 /* extern */
M2C_UNK func_02051e60(void *);                      /* extern */
M2C_UNK func_02051f68(void *);                      /* extern */
M2C_UNK func_020520ac(void *);                      /* extern */
M2C_UNK func_02052398(void *, u16, u16);            /* extern */
M2C_UNK func_0205358c(void *, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02053dfc(void *);                      /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02060604(void *);                      /* extern */
s32 func_02060b38(void *, M2C_UNK *, M2C_UNK);      /* extern */
extern M2C_UNK data_020dd890;

void func_02052850(void *arg0, u32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp4[32];

    if (arg1 == 0) {
        return;
    }
    if (arg1 > 4U) {
        return;
    }
    func_0201a678(sp4, &data_020dd890, M2C_FIELD(arg0, u16 *, 0x10), M2C_FIELD(arg0, u16 *, 0x12), arg1);
    if (func_02060b38(arg0 + 4, sp4, 0) != 0) {
        func_02051e08(arg0 + 0x218, M2C_FIELD(arg0, s32 *, 8));
        func_02060604(arg0 + 4);
    } else {
        func_02051e60(arg0 + 0x218);
    }
    func_02052398(arg0, M2C_FIELD(arg0, u16 *, 0x10), M2C_FIELD(arg0, u16 *, 0x12));
    func_02051f68(arg0 + 0x218);
    func_020520ac(arg0 + 0x218);
    func_02053dfc(arg0 + 0x4A0);
    func_0205358c(arg0 + 0x4A0, arg1, arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0xFB4) = (s32) M2C_FIELD(arg0, s32 *, 0xE14);
    M2C_FIELD(arg0, u16 *, 0x14)  = (u16) arg1;
    if (M2C_FIELD(arg0, u8 *, 0x11C) == 0) {
        return;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0x14) >= 3U) {
        func_02055e28(arg0 + 0x18, 1, 0, 0);
        return;
    }
    func_02055e28(arg0 + 0x18, 0, 0, 0);
}
