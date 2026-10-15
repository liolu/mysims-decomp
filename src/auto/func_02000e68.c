#include "m2c.h"

extern s32 data_02106a38;

s32 func_02000e68(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02106a38;
    data_02106a38 = arg0;
    return temp_r2;
}
