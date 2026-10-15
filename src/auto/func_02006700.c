#include "m2c.h"

M2C_UNK func_02007ef0();                            /* extern */

void func_02006700(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
        return;
    }
    func_02007ef0();
}
