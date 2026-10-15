#include "m2c.h"

M2C_UNK func_02048fd8(void *, s32);                 /* extern */
extern void *data_02118998;

s32 func_02076224(void) {
    func_02048fd8(data_02118998 + 0x244C, M2C_FIELD(data_02118998, s32 *, 0x35D4));
    return 1;
}
