#include "m2c.h"

M2C_UNK func_02009274(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_0210fb84;

void func_020174cc(s32 arg0) {
    M2C_FIELD(&data_0210fb84, s32 *, 4) = arg0;
    func_02009274(arg0, 0, 0x21C);
}
