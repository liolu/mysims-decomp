#include "m2c.h"

extern M2C_UNK data_020d316e;

s32 func_02086f30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;
    s32 temp_lr;
    s32 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0x2D) != 0) {
        temp_r4 = (M2C_FIELD(arg0, s32 *, 8) * 0xE) + (s32) &data_020d316e;
        temp_ip = M2C_FIELD(arg0, s32 *, 0x18);
        temp_lr = M2C_FIELD(arg0, s32 *, 0x14);
        if (((s32) (M2C_FIELD(temp_r4, s16 *, 8) + (temp_ip >> 0xC)) <= arg2) &&
            (arg2 < (s32) (M2C_FIELD(temp_r4, s16 *, 0xC) + (temp_ip >> 0xC))) &&
            ((s32) (M2C_FIELD(temp_r4, s16 *, 6) + (temp_lr >> 0xC)) <= arg1) &&
            (arg1 < (s32) (M2C_FIELD(temp_r4, s16 *, 0xA) + (temp_lr >> 0xC)))) {
            return 1;
        }
    }
    return 0;
}
