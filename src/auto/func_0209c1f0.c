#include "m2c.h"

M2C_UNK func_02044d9c(void *, u16);                 /* extern */
M2C_UNK func_0204519c(void *, u16);                 /* extern */
void *func_0208403c(M2C_UNK);                       /* extern */
void *func_02084058(M2C_UNK);                       /* extern */

void func_0209c1f0(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                       = func_0208403c(0);
    M2C_FIELD(arg0, u16 *, 0xDCC) = (u16) M2C_FIELD(temp_r0, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0xDD0) = (u16) M2C_FIELD(temp_r0, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0xDCE) = (u16) M2C_FIELD(temp_r0, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0xDD2) = (u16) M2C_FIELD(temp_r0, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0xDDA) = (u16) M2C_FIELD(temp_r0, u16 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0xDDC) = (u16) M2C_FIELD(temp_r0, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0xDDE) = (u16) M2C_FIELD(temp_r0, u16 *, 0xA);
    temp_r0_2                     = func_02084058(0);
    func_02044d9c(arg0, M2C_FIELD(temp_r0_2, u16 *, 0));
    func_0204519c(arg0, M2C_FIELD(temp_r0_2, u16 *, 2));
    M2C_FIELD(arg0, s16 *, 0x99A) = 0;
    M2C_FIELD(arg0, s32 *, 0xDB8) = 0;
}
