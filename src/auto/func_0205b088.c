#include "m2c.h"

void *func_0205b088(void **arg0, u32 arg1) {
    void *temp_r2;

    temp_r2 = *arg0;
    if ((temp_r2 != NULL) && (arg1 < (u32) M2C_FIELD(temp_r2, u16 *, 0xA))) {
        return temp_r2 + M2C_FIELD((temp_r2 + (arg1 * 4)), s32 *, 0x10C);
    }
    return NULL;
}
