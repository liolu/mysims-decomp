#include "m2c.h"

M2C_UNK func_02055894(void *);                      /* extern */

void func_020ae728(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x210) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x109) != 0) {
        func_02055894(arg0 + 4);
    }
    M2C_FIELD(arg0, u8 *, 0x210)  = 0U;
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
}
