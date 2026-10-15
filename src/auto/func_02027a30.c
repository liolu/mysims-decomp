#include "m2c.h"

M2C_UNK func_0200142c(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021116b8;
extern M2C_UNK data_02111704;
extern M2C_UNK data_021117b8;

M2C_UNK *func_02027a30(void) {
    if (!(M2C_FIELD(&data_021116b8, s32 *, 0xFC) & 8)) {
        func_0200142c(&data_02111704, &data_021117b8);
        M2C_FIELD(&data_021116b8, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021116b8, s32 *, 0xFC) | 8);
    }
    return &data_021117b8;
}
