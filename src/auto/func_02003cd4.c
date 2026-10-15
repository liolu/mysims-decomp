#include "m2c.h"

M2C_UNK func_02003ad0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106aa4;

void func_02003cd4(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_02003ad0(&data_02106aa4);
}
