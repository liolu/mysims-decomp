#include "m2c.h"

s32 func_02042810(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x9920);
    if ((temp_r0 >= 0xF) && (temp_r0 <= 0x17)) {
        return 1;
    }
    return 0;
}
