#include "m2c.h"

M2C_UNK func_02009dd0(u8);                          /* extern */
M2C_UNK func_02009e70(u8, s32);                     /* extern */
M2C_UNK func_0202f4ac(void *);                      /* extern */

void func_0202f40c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02009e70(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02009dd0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0202f4ac(arg0);
}
