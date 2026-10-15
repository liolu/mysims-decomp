#include "m2c.h"

M2C_UNK func_02008e08(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0200900c(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0202a4e4();                            /* extern */
M2C_UNK func_0202a618(s32, s32 *, s32);             /* extern */
extern s32 data_020d8264;
extern M2C_UNK data_02114620;
extern M2C_UNK data_02114624;
extern M2C_UNK func_0202a558;

void func_0202a564(s32 *arg0, u32 arg1) {
    if ((arg1 < 0x100U) || (data_020d8264 == -1)) {
        func_0202a618(*arg0, ((s8 *) arg0 + 4), (arg1 >> 2) - 1);
        return;
    }
    func_0202a4e4();
    M2C_FIELD(&data_02114620, s32 *, 4) = 1;
    if (M2C_FIELD(&data_02114620, s32 *, 8) != 0) {
        func_0200900c(data_020d8264, arg0, arg1, &func_0202a558, &data_02114624);
        return;
    }
    func_02008e08(data_020d8264, arg0, arg1, &func_0202a558, &data_02114624);
}
