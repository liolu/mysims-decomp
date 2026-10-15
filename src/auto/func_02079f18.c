#include "m2c.h"

M2C_UNK func_02081e00(void *, s32);                 /* extern */
extern void *data_02118998;

void func_02079f18(void) {
    void *temp_r0;

    temp_r0 = data_02118998 + 0x380C;
    if (M2C_FIELD(temp_r0, s32 *, 0xA8) == 0) {
        M2C_FIELD(temp_r0, s8 *, 0x4A)          = 1;
        M2C_FIELD(data_02118998, s32 *, 0x8474) = 0;
        return;
    }
    func_02081e00(
        temp_r0, M2C_FIELD(M2C_FIELD(M2C_FIELD((temp_r0 + (M2C_FIELD(temp_r0, s32 *, 0x460) * 4)), void **, 4), void **, 0x10),
                           s32 *, 8));
}
