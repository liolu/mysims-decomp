#include "m2c.h"

s32 func_02083f30(void *arg0) {
    s32 *temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 **, 8);
    if (temp_r0 == NULL) {
        return 3;
    }
    return *temp_r0;
}
