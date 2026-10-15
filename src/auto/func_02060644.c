#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
s32 func_02060594(void *, s32, M2C_UNK);            /* extern */
s32 func_02060c68(M2C_UNK);                         /* extern */
s32 func_02060d40(M2C_UNK);                         /* extern */
M2C_UNK func_02060de8(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
extern M2C_UNK data_021d8aac;

s32 func_02060644(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
    if (func_02060c68(arg1) != 0) {
        func_02006da0(&data_021d8aac);
        temp_r0 = func_02060d40(arg1);
        if (func_02060594(arg0, temp_r0, arg2) != 0) {
            func_02060de8(arg1, M2C_FIELD(arg0, s32 *, 4), temp_r0, 0);
            var_r5 = 1;
        }
        func_02006e24(&data_021d8aac);
    }
    return var_r5;
}
