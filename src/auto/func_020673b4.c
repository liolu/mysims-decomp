#include "m2c.h"

void func_020673b4(s32 arg0, s32 arg1, s16 arg2) {
    s32 temp_ip;
    s32 temp_r3;

    if (arg1 < 0) {
        return;
    }
    if (arg1 >= 5) {
        return;
    }
    temp_ip                         = (arg1 * 0x28) + arg0;
    temp_r3                         = (arg1 * 0x18) + arg0;
    M2C_FIELD(temp_r3, s32 *, 4)    = (s32) M2C_FIELD(temp_ip, s32 *, 0x7C);
    M2C_FIELD(temp_r3, s32 *, 8)    = (s32) M2C_FIELD(temp_ip, s32 *, 0x80);
    M2C_FIELD(temp_r3, s16 *, 0x14) = arg2;
}
