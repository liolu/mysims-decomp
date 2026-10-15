#include "m2c.h"

M2C_UNK func_020090f0(M2C_UNK, void *, M2C_UNK);    /* extern */
extern M2C_UNK func_0202460c;
extern M2C_UNK func_02024720;
extern M2C_UNK func_020247a4;
extern M2C_UNK func_02024990;

void func_0202509c(void *arg0) {
    func_020090f0(0, arg0, 0x48);
    M2C_FIELD(arg0, s32 *, 0x10)      = 1;
    M2C_FIELD(arg0, s32 *, 0x14)      = 3;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_0202460c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &func_02024720;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &func_020247a4;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &func_02024990;
}
