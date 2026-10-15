#include "m2c.h"

M2C_UNK func_02043094(s32);                         /* extern */

void func_0205df80(void *arg0) {
    func_02043094(M2C_FIELD(arg0, s32 *, 0x80));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = -1;
}
