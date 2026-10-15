#include "m2c.h"

s32 func_02023214();                                /* extern */
s32 func_02023220();                                /* extern */

s32 func_0206411c(s32 *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = *arg0;
    switch (temp_r3) {                              /* irregular */
        case 0x4E414E52:
            return func_02023214(arg0, arg1);
        case 0x4E4D4152:
            return func_02023220(arg0, arg1);
        default:
            return 0;
    }
}
