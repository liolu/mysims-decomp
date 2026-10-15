#include "m2c.h"

M2C_UNK func_02023988(void *);                      /* extern */
M2C_UNK func_02024228(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202438c(void *, M2C_UNK);             /* extern */

void func_02024350(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_02024228(arg0 + 0x3C, 1);
    func_02023988(arg0);
    func_0202438c(arg0, arg1);
}
