#include "engine.h"
#include "m2c.h"

void func_02034594(M2C_UNK);

void func_0203466c(s32 arg0) {
    void *temp_r4;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 0x18);
    if (var_r0 != NULL) {
        do {
            temp_r4 = M2C_FIELD(var_r0, void **, 8);
            func_02034594((s32) var_r0);
            var_r0 = temp_r4;
        } while (temp_r4 != NULL);
    }
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
}
