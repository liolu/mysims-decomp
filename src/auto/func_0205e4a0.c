#include "m2c.h"

M2C_UNK func_0204306c(s32);                         /* extern */
M2C_UNK func_0206054c(s32);                         /* extern */
extern s32 data_021d8aa8;

void func_0205e4a0(void) {
    s32 temp_r4;

    temp_r4 = data_021d8aa8;
    if (temp_r4 != 0) {
        func_0206054c(temp_r4 + 4);
        func_0204306c(temp_r4);
    }
    data_021d8aa8 = 0;
}
