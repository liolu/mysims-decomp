#include "m2c.h"

s32 func_0200a2f0(M2C_UNK);                         /* extern */
M2C_UNK func_0200a4c0(M2C_UNK);                     /* extern */
s32 func_0200a7dc();                                /* extern */
M2C_UNK func_0200a87c();                            /* extern */
s32 func_0200a8a4();                                /* extern */
s32 func_0200a8ec();                                /* extern */

s32 func_0200a400(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0200a8ec() == 0) {
        return 0;
    }
    temp_r0_3 = func_0200a8a4();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0200a7dc() > 0) {
        do {

        } while (func_0200a2f0(0) != 0);
        temp_r0_2 = func_0200a8a4();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0200a4c0(1);
block_12:
    func_0200a87c();
    do {
        func_0200a2f0(1);
        temp_r0 = func_0200a8a4();
    } while (temp_r0 == 0);
    return temp_r0;
}
