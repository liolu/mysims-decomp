#include "m2c.h"

M2C_UNK func_020385b8(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02060b38(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020d9570;
extern M2C_UNK data_020d9590;

void func_02047e5c(s32 arg0) {
    func_02060b38(arg0 + 0x29C, &data_020d9570, 0);
    func_020385b8(arg0 + 0x2A8, &data_020d9590, 0);
}
