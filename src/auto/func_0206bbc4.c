#include "m2c.h"

M2C_UNK func_020687f0(void *);                      /* extern */
M2C_UNK func_02068e90(void *);                      /* extern */
M2C_UNK func_02069214(void *);                      /* extern */
M2C_UNK func_020698f8(void *);                      /* extern */
M2C_UNK func_02069ad4(void *);                      /* extern */
s32 func_0206f8c0(void *);                          /* extern */

void func_0206bbc4(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x1A4) == 0) && (M2C_FIELD(arg0, u8 *, 0x1A5) == 0)) {

    } else {
        func_02068e90(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A8) != 0) {
        func_02069214(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AA) != 0) {
        func_020698f8(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AC) != 0) {
        func_02069ad4(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x15D) != 0) && (M2C_FIELD(arg0, u8 *, 0x184) == 0) && (func_0206f8c0(arg0) == 0)) {
        func_020687f0(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x17C) = -1;
    M2C_FIELD(arg0, s32 *, 0x180) = -1;
}
