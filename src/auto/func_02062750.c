#include "m2c.h"

extern s32 data_021daadc;

s32 func_02062750(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021daadc;
    data_021daadc = arg0;
    return temp_r2;
}
