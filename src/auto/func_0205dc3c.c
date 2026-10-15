#include "m2c.h"

s32 func_0205b268(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0205b31c(void *, s32);                 /* extern */
M2C_UNK func_0205b718(void *, M2C_UNK);             /* extern */

s32 func_0205dc3c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x1C);
    func_0205b718(arg0, 3);
    func_0205b31c(arg0 + 4, 0);
    temp_r4 = func_0205b268(arg0 + 4, 1);
    func_0205b718(arg0, 0);
    func_0205b31c(arg0 + 4, temp_r5);
    return temp_r4;
}
