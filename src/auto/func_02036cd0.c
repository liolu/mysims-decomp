#include "m2c.h"

M2C_UNK func_02022288(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02034594(void *);                      /* extern */
extern M2C_UNK func_02036968;

void func_02036cd0(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 != 0) {
        func_02022288(temp_r0, 0x2C, 8, &func_02036968);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    func_02034594(arg0);
}
