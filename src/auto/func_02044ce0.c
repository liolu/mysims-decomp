#include "m2c.h"

M2C_UNK func_02055918(s32, M2C_UNK, M2C_UNK, s32);  /* extern */
extern s32 data_02118998;

void func_02044ce0(s32 arg0) {
    if (data_02118998 == 0) {
        return;
    }
    func_02055918(arg0 + 0x8EC, 0, 0x1C, data_02118998 + 0x2564);
}
