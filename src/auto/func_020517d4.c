#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *);        /* extern */
void *func_02050ca4(u16, u16);                      /* extern */
M2C_UNK func_02056198(void *, M2C_UNK, M2C_UNK *);  /* extern */
M2C_UNK func_0205a570(M2C_UNK *);                   /* extern */
M2C_UNK func_0205a5a0(M2C_UNK *);                   /* extern */
s32 func_0205a5d8(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_0205a650(M2C_UNK *);                   /* extern */
s32 func_0205a694(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020d9a0e;
extern M2C_UNK data_020d9a38;
extern M2C_UNK data_020d9a62;

void func_020517d4(void *arg0) {
    u8 spA4[128];
    u8 sp0[164];
    M2C_UNK var_r5;
    s32 temp_r0;

    if (!(M2C_FIELD(func_02050ca4((u16) M2C_FIELD(arg0, s32 *, 0x8E4), (u16) M2C_FIELD(arg0, s32 *, 0x8E8)), s32 *, 0x38) &
          0x800)) {
        return;
    }
    var_r5 = 0;
    func_0205a570(sp0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8E8);
    switch (temp_r0) {                              /* irregular */
        case 1:
            func_0201a678(spA4, &data_020d9a0e);
            var_r5 = 2;
            break;
        case 2:
            func_0201a678(spA4, &data_020d9a38);
            var_r5 = 4;
            break;
        case 3:
            func_0201a678(spA4, &data_020d9a62);
            break;
    }
    if ((func_0205a5d8(sp0, spA4) != 0) && (func_0205a694(sp0) != 0)) {
        func_02056198(arg0 + 0x8EC, var_r5, sp0);
        func_0205a650(sp0);
    }
    func_0205a5a0(sp0);
}
