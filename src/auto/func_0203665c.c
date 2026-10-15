#include "m2c.h"

M2C_UNK func_02025a18(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_0202e984(s32, M2C_UNK);                /* extern */
extern M2C_UNK func_0202e9a8;

void func_0203665c(s32 arg0) {
    func_0202e984(arg0, 0x40);
    func_02025a18(arg0 + 0x400, 0x40, &func_0202e9a8);
}
