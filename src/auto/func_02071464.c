#include "m2c.h"

s32 func_020714b4();                                /* extern */

void func_02071464(void **arg0) {
    void *temp_r1;

    if (func_020714b4() != 0) {
        return;
    }
    temp_r1                         = *arg0;
    M2C_FIELD(temp_r1, s32 *, 0x60) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x60) + 1);
}
