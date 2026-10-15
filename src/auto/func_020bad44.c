#include "m2c.h"

s32 func_0200cb80();                       /* extern */
M2C_UNK func_0201a678();   /* extern */
M2C_UNK func_020630ec();      /* extern */
M2C_UNK func_020631d0();      /* extern */
M2C_UNK func_0206336c(); /* extern */
M2C_UNK func_020633d8();      /* extern */
M2C_UNK func_020634d0();             /* extern */
extern M2C_UNK data_02102e6e;
extern M2C_UNK data_02102e77;
extern M2C_UNK data_02102e8a;
extern M2C_UNK data_02102e9c;
extern M2C_UNK data_02102eac;
extern M2C_UNK data_02102ebf;
extern M2C_UNK data_02102ed2;
extern M2C_UNK data_02102ee4;
extern M2C_UNK data_02102ef6;
extern M2C_UNK data_02102f06;
extern M2C_UNK data_02102f16;
extern M2C_UNK data_02102f26;
extern void *data_02118994;
extern s32 data_02118998;

void func_020bad44(void *arg0) {
    u8 sp40[64];
    u8 sp0[64];
    s32 var_r8;
    void *var_r9;

    if (M2C_FIELD(arg0, s32 *, 0x2CC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2CC) = (s32) (data_02118998 + 0xE8);
    }
    if (M2C_FIELD(arg0, s32 *, 0x2D0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2D0) = (s32) (data_02118998 + 0x110);
    }
    if (M2C_FIELD(arg0, s32 *, 0x3FC) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3FC) = (s32) (data_02118998 + 0xE8);
    }
    if (M2C_FIELD(arg0, s32 *, 0x400) == 0) {
        M2C_FIELD(arg0, s32 *, 0x400) = (s32) (data_02118998 + 0x110);
    }
    if (func_0200cb80(&data_02102e6e) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2B9) != 0) {
        return;
    }
    if (data_02118994 != NULL) {
        func_0201a678(sp40, &data_02102e77, M2C_FIELD(data_02118994, u8 *, 0x14) + 0x61);
    } else {
        func_0201a678(sp40, &data_02102e8a);
    }
    func_020630ec(arg0 + 0x2D4, M2C_FIELD(arg0, s32 *, 0x2CC), sp40);
    func_020631d0(arg0 + 0x318, M2C_FIELD(arg0, s32 *, 0x2D0), &data_02102e9c);
    if (data_02118994 != NULL) {
        func_0201a678(sp40, &data_02102eac, M2C_FIELD(data_02118994, u8 *, 0x14) + 0x61);
        func_0201a678(sp0, &data_02102ebf, M2C_FIELD(data_02118994, u8 *, 0x14) + 0x61);
    } else {
        func_0201a678(sp40, &data_02102ed2);
        func_0201a678(sp0, &data_02102ee4);
    }
    func_0206336c(arg0 + 0x354, sp40, sp0);
    func_020633d8(arg0 + 0x384, arg0 + 0x2D4, arg0 + 0x318);
    func_020634d0(arg0 + 0x384, 0);
    func_020630ec(arg0 + 0x404, M2C_FIELD(arg0, s32 *, 0x3FC), &data_02102ef6);
    func_020631d0(arg0 + 0x448, M2C_FIELD(arg0, s32 *, 0x400), &data_02102f06);
    func_0206336c(arg0 + 0x484, &data_02102f16, &data_02102f26);
    var_r8 = 0;
    var_r9 = arg0 + 0x4B4;
    do {
        func_020633d8(var_r9, arg0 + 0x404, arg0 + 0x448);
        func_020634d0(var_r9, 0);
        var_r8 += 1;
        var_r9 += 0x78;
    } while (var_r8 < 3);
    M2C_FIELD(arg0, u8 *, 0x2B9) = 1U;
}
