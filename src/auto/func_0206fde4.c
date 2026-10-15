#include "m2c.h"

void func_0206fde4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1A4) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x150) == 1) {
        M2C_FIELD(arg0, s8 *, 0x1B0) = 0;
    }
}
