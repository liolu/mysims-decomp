#include "m2c.h"

M2C_UNK func_020070dc();                            /* extern */
extern M2C_UNK data_02106a38;
extern M2C_UNK data_02106a40;

void func_02000d84(void) {
    M2C_UNK *var_r4;
    s32 var_r2;

    var_r4 = &data_02106a40;
    if (M2C_FIELD(&data_02106a38, s32 *, 4) & 0x80000000) {
        return;
    }
    func_020070dc();
    var_r2 = 0;
    do {
        M2C_FIELD(var_r4, s32 *, 0) = -1;
        var_r2 += 1;
        M2C_FIELD(var_r4, s32 *, 4) = 0;
        var_r4                      = (M2C_UNK *) ((s8 *) var_r4 + 8);
    } while (var_r2 < 9);
    M2C_FIELD(&data_02106a38, s32 *, 4) = (s32) (M2C_FIELD(&data_02106a38, s32 *, 4) | 0x80000000);
}
