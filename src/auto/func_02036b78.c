#include "m2c.h"

M2C_UNK func_02034594(void *);                      /* extern */
M2C_UNK func_020369c0(s32, void *);                 /* extern */

s32 func_02036b78(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0xC) != arg0) {
        return -1;
    }
    func_02034594(arg1);
    func_020369c0(arg0, arg1);
    return 0;
}
