#include "m2c.h"

s32 func_02083e70(void *arg0) {
    s32 temp_r0;
    void *temp_r0_2;

    temp_r0_2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r0_2 == NULL) {
        return 0;
    }
    temp_r0 = (s32) M2C_FIELD(temp_r0_2, u16 *, 0x14) >> 8;
    return (s32) (temp_r0 + ((u32) temp_r0 >> 0x1F)) >> 1;
}
