#include "m2c.h"

M2C_UNK func_02061c3c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02061ce0(void *);                      /* extern */
M2C_UNK func_020b4f1c(void *);                      /* extern */
M2C_UNK func_020b7544(void *);                      /* extern */
s32 func_020b83b0(void *);                          /* extern */
M2C_UNK func_020b886c();                            /* extern */
M2C_UNK func_020b88fc(void *);                      /* extern */

void func_020b4e74(void *arg0) {
    u16 temp_r0;

    func_020b886c();
    if ((M2C_FIELD(arg0, u16 *, 0x2FB0) == 0) && !(M2C_FIELD(arg0, s32 *, 0x5E4) & 4)) {
        M2C_FIELD(arg0, s8 *, 0x560) = 0;
        M2C_FIELD(arg0, s8 *, 0x561) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 8);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
            func_020b88fc(arg0);
            func_020b7544(arg0);
            M2C_FIELD(arg0, u16 *, 8) = 2U;
            return;
        case 2:
            if (func_020b83b0(arg0) != 0) {
                return;
            }
            func_020b4f1c(arg0);
            return;
        default:
            M2C_FIELD(arg0, u16 *, 8) = 0U;
            func_02061ce0(arg0);
            func_02061c3c(arg0, 1);
            return;
    }
}
