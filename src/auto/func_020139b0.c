#include "m2c.h"

s32 func_0200c334(void *, s32);                     /* extern */
M2C_UNK func_0200c688(M2C_UNK *);                   /* extern */
s32 func_0200c8b0(M2C_UNK *, s32, s32, s32, s32);   /* extern */
M2C_UNK func_0200c9b0(M2C_UNK *);                   /* extern */
s32 func_0200cb04(M2C_UNK *, s32, s32);             /* extern */

void func_020139b0(void *arg0) {
    u8 sp4[72];
    s32 temp_r5_2;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x14);
    temp_r4 = M2C_FIELD(arg0, void **, 0x10);
    func_0200c688(sp4);
    temp_r5_2 = M2C_FIELD(temp_r4, s32 *, 0);
    if (func_0200c8b0(sp4, func_0200c334(temp_r5 + 0x10, M2C_FIELD(temp_r5, s32 *, 0x14)), temp_r5_2,
                      temp_r5_2 + M2C_FIELD(temp_r4, s32 *, 4), -1) != 0) {
        if (M2C_FIELD(temp_r4, s32 *, 4) == func_0200cb04(sp4, M2C_FIELD(temp_r4, s32 *, 8), M2C_FIELD(temp_r4, s32 *, 4))) {
            M2C_FIELD(temp_r4, s32 *, 0xC) = 2;
        }
        func_0200c9b0(sp4);
    }
    if (M2C_FIELD(temp_r4, s32 *, 0xC) == 2) {
        return;
    }
    M2C_FIELD(temp_r4, s32 *, 0)   = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC) = 2;
}
