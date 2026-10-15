#include "m2c.h"

M2C_UNK func_02000e68(s32);                         /* extern */
extern s32 data_020d8fdc;
extern M2C_UNK data_021189a4;

void func_02042f10(s32 arg0) {
    if (arg0 < 0) {
        return;
    }
    if (arg0 >= 4) {
        return;
    }
    func_02000e68(*((M2C_UNK *) ((s8 *) &data_021189a4 + (arg0 * 4))));
    data_020d8fdc = arg0;
}
