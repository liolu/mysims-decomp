#include "m2c.h"

M2C_UNK func_0207aeec(M2C_UNK);                     /* extern */
extern void *data_02118998;

s32 func_020743b0(s32 *arg0) {
    s32 temp_r0;

    M2C_FIELD(data_02118998, s32 *, 0x38BC) = 0xF;
    temp_r0                                 = *arg0;
    if (temp_r0 == 1) {
        M2C_FIELD(data_02118998, s32 *, 0x38BC) = 0x13;
    } else if (temp_r0 == 2) {
        M2C_FIELD(data_02118998, s32 *, 0x38BC) = 0x15;
    }
    func_0207aeec(0);
    return 1;
}
