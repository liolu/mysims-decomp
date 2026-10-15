#include "m2c.h"

M2C_UNK func_02004f88(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02004fe0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02005300();                            /* extern */
M2C_UNK func_02005348(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020053b4();                            /* extern */
M2C_UNK func_020054b4();                            /* extern */
M2C_UNK func_020054cc(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_02005530();                            /* extern */
M2C_UNK func_02005758();                            /* extern */
M2C_UNK func_0200578c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020057f8();                            /* extern */
M2C_UNK func_0200701c(s32, s32);                    /* extern */
M2C_UNK func_02023ac0(void *, s32, M2C_UNK);        /* extern */

void func_02023f4c(void *arg0, M2C_UNK arg1, s32 arg2, void *arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_0200701c(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
        case 1:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_02005300();
                func_02005348(temp_r4, arg1, temp_r5);
                func_020053b4();
            } else {
                func_02004f88(temp_r4, arg1, temp_r5);
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s32 *, 4) != 0) {
                func_020054b4();
                func_020054cc(temp_r4, arg1, temp_r5);
                func_02005530();
            } else {
                func_02004fe0(temp_r4, arg1, temp_r5);
            }
            break;
        case 0:
            func_02005758();
            func_0200578c(temp_r4, arg1, temp_r5);
            func_020057f8();
            break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_02023ac0(arg3, arg2, arg1);
}
