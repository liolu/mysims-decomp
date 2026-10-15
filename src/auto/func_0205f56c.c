#include "m2c.h"

M2C_UNK func_0205b690(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0205bfe8(void *);                          /* extern */
M2C_UNK func_0205cc1c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0205f69c(void *);                      /* extern */
s32 func_02060594(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_0205f56c(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) & ~0xFFFF);
    func_02060604(arg0 + 0x194);
    temp_r0                       = func_0205bfe8(arg0);
    M2C_FIELD(arg0, s32 *, 0x1A8) = temp_r0;
    if (temp_r0 < 0xF0) {
        func_0205b690(arg0, 0xB3, 0xC0, 8, 0xF8);
        func_0205cc1c(arg0, 1, 0);
    } else if (func_02060594(arg0 + 0x194, 0x880, 0) == 0) {
        func_0205b690(arg0, 0xB3, 0xC0, 8, 0xF8);
        func_0205cc1c(arg0, 0, 0);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0xA;
        func_0205f69c(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x10000);
    M2C_FIELD(arg0, s32 *, 0x174) = 2;
}
