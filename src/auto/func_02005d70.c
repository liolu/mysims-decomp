#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_02005e50(); /* extern */

void func_02005d70(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_02005e50() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_02005e50(arg0, arg1, arg2, arg3) > 0);
}
