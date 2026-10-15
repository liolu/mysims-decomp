#include "m2c.h"

void *func_0205a678(void *arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (temp_r1 != NULL) {
        temp_r0 = M2C_FIELD(temp_r1, s32 *, 0x14);
        if (temp_r0 != 0) {
            return temp_r1 + temp_r0;
        }
    }
    return NULL;
}
