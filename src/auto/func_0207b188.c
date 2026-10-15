#include "m2c.h"

M2C_UNK func_02042624(s32, M2C_UNK);                /* extern */
M2C_UNK func_02095688(s32, M2C_UNK);                /* extern */
extern s32 data_02118998;

s32 func_0207b188(void) {
    func_02095688(data_02118998 + 0x3CFC, 1);
    func_02042624(data_02118998, 0);
    return 1;
}
