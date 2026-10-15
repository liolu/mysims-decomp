#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02109560;

s32 func_02011aac(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_0200856c();
    if (M2C_FIELD(&data_02109560, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_02109560, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_02008580(temp_r0);
    return (s32) var_r4;
}
