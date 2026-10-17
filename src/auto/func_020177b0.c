#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02005fa8();                                /* extern */
extern M2C_UNK data_0210fb98;
extern M2C_UNK data_0210fb9c;

void func_020177b0(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_0210fb9c, 0x05000001);
    M2C_FIELD(&data_0210fb98, s16 *, 6) = func_02005fa8();
}
