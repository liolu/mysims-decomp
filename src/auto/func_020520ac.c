#include "m2c.h"

M2C_UNK func_0200467c(M2C_UNK, u8, u8, s32);        /* extern */
M2C_UNK func_02004734(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020d9a9c;

void func_020520ac(void *arg0) {
    M2C_UNK var_r0;
    void *var_r4;

    if (M2C_FIELD(arg0, s32 *, 0x24C) != 0) {
        var_r4 = arg0 + 0x1B4;
    } else {
        var_r4 = arg0 + 4;
    }
    if (M2C_FIELD(var_r4, s32 *, 0) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_0200467c(var_r0, M2C_FIELD(var_r4, u8 *, 0x38), M2C_FIELD(var_r4, u8 *, 0x39), M2C_FIELD(var_r4, s32 *, 0x40));
    *(s32 *) 0x04000358 = M2C_FIELD(var_r4, u16 *, 0x3A) | (M2C_FIELD(var_r4, s32 *, 0x3C) << 0x10);
    func_02004734(&data_020d9a9c);
}
