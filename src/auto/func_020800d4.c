#include "m2c.h"

extern void *data_02118994;

s32 func_020800d4(u32 *arg0) {
    if ((u32) M2C_FIELD(data_02118994, u8 *, 0x9C5) >= (u32) *arg0) {
        return 1;
    }
    return 0;
}
