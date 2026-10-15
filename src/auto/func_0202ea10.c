#include "m2c.h"

M2C_UNK func_0200a1bc();                            /* extern */
M2C_UNK func_0200f41c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200f434(M2C_UNK *);                   /* extern */
M2C_UNK func_0202ec34();                            /* extern */
M2C_UNK func_0202ef4c();                            /* extern */
M2C_UNK func_0202fbac();                            /* extern */
extern M2C_UNK data_02114640;
extern M2C_UNK data_02114650;
extern M2C_UNK data_0211465c;
extern M2C_UNK func_0202eaf4;
extern M2C_UNK func_0202eb2c;

void func_0202ea10(void) {
    if (M2C_FIELD(&data_02114640, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_02114640, s32 *, 0xC) = 1;
    func_0200a1bc();
    M2C_FIELD(&data_02114640, M2C_UNK **, 0x10) = &func_0202eaf4;
    M2C_FIELD(&data_02114640, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_02114640, M2C_UNK **, 0x1C) = &func_0202eb2c;
    M2C_FIELD(&data_02114640, s32 *, 0x20)      = 0;
    func_0200f41c(&data_02114650);
    func_0200f434(&data_0211465c);
    func_0202ec34();
    func_0202fbac();
    func_0202ef4c();
    M2C_FIELD(&data_02114640, s8 *, 0)  = -1;
    M2C_FIELD(&data_02114640, s32 *, 4) = 1;
}
