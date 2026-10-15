#include "m2c.h"

s32 func_020af3d0(u16);                             /* extern */
extern s32 data_02118994;

u8 func_02082808(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = data_02118994 + 0x958;
    return M2C_FIELD((temp_r4 + func_020af3d0((u16) (arg2 + (arg1 << 8)))), u8 *, 0x19A);
}
