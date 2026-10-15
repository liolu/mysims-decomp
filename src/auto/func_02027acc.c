#include "m2c.h"

M2C_UNK func_02027a74();                            /* extern */
extern M2C_UNK data_021116b8;
extern M2C_UNK data_021117e8;

M2C_UNK *func_02027acc(void) {
    if (!(M2C_FIELD(&data_021116b8, s32 *, 0xFC) & 0x80)) {
        func_02027a74();
        M2C_FIELD(&data_021116b8, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021116b8, s32 *, 0xFC) | 0x80);
    }
    return &data_021117e8;
}
