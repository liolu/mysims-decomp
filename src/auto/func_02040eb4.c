#include "m2c.h"

M2C_UNK func_02004300(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02033df4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203427c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02034594(void *);                      /* extern */
M2C_UNK func_0203466c(void *);                      /* extern */
M2C_UNK func_0206f190(void *);                      /* extern */

void func_02040eb4(void *arg0, s32 arg1) {
    u8 var_r5;

    var_r5 = M2C_FIELD(arg0, u8 *, 0x9700);
    if (arg1 == 1) {
        var_r5 = 0;
    } else if (arg1 == 2) {
        var_r5 = 1;
    }
    func_0206f190(arg0 + 0x812C);
    func_0203466c(arg0 + 0x294);
    func_02034594(arg0 + 0x294);
    func_0203466c(arg0 + 0x378);
    func_02034594(arg0 + 0x378);
    if (var_r5 != 0) {
        M2C_FIELD((void *) 0x0400100A, u16 *, 0) = (u16) ((M2C_FIELD((void *) 0x0400100A, u16 *, 0) & 0x43) | 0x1580);
        func_02004300((void *) 0x0400100A + 0x46, 0x12, 0x2D, 0x10, 0);
    } else {
        M2C_FIELD((void *) 0x0400100A, u16 *, 0)    = (u16) ((M2C_FIELD((void *) 0x0400100A, u16 *, 0) & 0x43) | 0x1500);
        M2C_FIELD((void *) 0x0400100A, s16 *, 0x46) = 0;
    }
    func_02033df4(arg0 + 0x294, 0);
    func_0203427c(arg0 + 0x378, 0, 0);
    *(s32 *) 0x04001010 = 0;
}
