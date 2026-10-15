#include "m2c.h"

M2C_UNK func_02056450(void *);                      /* extern */
M2C_UNK func_020565b4();                            /* extern */

void func_0205658c(void *arg0, s32 arg1, s32 arg2) {
    func_020565b4();
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    func_02056450(arg0);
}
