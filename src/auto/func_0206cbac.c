#include "m2c.h"

s32 func_0200cb80(M2C_UNK *);                       /* extern */
M2C_UNK func_02023a5c(void *);                      /* extern */
M2C_UNK func_02023aa0(void *);                      /* extern */
M2C_UNK func_020344e8(void *);                      /* extern */
void *func_02042f80(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02060530(void *, M2C_UNK);             /* extern */
M2C_UNK func_020630ec(void *, s32, M2C_UNK *);      /* extern */
M2C_UNK func_020631d0(void *, s32, M2C_UNK *);      /* extern */
M2C_UNK func_0206336c(void *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020633d8(void *, void *, void *);      /* extern */
M2C_UNK func_02067fb0(void *);                      /* extern */
M2C_UNK func_02068e24(void *);                      /* extern */
M2C_UNK func_0206ce10(void *, M2C_UNK);             /* extern */
M2C_UNK func_02070844(void *);                      /* extern */
M2C_UNK func_02070878();                            /* extern */
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_020d8e44;
extern M2C_UNK data_020f9780;
extern M2C_UNK data_020f9790;
extern M2C_UNK data_020f97b0;
extern M2C_UNK data_020f97c0;
extern M2C_UNK data_020faebc;
extern M2C_UNK data_020fb031;
extern M2C_UNK data_020fb03f;
extern M2C_UNK data_020fb04d;
extern M2C_UNK data_020fb05b;

void func_0206cbac(void *arg0) {
    s32 var_r5;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *var_r6;

    if (M2C_FIELD(arg0, u8 *, 0x1A7) != 0) {
        return;
    }
    func_0206ce10(arg0, 0);
    if (func_0200cb80(&data_020faebc) == 0) {
        return;
    }
    temp_r0 = func_02042f80(0x44, 1);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_020f9780;
        func_02023a5c(temp_r0 + 4);
        M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_020f97c0;
        func_020344e8(temp_r0 + 0x28);
        M2C_FIELD(temp_r0, M2C_UNK **, 0x28) = &data_020d8e44;
    }
    M2C_FIELD(arg0, void **, 0x718) = temp_r0;
    temp_r0_2                       = func_02042f80(0x3C, 1);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r0_2, M2C_UNK **, 0) = &data_020f97b0;
        func_02060530(temp_r0_2 + 0x18, 0);
        func_02023aa0(temp_r0_2 + 4);
        M2C_FIELD(temp_r0_2, M2C_UNK **, 0) = &data_020f9790;
        func_020344e8(temp_r0_2 + 0x24);
        M2C_FIELD(temp_r0_2, M2C_UNK **, 0x24) = &data_020d8e24;
    }
    M2C_FIELD(arg0, void **, 0x71C) = temp_r0_2;
    temp_r0_3                       = func_02042f80(0x30, 1);
    if (temp_r0_3 != NULL) {
        func_02070878();
        func_02070844(temp_r0_3 + 0x18);
    }
    M2C_FIELD(arg0, void **, 0x720) = temp_r0_3;
    func_020630ec(M2C_FIELD(arg0, void **, 0x718), M2C_FIELD(arg0, s32 *, 0x3A8), &data_020fb031);
    func_020631d0(M2C_FIELD(arg0, void **, 0x71C), M2C_FIELD(arg0, s32 *, 0x3AC), &data_020fb03f);
    func_0206336c(M2C_FIELD(arg0, void **, 0x720), &data_020fb04d, &data_020fb05b);
    var_r6 = arg0 + 0x724;
    var_r5 = 0;
    do {
        func_020633d8(var_r6, M2C_FIELD(arg0, void **, 0x718), M2C_FIELD(arg0, void **, 0x71C));
        var_r5 += 1;
        var_r6 += 0x78;
    } while (var_r5 < 0x15);
    func_02067fb0(arg0);
    M2C_FIELD(arg0, u8 *, 0x1A7) = 1U;
    func_02068e24(arg0);
}
