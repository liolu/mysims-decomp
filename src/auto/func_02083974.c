#include "m2c.h"

M2C_UNK func_0205ecec(s32);                         /* extern */
extern s32 data_02118998;

void func_02083974(void *arg0, s8 arg1) {
    void *temp_ip;
    void *temp_r0;
    void *temp_r3;

    temp_ip = data_02118998 + 0x27C0;
    if ((M2C_FIELD(temp_ip, u16 *, 0x10) == 7) && (M2C_FIELD(temp_ip, u16 *, 0x12) == 2)) {
        M2C_FIELD(arg0, s8 *, 0x4E5) = arg1;
        if (arg1 != 0) {
            temp_r0                         = data_02118998 + 0x812C;
            M2C_FIELD(temp_r0, s8 *, 0x38D) = 1;
            M2C_FIELD(temp_r0, s8 *, 0x1AE) = 1;
            return;
        }
        temp_r3                         = data_02118998 + 0x812C;
        M2C_FIELD(temp_r3, s8 *, 0x38D) = 0;
        M2C_FIELD(temp_r3, s8 *, 0x1AE) = 1;
        func_0205ecec(data_02118998 + 0x9728);
    }
}
