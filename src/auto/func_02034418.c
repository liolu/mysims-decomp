#include "m2c.h"

M2C_UNK func_02020248(s32, s32);                    /* extern */
s32 func_02034358(s32);                             /* extern */
s32 func_02034404();                                /* extern */

void func_02034418(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r4 = func_02034404();
    func_02020248(temp_r4, func_02034358(temp_r5));
}
