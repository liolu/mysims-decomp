#include "m2c.h"

void *func_02052aa4(s32);                           /* extern */
extern s32 data_02118994;

void func_02040da4(void *arg0) {
    void *temp_r0;
    void *temp_r4;

    temp_r4 = data_02118994 + 0x178;
    temp_r0 = func_02052aa4(arg0 + 0x27C0);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0) = (u16) M2C_FIELD(temp_r0, s32 *, 0);
        M2C_FIELD(temp_r4, u16 *, 2) = (u16) M2C_FIELD(temp_r0, s32 *, 4);
        return;
    }
    M2C_FIELD(temp_r4, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 0x27D0);
    M2C_FIELD(temp_r4, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0x27D2);
}
