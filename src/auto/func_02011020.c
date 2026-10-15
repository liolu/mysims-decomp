#include "m2c.h"

M2C_UNK func_02008968();                            /* extern */
M2C_UNK func_02011094();                            /* extern */
extern M2C_UNK data_02109540;

void func_02011020(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02109540, s32 *, 0) != 0) {
            return;
        }
        var_r0                              = 1;
        M2C_FIELD(&data_02109540, s32 *, 0) = 1;
        if (M2C_FIELD(&data_02109540, s32(**)(), 4) != NULL) {
            var_r0 = M2C_FIELD(&data_02109540, s32(**)(), 4)();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02011094();
        return;
    }
    func_02008968();
}
