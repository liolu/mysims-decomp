#include "m2c.h"

extern void *data_02118998;

s32 func_0207f368(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            M2C_FIELD(data_02118998, s32 *, 0x3914) = 2;
        } else {
            M2C_FIELD(data_02118998, s32 *, 0x3914) = 1;
        }
    } else {
        M2C_FIELD(data_02118998, s32 *, 0x3914) = 0;
    }
    return 1;
}
