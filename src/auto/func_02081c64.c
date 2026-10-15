#include "m2c.h"

M2C_UNK func_02083c00(void *, s32);                 /* extern */

void func_02081c64(void *arg0) {
    s32 temp_r4;
    void *temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x18) == 0) {
        return;
    }
    temp_r4                       = M2C_FIELD(arg0, s32 *, 0x460);
    M2C_FIELD(arg0, s32 *, 0x460) = 0;
    temp_r0                       = M2C_FIELD(arg0, void **, 4);
    func_02083c00(temp_r0, M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x10), s32 *, 0x18));
    if (M2C_FIELD(arg0, u8 *, 0x4A) == 0) {
        M2C_FIELD(arg0, s32 *, 0x460) = temp_r4;
    }
}
