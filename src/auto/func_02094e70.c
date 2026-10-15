#include "m2c.h"

M2C_UNK func_020379d4();                            /* extern */

void func_02094e70(void *arg0) {
    func_020379d4();
    M2C_FIELD(arg0, s32 *, 0x2328) = (s32) (M2C_FIELD(arg0, s32 *, 0x2328) + 1);
}
