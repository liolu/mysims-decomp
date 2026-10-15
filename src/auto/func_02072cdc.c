#include "m2c.h"

M2C_UNK func_0208c2e0(void *, s32);                 /* extern */
extern void *data_02118998;

s32 func_02072cdc(s32 *arg0) {
    func_0208c2e0(data_02118998 + 0x39B4, *arg0);
    M2C_FIELD(data_02118998, s32 *, 0x29DC) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x29DC) | 1);
    return 1;
}
