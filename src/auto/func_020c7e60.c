#include "m2c.h"

M2C_UNK func_020c5f44(s32, M2C_UNK, u16, M2C_UNK, void *); /* extern */
s32 func_020c5fbc(s32);                             /* extern */
M2C_UNK func_020c5fe4(s32);                         /* extern */
s32 func_020c6024(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020c7ef4(void *);                      /* extern */

s32 func_020c7e60(void *arg0) {
    s32 var_r4;
    u8 temp_r0;

    var_r4 = 1;
    if (func_020c5fbc(M2C_FIELD(arg0, s32 *, 0xA0)) == 0) {
        func_020c5fe4(M2C_FIELD(arg0, s32 *, 0xA0));
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x93);
        switch (temp_r0) {                          /* irregular */
            case 0:
                M2C_FIELD(arg0, s32 *, 0x94) = func_020c6024(M2C_FIELD(arg0, s32 *, 0xA4), 4);
                func_020c5f44(M2C_FIELD(arg0, s32 *, 0xA0), 5, M2C_FIELD(arg0, u16 *, 0x90), 0, arg0 + 0x94);
                M2C_FIELD(arg0, u8 *, 0x93) = (u8) (M2C_FIELD(arg0, u8 *, 0x93) + 1);
                break;
            case 1:
                var_r4 = 0;
                func_020c7ef4(arg0);
                M2C_FIELD(arg0, u8 *, 0x93) = 0U;
                break;
        }
    }
    return var_r4;
}
