#include "m2c.h"

M2C_UNK func_02061c3c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02061ce0();                            /* extern */
M2C_UNK func_020b4738(void *);                      /* extern */
M2C_UNK func_020b4a6c(void *);                      /* extern */
M2C_UNK func_020b7544(void *);                      /* extern */
s32 func_020b83b0();                                /* extern */
M2C_UNK func_020b88fc();                            /* extern */

void func_020b46a4(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 8);
    switch (temp_r1) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
            func_020b88fc(arg0);
            func_020b7544(arg0);
            M2C_FIELD(arg0, u16 *, 8) = 2U;
            return;
        case 2:
            if (func_020b83b0() != 0) {
                return;
            }
            func_020b4738(arg0);
            return;
        case 4:
            if (func_020b83b0() != 0) {
                return;
            }
            func_020b4a6c(arg0);
            return;
        default:
            M2C_FIELD(arg0, u16 *, 8) = 0U;
            func_02061ce0(arg0);
            func_02061c3c(arg0, 1);
            return;
    }
}
