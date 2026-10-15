#include "m2c.h"

extern s32 data_02118998;

s32 func_0207e84c(void) {
    void *temp_r1;

    temp_r1 = data_02118998 + 0x27C0;
    if ((M2C_FIELD(temp_r1, u16 *, 0x10) == 7) && (M2C_FIELD(temp_r1, u16 *, 0x12) == 3)) {
        return 1;
    }
    return 0;
}
