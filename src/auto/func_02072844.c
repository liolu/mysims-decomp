#include "m2c.h"

M2C_UNK func_0205f420(void *);                      /* extern */
M2C_UNK func_0206f254(void *);                      /* extern */
M2C_UNK func_02076a40();                            /* extern */
s32 func_02095720(void *);                          /* extern */
extern void *data_02118998;

s32 func_02072844(void) {
    M2C_FIELD(data_02118998, s32 *, 0x3838) = 0;
    M2C_FIELD(data_02118998, s32 *, 0x383C) = 0;
    M2C_FIELD(data_02118998, s8 *, 0x384E)  = 0;
    if (func_02095720(data_02118998 + 0x3CFC) == 0) {
        func_0205f420(data_02118998 + 0x9728);
    }
    M2C_FIELD(data_02118998, s32 *, 0x3878) = 0;
    M2C_FIELD(data_02118998, s32 *, 0x3CEC) = 0;
    M2C_FIELD(data_02118998, s8 *, 0x3856)  = 0;
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~1);
    M2C_FIELD(data_02118998, s8 *, 0x3CD9)  = 0;
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~1);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~4);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~0x40);
    if (func_02095720(data_02118998 + 0x3CFC) == 0) {
        M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~0x1000);
    }
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) & ~0x800);
    M2C_FIELD(data_02118998, s8 *, 0x3CD8)  = 1;
    func_02076a40();
    M2C_FIELD(data_02118998, s32 *, 0x3C94) = 0;
    M2C_FIELD(data_02118998, s32 *, 0x3C98) = 0;
    M2C_FIELD(data_02118998, s16 *, 0x384C) = 0;
    func_0206f254(data_02118998 + 0x812C);
    M2C_FIELD(data_02118998, s32 *, 0x3CCC) = 0;
    return 1;
}
