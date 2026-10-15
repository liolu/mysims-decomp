#include "m2c.h"

M2C_UNK func_02020248(s32, s32);                    /* extern */
s32 func_02034064();                                /* extern */

void func_020340a0(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    func_02020248(temp_r4, func_02034064());
}
