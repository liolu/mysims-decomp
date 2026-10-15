#include "m2c.h"

s32 func_0205a6c4(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 != NULL) {
        return M2C_FIELD(temp_r0, s32 *, 0x28);
    }
    return 0;
}
