#include "m2c.h"

M2C_UNK func_020085dc(s32);                         /* extern */
M2C_UNK func_02008968();                            /* extern */
M2C_UNK func_02008cb4(M2C_UNK);                     /* extern */
s32 func_0200ef14();                                /* extern */
M2C_UNK func_02011180(M2C_UNK, M2C_UNK);            /* extern */

void func_02011094(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02008cb4(0);
    func_02008cb4(1);
    func_02008cb4(2);
    func_02008cb4(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_0200ef14();
        if (var_r0 == 4) {
            do {
                func_020085dc(0xA3A47);
                var_r0 = func_0200ef14();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_02011180(1, 1);
    }
    func_02008968();
}
