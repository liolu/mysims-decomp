#include "m2c.h"

M2C_UNK func_02083974(s32, M2C_UNK);                /* extern */
extern s32 data_02118998;

s32 func_0207e90c(s32 *arg0) {
    if (*arg0 != 0) {
        func_02083974(data_02118998 + 0x380C, 1);
    } else {
        func_02083974(data_02118998 + 0x380C, 0);
    }
    return 1;
}
