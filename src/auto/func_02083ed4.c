#include "m2c.h"

s32 func_02083ed4(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u8 *, 0x25) != 0)) {
        return 1;
    }
    return 0;
}
