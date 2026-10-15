#include "m2c.h"

s8 func_020422b0(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x96E8);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s8 *, 0x2B4);
    }
    return 4;
}
