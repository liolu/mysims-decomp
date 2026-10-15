#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02109540;
extern M2C_UNK func_02011020;

void func_02010ff4(void) {
    func_0200af24();
    func_0200b030(0xE, &func_02011020);
    M2C_FIELD(&data_02109540, s32 *, 4) = 0;
}
