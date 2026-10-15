#include "m2c.h"

extern void *data_02118994;

void func_020c93c0(void *arg0) {
    if (data_02118994 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(data_02118994, s32 *, 0xCB4);
    }
}
