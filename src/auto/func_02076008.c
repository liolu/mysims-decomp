#include "m2c.h"

M2C_UNK func_02083a78(void *);                      /* extern */
extern void *data_02118998;

s32 func_02076008(void) {
    func_02083a78(data_02118998 + 0x380C);
    M2C_FIELD(data_02118998, s32 *, 0x3CB0) = 0xB;
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x8000);
    return 1;
}
