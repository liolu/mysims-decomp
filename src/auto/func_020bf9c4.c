#include "m2c.h"

M2C_UNK func_020630ec(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_020631d0(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_0206336c(s32, M2C_UNK *, M2C_UNK *);   /* extern */
extern M2C_UNK data_021036c4;
extern M2C_UNK data_021036e5;
extern M2C_UNK data_02103706;
extern M2C_UNK data_02103727;

void func_020bf9c4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020630ec(arg0 + 4, arg1, &data_021036c4);
    func_020631d0(arg0 + 0x48, arg2, &data_021036e5);
    func_0206336c(arg0 + 0x84, &data_02103706, &data_02103727);
}
