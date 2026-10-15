#include "m2c.h"

M2C_UNK func_02034b0c();                            /* extern */
extern s32 data_02118960;

void func_02037b1c(s32 arg0) {
    s32 temp_r4;

    temp_r4       = data_02118960;
    data_02118960 = arg0;
    func_02034b0c();
    data_02118960 = temp_r4;
}
