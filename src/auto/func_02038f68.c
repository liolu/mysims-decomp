#include "m2c.h"

M2C_UNK func_02027040(s32, s32);                    /* extern */

void func_02038f68(void *arg0, void *arg1) {
    func_02027040(arg0 + 4, M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg1, void **, 0x10) = arg0;
    M2C_FIELD(arg1, void **, 0x14) = (void *) M2C_FIELD(arg0, void **, 0x58);
    M2C_FIELD(arg0, void **, 0x58) = arg1;
}
