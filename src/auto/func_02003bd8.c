#include "m2c.h"

M2C_UNK func_02003ad0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106a9a;

void func_02003bd8(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02003ad0(&data_02106a9a);
}
