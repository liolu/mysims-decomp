#include "m2c.h"

s32 func_02081dbc(s32, s32);                        /* extern */
u32 func_02085c1c();                                /* extern */
extern s32 data_02118998;

s32 func_020862a0(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4  = 0;
    temp_r0 = func_02085c1c();
    switch (temp_r0) {
        default:
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 7:
        case 8:
        case 9:
            var_r4 = 1;
        /* fallthrough */
        case 5:
        case 6:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 17:
        case 18:
            if (func_02081dbc(data_02118998 + 0x380C, 0x127) != 0) {
                var_r4 = 1;
            }
        /* fallthrough */
        case 10:
        case 19:
            if (func_02081dbc(data_02118998 + 0x380C, 0x128) != 0) {
                var_r4 = 1;
            }
        /* fallthrough */
        case 16:
        case 22:
        case 23:
        case 24:
        case 25:
            if (func_02081dbc(data_02118998 + 0x380C, 0x129) != 0) {
                var_r4 = 1;
            }
        /* fallthrough */
        case 20:
        case 21:
            if (func_02081dbc(data_02118998 + 0x380C, 0x12A) != 0) {
                var_r4 = 1;
            }
            break;
    }
    return var_r4;
}
