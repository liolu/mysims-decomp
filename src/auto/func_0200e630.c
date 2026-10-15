#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02108bac;
extern M2C_UNK func_0200e790;

void func_0200e630(void) {
    if (M2C_FIELD(&data_02108bac, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02108bac, u16 *, 0) = 1U;
    M2C_FIELD(&data_02108bac, s32 *, 4) = 0;
    M2C_FIELD(&data_02108bac, s32 *, 8) = 0;
    func_0200af24();
    do {

    } while (func_0200b07c(9, 1) == 0);
    *(s32 *) 0x027FFF90 = 0;
    func_0200b030(9, &func_0200e790);
}
