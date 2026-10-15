#include "m2c.h"

M2C_UNK func_0200ccc8();                            /* extern */
extern s32 data_02108af8;

void func_0200c660(s32 arg0) {
    if (data_02108af8 != 0) {
        return;
    }
    data_02108af8 = 1;
    func_0200ccc8(arg0);
}
