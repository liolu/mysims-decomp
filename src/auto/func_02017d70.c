#include "m2c.h"

M2C_UNK func_02008968();                            /* extern */
extern s16 data_0210fb9c;

void func_02017d70(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0210fb9c = 1;
        return;
    }
    func_02008968();
}
