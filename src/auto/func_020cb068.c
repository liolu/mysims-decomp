#include "m2c.h"

M2C_UNK func_0200f404(M2C_UNK *);                   /* extern */
M2C_UNK func_0200f434(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021dacb0;
extern M2C_UNK data_021dacb4;
extern M2C_UNK data_021dacc0;
extern M2C_UNK func_020cb0c0;
extern M2C_UNK func_020cb0d4;

void func_020cb068(void) {
    M2C_FIELD(&data_021dacb0, M2C_UNK **, 4)    = &func_020cb0c0;
    M2C_FIELD(&data_021dacb0, s32 *, 8)         = 0;
    M2C_FIELD(&data_021dacb0, M2C_UNK **, 0x10) = &func_020cb0d4;
    M2C_FIELD(&data_021dacb0, s32 *, 0x14)      = 0;
    func_0200f404(&data_021dacb4);
    func_0200f434(&data_021dacc0);
    M2C_FIELD(&data_021dacb0, s8 *, 1) = 0;
}
