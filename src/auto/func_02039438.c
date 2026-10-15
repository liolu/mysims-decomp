#include "m2c.h"

s32 func_02063fdc(void *, M2C_UNK, u8);             /* extern */
s32 func_0206402c(void *, M2C_UNK, s32, u8);        /* extern */
extern void *data_02118998;

s32 func_02039438(M2C_UNK arg0, s32 arg1) {
    if (data_02118998 != NULL) {
        if (arg1 != 0xFFFE) {
            return func_0206402c(data_02118998 + 0x1778, arg0, arg1, M2C_FIELD(data_02118998, u8 *, 0x1648));
        }
        return func_02063fdc(data_02118998 + 0x1778, arg0, M2C_FIELD(data_02118998, u8 *, 0x1648));
    }
    return 0;
}
