#include "m2c.h"

M2C_UNK func_02027750(s32, s32);                    /* extern */
s32 func_020389b8(s32);                             /* extern */
M2C_UNK func_02038af8(void *, s32);                 /* extern */
s32 func_02038bf8(void *);                          /* extern */
s32 func_02038c14(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02038f18(void *, s32);                 /* extern */
M2C_UNK func_02054a4c(void *);                      /* extern */
M2C_UNK func_02054c14(void *, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0205558c();                            /* extern */
M2C_UNK func_02055894();                            /* extern */

void func_02055794(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 temp_r5_2;

    if (M2C_FIELD(arg0, u8 *, 0x104) != 0) {
        func_0205558c(arg0);
    } else if (M2C_FIELD(arg0, u8 *, 0x105) != 0) {
        func_02055894(arg0);
    }
    if ((arg1 != NULL) && (arg2 != 0)) {
        func_02038af8(arg0 + 0xBC, M2C_FIELD(arg1, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x100) = arg2;
        temp_r5                       = func_02038bf8(arg0 + 0xBC);
        func_02027750(temp_r5, func_020389b8(M2C_FIELD(arg0, s32 *, 0x100)));
        if (arg3 != 0) {
            temp_r5_2 = func_02038c14(arg0 + 0xBC, 0);
            func_02054c14(arg0, 0, arg3, temp_r5_2, func_020389b8(M2C_FIELD(arg0, s32 *, 0x100)));
        }
        func_02038f18(arg0 + 0x144, func_02038c14(arg0 + 0xBC, 0));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0;
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1FC);
        if (temp_r0_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x180) = temp_r0_2;
        }
        func_02054a4c(arg0);
        M2C_FIELD(arg0, s8 *, 0x108) = 1;
        M2C_FIELD(arg0, u8 *, 0x105) = 1U;
    }
}
