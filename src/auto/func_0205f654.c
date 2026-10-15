#include "m2c.h"

M2C_UNK func_0205ed08(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_0205f654(void *arg0) {
    func_0205ed08(arg0, 0, 0x20, 0x16, 0x18);
    func_02060604(arg0 + 0x194);
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x10000);
}
