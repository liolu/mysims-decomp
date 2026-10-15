#include "m2c.h"

M2C_UNK func_02058464(s32);                         /* extern */
M2C_UNK func_0206218c(s32);                         /* extern */

void func_02040df8(void *arg0) {
    func_02058464(arg0 + 0x273C);
    func_0206218c(M2C_FIELD(arg0, s32 *, 0x3808));
}
