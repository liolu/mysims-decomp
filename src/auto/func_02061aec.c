#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020556a4(s32);                         /* extern */
M2C_UNK func_02056198(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_0205a570(M2C_UNK *);                   /* extern */
M2C_UNK func_0205a5a0(M2C_UNK *);                   /* extern */
s32 func_0205a5d8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0205a650(M2C_UNK *);                   /* extern */
s32 func_0205a694(M2C_UNK *);                       /* extern */
s32 func_020619d8(void *, u32);                     /* extern */
extern M2C_UNK data_020d0c0c;
extern M2C_UNK data_020e4864;
extern M2C_UNK data_020e49cc;
extern M2C_UNK data_020f9629;
extern s32 data_02118998;

u32 func_02061aec(void *arg0, u32 arg1) {
    u8 spA4[128];
    u8 sp0[164];
    s32 temp_r0;
    s32 temp_r2;
    u32 var_r4;
    u32 var_r5;

    var_r4 = 0;
    func_0205a570(sp0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    var_r5  = 0;
    if (temp_r0 == 0) {
        var_r5 = 0x1E;
    } else if (temp_r0 == 1) {
        var_r5 = 0x1F;
    }
    if (func_020619d8(arg0, arg1) != 0) {
        if (arg1 < var_r5) {
            temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_r2 == 0) {
                func_0201a678(spA4, &data_020f9629, *((M2C_UNK *) ((s8 *) &data_020d0c0c + (temp_r2 * 4))),
                              *((M2C_UNK *) ((s8 *) &data_020e4864 + (arg1 * 4))));
            } else {
                func_0201a678(spA4, &data_020f9629, *((M2C_UNK *) ((s8 *) &data_020d0c0c + (temp_r2 * 4))),
                              *((M2C_UNK *) ((s8 *) &data_020e49cc + (arg1 * 4))));
            }
        }
        if ((func_0205a5d8(sp0, spA4) != 0) && (func_0205a694(sp0) != 0)) {
            if (arg1 < var_r5) {
                func_02056198(data_02118998 + 0x27D8, M2C_FIELD(arg0, s32 *, 0xC) + 1, sp0);
                func_020556a4(data_02118998 + 0x27D8);
                var_r4 = 1;
            }
            func_0205a650(sp0);
        }
    }
    func_0205a5a0(sp0);
    return var_r4;
}
