#include "m2c.h"

M2C_UNK func_02083c00(void *, s32);                 /* extern */

void func_02081bd4(void *arg0) {
    void *temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) <= 0) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), u8 *, 0x18) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x460) = 3;
    M2C_FIELD(arg0, s32 *, 0x2C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x30)  = 0;
    temp_r0                       = M2C_FIELD(arg0, void **, 0x10);
    func_02083c00(temp_r0, M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x10), s32 *, 0x14));
}
