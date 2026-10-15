#include "m2c.h"

M2C_UNK func_02048fd8(void *, s32);                 /* extern */
M2C_UNK func_02083c00(void *, s32);                 /* extern */
extern void *data_02118998;

s32 func_02081e18(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r4;
    void *temp_r1;

    var_r4 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x4EC) != 0) {
        return 0;
    }
    if (M2C_FIELD(data_02118998, u8 *, 0x9916) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x478);
        if (temp_r0 & 0x4000) {
            return 1;
        }
        if (temp_r0 & 1) {
            return 0;
        }
        goto block_7;
    }
block_7:
    func_02048fd8(data_02118998 + 0x244C, M2C_FIELD(data_02118998, s32 *, 0x35D4));
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (var_r4 > 0xA) {
        var_r4 = 0;
    }
    if (M2C_FIELD(temp_r1, u8 *, 0x18) != 0) {
        temp_r1_2 = M2C_FIELD(M2C_FIELD(temp_r1, void **, 0x10), s32 *, 0x20);
        if (temp_r1_2 != 0) {
            temp_r6                       = M2C_FIELD(arg0, s32 *, 0x460);
            M2C_FIELD(arg0, s32 *, 0x460) = 1;
            func_02083c00(M2C_FIELD(arg0, void **, 8), temp_r1_2 + var_r4);
            M2C_FIELD(arg0, s32 *, 0x460) = temp_r6;
        }
        if (M2C_FIELD(data_02118998, s32 *, 0x3C88) & 0x40) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 1;
}
