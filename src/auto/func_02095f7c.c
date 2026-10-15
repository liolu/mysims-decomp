#include "m2c.h"

extern s32 data_02118994;

void func_02095f7c(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 >= 5) {
        return;
    }
    if (arg2 < 0) {
        return;
    }
    if (arg2 >= 0x1E) {
        return;
    }
    M2C_FIELD(((arg1 * 0x3C) + data_02118994 + (arg2 * 2)), s16 *, 0x82C) = 0;
}
