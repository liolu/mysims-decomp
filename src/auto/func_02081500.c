#include "m2c.h"

M2C_UNK func_02083c64();                            /* extern */

void func_02081500(s32 arg0, s32 arg1) {
    if (M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 4) == 0) {
        return;
    }
    func_02083c64();
}
