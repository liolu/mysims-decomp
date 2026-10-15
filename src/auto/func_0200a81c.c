#include "m2c.h"

M2C_UNK func_020085dc(M2C_UNK);                     /* extern */
s32 func_0200a8ec();                                /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0200a7f8;

void func_0200a81c(void) {
    func_0200b030(7, &func_0200a7f8);
    if (func_0200a8ec() == 0) {
        return;
    }
    if (func_0200b07c(7, 1) != 0) {
        return;
    }
    do {
        func_020085dc(0x64);
    } while (func_0200b07c(7, 1) == 0);
}
