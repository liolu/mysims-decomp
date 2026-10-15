#include "m2c.h"

void *func_02083df8();                              /* extern */

void func_0204dc58(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x1294) == 0) {
        return;
    }
    temp_r0                         = func_02083df8();
    M2C_FIELD(temp_r0, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 0x8F8);
    M2C_FIELD(temp_r0, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x8FC);
    M2C_FIELD(temp_r0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x900);
    M2C_FIELD(temp_r0, u16 *, 0x10) = (u16) M2C_FIELD(arg0, u16 *, 0x99A);
    M2C_FIELD(temp_r0, s16 *, 0x12) = (s16) M2C_FIELD(arg0, s32 *, 0x1D78);
}
