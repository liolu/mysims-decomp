#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020177b0();                            /* extern */
M2C_UNK func_02017a80(M2C_UNK);                     /* extern */
M2C_UNK func_02017b7c();                            /* extern */
M2C_UNK func_02017e20(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210fba0;
extern M2C_UNK data_0210fc80;
extern M2C_UNK func_02017d70;
extern M2C_UNK func_02017d9c;
extern M2C_UNK func_02017e0c;

void func_02017ac8(void) {
    if (M2C_FIELD(&data_0210fba0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_0210fba0, s32 *, 8) = 1;
    func_020177b0();
    M2C_FIELD(&data_0210fba0, s32 *, 0xC) = 0;
    func_0200af24();
    do {

    } while (func_0200b07c(0xD, 1) == 0);
    func_0200b030(0xD, &func_02017d70);
    func_02017b7c();
    func_0200b030(0xD, NULL);
    func_0200b030(0xD, &func_02017d9c);
    M2C_FIELD(&data_0210fba0, s32 *, 0x18) = 0;
    func_02017e20(&data_0210fc80);
    func_0200b030(0x11, &func_02017e0c);
    func_02017a80(0);
}
