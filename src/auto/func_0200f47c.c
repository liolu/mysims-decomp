#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02108c34;
extern M2C_UNK func_0200f63c;

void func_0200f47c(void) {
    if (M2C_FIELD(&data_02108c34, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02108c34, u16 *, 0)    = 1U;
    M2C_FIELD(&data_02108c34, s32 *, 4)    = 0;
    M2C_FIELD(&data_02108c34, s32 *, 8)    = 0;
    M2C_FIELD(&data_02108c34, s32 *, 0x20) = 0;
    M2C_FIELD(&data_02108c34, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02108c34, s32 *, 0x10) = 0;
    func_0200af24();
    do {

    } while (func_0200b07c(5, 1) == 0);
    func_0200b030(5, &func_0200f63c);
}
