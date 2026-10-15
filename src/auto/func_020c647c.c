#include "m2c.h"

extern s32 data_02118994;

void func_020c647c(s32 arg0) {
    s32 temp_r2;
    u8 temp_r1;

    if (data_02118994 == 0) {
        return;
    }
    temp_r2 = data_02118994 + 0x399A;
    temp_r1 = *(s8 *) (temp_r2 + arg0);
    if (temp_r1 != 0) {
        *(s8 *) (temp_r2 + arg0) = temp_r1 - 1;
    }
}