#include "m2c.h"

s32 func_02003aa8();                                /* extern */
extern M2C_UNK data_02106aa8;

void func_020054b4(void) {
    M2C_FIELD(&data_02106aa8, s32 *, 0x18) = func_02003aa8();
}
