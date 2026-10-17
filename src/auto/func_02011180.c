#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_0200b0a0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02011180(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_0200b0a0(0xE, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(arg1);
    } while (func_0200b0a0(0xE, arg0, 0) != 0);
}
