#include "m2c.h"

M2C_UNK func_0200af24();                            /* extern */
M2C_UNK func_0200b030(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b07c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02108b70;
extern M2C_UNK func_0200dd58;

void func_0200dfd8(void) {
    if (M2C_FIELD(&data_02108b70, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02108b70, u16 *, 0) = 1U;
    func_0200af24();
    M2C_FIELD(&data_02108b70, s16 *, 0x10) = 0;
    M2C_FIELD(&data_02108b70, s32 *, 4)    = 0;
    M2C_FIELD(&data_02108b70, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02108b70, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02108b70, s16 *, 0x34) = 0;
    M2C_FIELD(&data_02108b70, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_02108b70, s16 *, 0x38) = 0;
    do {

    } while (func_0200b07c(6, 1) == 0);
    func_0200b030(6, &func_0200dd58);
}
