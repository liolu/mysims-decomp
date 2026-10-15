#include "m2c.h"

M2C_UNK func_020226b4(s32, M2C_UNK);                /* extern */
s32 func_0203081c(s32 *);                           /* extern */

s32 func_020307e8(s32 *arg0, s32 arg1) {
    func_020226b4(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0203081c(arg0) != 0) {
        return 1;
    }
    return 0;
}
