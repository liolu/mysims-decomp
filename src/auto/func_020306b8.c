#include "m2c.h"

s32 func_02023138(s32, u16);                        /* extern */
M2C_UNK func_02023188(s32, M2C_UNK);                /* extern */
s32 func_0203081c(void *);                          /* extern */

s32 func_020306b8(void *arg0) {
    if (func_02023138(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_0203081c(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02023188(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
