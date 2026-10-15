#include "m2c.h"

extern s32 data_021188a4;

s32 func_02034be4(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021188a4;
    data_021188a4 = arg0;
    return temp_r2;
}
