#include "m2c.h"

M2C_UNK func_02006fe4(u16 *, M2C_UNK);              /* extern */
s32 func_020115ec();                                /* extern */
extern M2C_UNK data_02109560;

s32 func_02011608(void) {
    s32 temp_r0;

    temp_r0 = func_020115ec();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02006fe4(M2C_FIELD(M2C_FIELD(&data_02109560, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_02109560, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
