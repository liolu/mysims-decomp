#include "m2c.h"

M2C_UNK func_020085dc(s32);                         /* extern */
M2C_UNK func_0200ebcc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0200ee40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200ef6c(s32 *, s32 *);                /* extern */
s32 func_0200f2f8(M2C_UNK);                         /* extern */
s32 func_0200f318();                                /* extern */

void func_0200ee68(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_020085dc(0x996A00);
    if (func_0200f318() != 1) {
        func_0200ef6c(&sp4, &sp0);
        if (sp4 != 0) {
            func_0200ee40(0, 0);
        }
        if (sp0 != 0) {
            func_0200ee40(1, 0);
        }
        if (func_0200f2f8(1) == 0) {
            do {
                func_020085dc(0x996A00);
            } while (func_0200f2f8(1) == 0);
        }
    }
    func_0200ebcc(0xE, arg0, arg1);
}
