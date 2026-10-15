#include "m2c.h"

M2C_UNK func_02006fe4();                            /* extern */
M2C_UNK func_02007000();                            /* extern */
M2C_UNK func_0200701c();                            /* extern */

void func_020337a0(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
        case 1:
            func_02006fe4();
            return;
        case 2:
            func_02007000();
            return;
        case 3:
            func_0200701c();
            return;
    }
}
