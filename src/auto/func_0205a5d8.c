#include "m2c.h"

M2C_UNK func_02007000(void *, s32);                 /* extern */
M2C_UNK func_0201a834(void *, M2C_UNK);             /* extern */
s32 func_02060b38(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0205a5d8(void *arg0, M2C_UNK arg1) {
    void *temp_r5;

    if (func_02060b38(arg0 + 4, arg1, -4) == 0) {
        return 0;
    }
    func_02007000(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, s32 *, 0xC));
    temp_r5 = M2C_FIELD(arg0, void **, 8);
    func_0201a834(arg0 + 0x10, arg1);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(temp_r5, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(temp_r5, s32 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0xA0) = (u16) M2C_FIELD(temp_r5, u16 *, 0x10);
    M2C_FIELD(arg0, u16 *, 0xA2) = (u16) M2C_FIELD(temp_r5, u16 *, 0x12);
    return 1;
}
