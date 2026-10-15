#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02106eb0;
extern M2C_UNK func_02008658;

void func_02008604(void) {
    if (M2C_FIELD(&data_02106eb0, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_02106eb0, u16 *, 2) = 1U;
    func_0200af24();
    do {

    } while (func_0200b07c(0xC, 1) == 0);
    func_0200b030(0xC, &func_02008658);
}
