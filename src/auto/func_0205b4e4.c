#include "m2c.h"

M2C_UNK func_0205b18c(s32);                         /* extern */
M2C_UNK func_0205b21c(void *, M2C_UNK);             /* extern */

void func_0205b4e4(void *arg0) {
    func_0205b18c(arg0 + 4);
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0205b21c(arg0 + 4, 0);
}
