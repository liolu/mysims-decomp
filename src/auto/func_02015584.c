#include "m2c.h"

s32 func_02011b0c(M2C_UNK *);                       /* extern */
s32 func_02012a7c(M2C_UNK *, u16, u16, u16, s32);   /* extern */
M2C_UNK func_02016fbc(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_020d83bc;
extern M2C_UNK func_02015618;

void func_02015584(void) {
    func_02016fbc(0x80, func_02011b0c(&func_02015618));
    func_02016fbc(0x1D, func_02012a7c(&func_02015618, M2C_FIELD(&data_020d83bc, u16 *, 6), M2C_FIELD(&data_020d83bc, u16 *, 2),
                                      M2C_FIELD(&data_020d83bc, u16 *, 0), (s32) M2C_FIELD(&data_020d83bc, u16 *, 4)));
}
