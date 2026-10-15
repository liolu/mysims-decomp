#include "m2c.h"

M2C_UNK func_020336dc();                            /* extern */
extern u16 data_021188ac;

void func_02033738(s32 arg0, void *arg1) {
    u16 var_r1;

    if (arg1 == NULL) {
        var_r1 = data_021188ac;
    } else {
        var_r1 = M2C_FIELD(arg1, u16 *, 2);
    }
    if ((var_r1 & 0x30C) != 0x30C) {
        return;
    }
    func_020336dc(arg0);
}
