#include "m2c.h"

M2C_UNK func_020039a0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02106a9a;

void func_020039e8(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020039a0(&data_02106a9a);
}
