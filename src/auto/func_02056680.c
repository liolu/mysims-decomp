#include "m2c.h"

M2C_UNK func_02056450(void *);                      /* extern */
M2C_UNK func_020566b4();                            /* extern */

void func_02056680(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x39) != 0) {
        func_020566b4(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u8 *, 0x39)  = 1U;
    func_02056450(arg0);
}
