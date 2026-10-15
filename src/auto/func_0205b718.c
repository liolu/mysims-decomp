#include "m2c.h"

M2C_UNK func_0205b21c();                 /* extern */

void func_0205b718(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0205b21c(arg0 + 4);
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        return;
    }
    func_0205b21c(arg0 + 0x24, arg1);
}
