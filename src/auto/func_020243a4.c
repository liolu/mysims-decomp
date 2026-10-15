#include "m2c.h"

s32 func_02023960(void *, s32);                     /* extern */
s32 func_0202396c();                                /* extern */
M2C_UNK func_020239e0(void *);                      /* extern */
M2C_UNK func_02024260(void *);                      /* extern */

void func_020243a4(void *arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1                      = func_0202396c();
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    if (func_02023960(arg0, temp_r1) == 0) {
        func_020239e0(arg0);
    }
    func_02024260(arg0);
}
