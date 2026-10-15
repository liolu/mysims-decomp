#include "m2c.h"

M2C_UNK func_02003ad0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106aa2;

void func_02003cac(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_02003ad0(&data_02106aa2);
}
