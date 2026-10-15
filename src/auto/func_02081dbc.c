#include "m2c.h"

extern s32 data_02118994;

s32 func_02081dbc(s32 arg0, u32 arg1) {
    if (arg1 >= 0x132U) {
        return 0;
    }
    if (((u32) M2C_FIELD((data_02118994 + ((arg1 >> 5) * 4)), u32 *, 0x958) >> (arg1 & 0x1F)) & 1) {
        return 1;
    }
    return 0;
}
