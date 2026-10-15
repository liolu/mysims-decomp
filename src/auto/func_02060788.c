#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
s32 func_02060594(void *, u32, M2C_UNK);            /* extern */
M2C_UNK func_020608ec(u32 *, M2C_UNK, M2C_UNK *, u32 *); /* extern */
M2C_UNK func_020609b0(u32 *, M2C_UNK, M2C_UNK *, u32 *); /* extern */
M2C_UNK func_02060a74(u32 *, M2C_UNK, M2C_UNK *, u32 *); /* extern */
s32 func_02060c68(M2C_UNK);                         /* extern */
u32 func_02060d40(M2C_UNK);                         /* extern */
M2C_UNK func_02060d70(M2C_UNK);                     /* extern */
M2C_UNK func_02060de8(M2C_UNK, u32 *, u32, M2C_UNK); /* extern */
extern M2C_UNK data_021d8aac;

s32 func_02060788(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp24[540];
    u8 sp14[16];
    u8 sp4[16];
    u32 sp0;
    s32 temp_r0_2;
    s32 var_r5;
    u32 temp_r0;

    var_r5 = 0;
    if (func_02060c68(arg1) != 0) {
        func_02006da0(&data_021d8aac);
        temp_r0 = func_02060d40(arg1);
        if (temp_r0 >= 4U) {
            func_02060de8(arg1, &sp0, 4U, 0);
            temp_r0_2 = sp0 & 0xF0;
            switch (temp_r0_2) {                    /* irregular */
                case 48:
                    if (func_02060594(arg0, sp0 >> 8, arg2) != 0) {
                        func_02060a74(M2C_FIELD(arg0, u32 **, 4), arg1, sp14, &sp0);
                        var_r5 = 1;
                    }
                    break;
                case 16:
                    if (func_02060594(arg0, sp0 >> 8, arg2) != 0) {
                        func_020609b0(M2C_FIELD(arg0, u32 **, 4), arg1, sp4, &sp0);
                        var_r5 = 1;
                    }
                    break;
                case 32:
                    if (func_02060594(arg0, sp0 >> 8, arg2) != 0) {
                        func_020608ec(M2C_FIELD(arg0, u32 **, 4), arg1, sp24, &sp0);
                        var_r5 = 1;
                    }
                    break;
                default:
                    func_02060d70(arg1);
                    if (func_02060594(arg0, temp_r0, arg2) != 0) {
                        func_02060de8(arg1, M2C_FIELD(arg0, u32 **, 4), temp_r0, 0);
                        var_r5 = 1;
                    }
                    break;
            }
        }
        func_02006e24(&data_021d8aac);
    }
    return var_r5;
}
