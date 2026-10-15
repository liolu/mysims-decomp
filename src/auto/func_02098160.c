#include "engine.h"
#include "m2c.h"

M2C_UNK func_02043014(M2C_UNK, M2C_UNK);
void func_020981a0(M2C_UNK);
M2C_UNK func_02098964(void);

void func_02098160(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020981a0(arg0);
    }
    temp_r0                     = func_02098964();
    temp_r0_2                   = func_02043014((temp_r0 * 2) - temp_r0, 1);
    M2C_FIELD(arg0, s32 *, 4)   = temp_r0_2;
    M2C_FIELD(arg0, s32 *, 8)   = temp_r0_2;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 0x5800);
}
