#include "m2c.h"

s32 func_0200a2f0();                         /* extern */
s32 func_0200a714();                         /* extern */
M2C_UNK func_0200a87c();                            /* extern */

void func_0200a67c(M2C_UNK arg0) {
    if (func_0200a714() != 0) {
        return;
    }
    do {

    } while (func_0200a2f0(0) != 0);
    if (func_0200a714(arg0) != 0) {
        return;
    }
    func_0200a87c();
    if (func_0200a714(arg0) != 0) {
        return;
    }
    do {
        func_0200a2f0(1);
    } while (func_0200a714(arg0) == 0);
}
