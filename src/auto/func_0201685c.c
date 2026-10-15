#include "m2c.h"

M2C_UNK func_02011b0c(s32);                         /* extern */
s32 func_02012084(s32, s32, u16);                   /* extern */
M2C_UNK func_02015584();                            /* extern */
M2C_UNK func_02016dd8(M2C_UNK);                     /* extern */
extern M2C_UNK data_0210fb40;

s32 func_0201685c(void) {
    s32 temp_r0;

    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s16 *, 0x528) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s16 *, 0x52A) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s16 *, 0x526) = 0;
    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s16 *, 0x548) = 0;
    func_02016dd8(0xA);
    if (M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 0xC), s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_02012084(M2C_FIELD(&data_0210fb40, s32 *, 4),
                                    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s32 *, 0x508),
                                    M2C_FIELD(&data_0210fb40, u16 *, 0));
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_02011b0c(M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s32 *, 0x508));
        M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s8 *, 0x50D) = 1;
        return 0;
    }
    func_02011b0c(M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s32 *, 0x508));
    M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 8), s8 *, 0x50D) = 1;
    func_02015584();
    return 0;
}
