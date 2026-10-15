#include "engine.h"
#include "m2c.h"

void func_02035470(s32 arg0, s32 arg1) {
    void *temp_r2;

    if (M2C_FIELD(arg1, s32 *, 4) != arg0) {
        return;
    }
    *M2C_FIELD(arg1, void ***, 8) = M2C_FIELD(arg1, void **, 0xC);
    temp_r2                       = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void ***, 8) = (void **) M2C_FIELD(arg1, void ***, 8);
    } else {
        M2C_FIELD(arg0, void ***, 0x14) = (void **) M2C_FIELD(arg1, void ***, 8);
    }
    M2C_FIELD(arg1, s32 *, 4)     = 0;
    M2C_FIELD(arg1, void ***, 8)  = NULL;
    M2C_FIELD(arg1, void **, 0xC) = NULL;
}
