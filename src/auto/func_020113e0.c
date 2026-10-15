#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020115ec();                                /* extern */
s32 func_02011650(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02011a90();                            /* extern */
extern M2C_UNK data_02109560;

s32 func_020113e0(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_0200856c();
    if (func_020115ec() != 0) {
        func_02008580(temp_r4);
        return 3;
    }
    temp_r0 = func_02011650(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02011a90();
    func_0200b030(0xA, 0);
    M2C_FIELD(&data_02109560, s32 *, 4) = 0;
    M2C_FIELD(&data_02109560, s16 *, 0) = 0;
    func_02008580(temp_r4);
    return 0;
}
