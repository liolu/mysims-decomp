#include "m2c.h"

M2C_UNK func_0205ecec(s32);                         /* extern */
M2C_UNK func_020837bc(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_02118998;

s32 func_0207e878(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_020837bc(data_02118998 + 0x380C, 1, 0);
    } else if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_020837bc(data_02118998 + 0x380C, 0, 1);
    } else {
        func_020837bc(data_02118998 + 0x380C, 0, 0);
        func_0205ecec(data_02118998 + 0x9728);
    }
    return 1;
}
