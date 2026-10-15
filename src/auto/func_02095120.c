#include "m2c.h"

extern s32 data_021daaf4;

s32 func_02095120(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021daaf4;
    data_021daaf4 = arg0;
    return temp_r2;
}
