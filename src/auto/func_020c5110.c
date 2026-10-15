#include "m2c.h"

M2C_UNK func_020550c0(void *);                      /* extern */
M2C_UNK func_0205558c(void *);                      /* extern */

void func_020c5110(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x8CD) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xEEC) != 0) {
        func_020550c0(arg0 + 0xDE8);
        func_0205558c(arg0 + 0xDE8);
    }
    if (M2C_FIELD(arg0, u8 *, 0x10EC) != 0) {
        func_020550c0(arg0 + 0xFE8);
        func_0205558c(arg0 + 0xFE8);
    }
    if (M2C_FIELD(arg0, u8 *, 0x9F0) != 0) {
        func_0205558c(arg0 + 0x8EC);
    }
    M2C_FIELD(arg0, u8 *, 0x8CD) = 0U;
}
