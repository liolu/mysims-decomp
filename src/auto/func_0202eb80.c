#include "m2c.h"

M2C_UNK func_02009fb4(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02116a40;

void func_0202eb80(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02009fb4(arg0, 0);
    M2C_FIELD(&data_02116a40, s32 *, 8) = (s32) (M2C_FIELD(&data_02116a40, s32 *, 8) & ~arg0);
}
