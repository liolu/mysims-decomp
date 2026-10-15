#include "m2c.h"

M2C_UNK func_0200467c(M2C_UNK, u8, u8, s32);        /* extern */
M2C_UNK func_02004734(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fccb4;

void func_0208a8ec(void *arg0) {
    M2C_UNK var_r0;

    if (M2C_FIELD(arg0, s32 *, 4) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_0200467c(var_r0, M2C_FIELD(arg0, u8 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x3D), M2C_FIELD(arg0, s32 *, 0x44));
    *(s32 *) 0x04000358 = M2C_FIELD(arg0, u16 *, 0x3E) | (M2C_FIELD(arg0, s32 *, 0x40) << 0x10);
    func_02004734(&data_020fccb4);
}
