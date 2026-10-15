#include "m2c.h"

M2C_UNK func_02008968();                            /* extern */
s32 func_0200ff88();                                /* extern */

void func_0200ff98(void) {
    if (func_0200ff88() != 0) {
        return;
    }
    func_02008968();
}
