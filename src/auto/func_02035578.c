#include "m2c.h"

void func_02035578(void *arg0, s32 arg1) {
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r2;
    u16 temp_r3;

    temp_r1                   = arg1 & 0x2FFF;
    temp_r2                   = (M2C_FIELD(arg0, u16 *, 2) ^ temp_r1) & temp_r1;
    M2C_FIELD(arg0, u16 *, 0) = temp_r2;
    temp_r3                   = temp_r1;
    M2C_FIELD(arg0, u16 *, 2) = temp_r3;
    temp_r1_2                 = M2C_FIELD(arg0, u16 *, 6);
    if (temp_r1_2 == 0) {
        if (temp_r2 == 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4)   = temp_r2;
        M2C_FIELD(arg0, u16 *, 6)   = temp_r2;
        M2C_FIELD(arg0, u16 *, 8)   = 0U;
        M2C_FIELD(arg0, u16 *, 0xA) = 0U;
        return;
    }
    if (temp_r1_2 == temp_r3) {
        temp_r1_3 = M2C_FIELD(arg0, u16 *, 8);
        if ((u32) temp_r1_3 < 0x1EU) {
            M2C_FIELD(arg0, u16 *, 8) = (u16) (temp_r1_3 + 1);
            M2C_FIELD(arg0, u16 *, 4) = 0U;
            return;
        }
        temp_r1_4 = M2C_FIELD(arg0, u16 *, 0xA);
        if ((u32) temp_r1_4 < 5U) {
            M2C_FIELD(arg0, u16 *, 0xA) = (u16) (temp_r1_4 + 1);
            M2C_FIELD(arg0, u16 *, 4)   = 0U;
            return;
        }
        M2C_FIELD(arg0, u16 *, 0xA) = 0U;
        M2C_FIELD(arg0, u16 *, 4)   = temp_r3;
        return;
    }
    M2C_FIELD(arg0, u16 *, 4)   = temp_r3;
    M2C_FIELD(arg0, u16 *, 6)   = temp_r3;
    M2C_FIELD(arg0, u16 *, 8)   = 0U;
    M2C_FIELD(arg0, u16 *, 0xA) = 0U;
}
