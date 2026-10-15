#include "m2c.h"

extern s32 data_021179f0;

s32 func_02030074(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021179f0;
    data_021179f0 = arg0;
    return temp_r2;
}
