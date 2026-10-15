#include "m2c.h"

M2C_UNK func_0200dfd8();                            /* extern */
s32 func_0200e050(M2C_UNK *);                       /* extern */
M2C_UNK func_0200e0e4(M2C_UNK *);                   /* extern */
M2C_UNK func_02035948();                            /* extern */

void func_02035904(void) {
    u8 sp0[8];

    func_0200dfd8();
    if (func_0200e050(sp0) != 0) {
        func_0200e0e4(sp0);
    }
    func_02035948();
}
