#include "m2c.h"

M2C_UNK func_020039a0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106aa4;

void func_02003aa8(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020039a0(&data_02106aa4);
}
