#include "m2c.h"

M2C_UNK func_020960fc(u16, u16);                    /* extern */
extern s32 data_02118998;

void func_020960d8(void) {
    void *temp_r1;

    temp_r1 = data_02118998 + 0x27C0;
    func_020960fc(M2C_FIELD(temp_r1, u16 *, 0x10), M2C_FIELD(temp_r1, u16 *, 0x12));
}
