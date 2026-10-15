#include "m2c.h"

M2C_UNK func_02038070(void *);                      /* extern */
M2C_UNK func_0204a8a0(void *);                      /* extern */

void func_02039e10(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x96EC) == 2) {
        func_0204a8a0(arg0 + 0x244C);
    }
    func_02038070(arg0);
}
