#include "m2c.h"

extern void *data_02118994;

void func_020c93dc(void *arg0) {
    if (data_02118994 == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(data_02118994, s32 *, 0xCB4) - M2C_FIELD(arg0, s32 *, 0x60));
}
