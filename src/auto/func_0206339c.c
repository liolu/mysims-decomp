#include "m2c.h"

M2C_UNK func_02063d84(s32);                         /* extern */

void *func_0206339c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_02063d84(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x74)  = 1;
    M2C_FIELD(arg0, s8 *, 0x75)  = 0;
    M2C_FIELD(arg0, s8 *, 0x76)  = 0;
    return arg0;
}
