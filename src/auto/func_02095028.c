#include "m2c.h"

M2C_UNK func_02009308(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02034ee4(s32);                         /* extern */

void func_02095028(s32 arg0) {
    func_02034ee4(arg0 + 0x170C);
    func_02034ee4(arg0 + 0x1D14);
    func_02009308(arg0 + 0x1714, 0x07000000, 0x400);
    func_02009308(arg0 + 0x1D1C, 0x07000400, 0x400);
}
