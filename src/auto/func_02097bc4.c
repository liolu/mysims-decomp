#include "m2c.h"

M2C_UNK func_0205ed08(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0206f6dc(s32, M2C_UNK);                /* extern */
extern s32 data_02118998;

void func_02097bc4(void *arg0) {
    func_0206f6dc(data_02118998 + 0x812C, 0);
    func_0205ed08(data_02118998 + 0x9728, 0x1C, 0x20, 1, 3);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
}
