#include "m2c.h"

s32 func_02035eb0(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0xB2) != 0) || ((u32) M2C_FIELD(arg0, u8 *, 0xB3) < 0x1FU)) {
        return 1;
    }
    return 0;
}
