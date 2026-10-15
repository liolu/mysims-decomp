#include "m2c.h"

M2C_UNK func_020013f8(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK func_0200142c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020017b8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_021116b8;
extern M2C_UNK data_02111704;
extern M2C_UNK data_02111774;
extern M2C_UNK data_021117e8;
extern M2C_UNK data_02111818;

void func_02027a74(void) {
    func_020017b8(&data_02111774, &data_02111704, &data_021117e8);
    func_020013f8(&data_021117e8, &data_021117e8, M2C_FIELD(&data_021116b8, s32 *, 0xEC),
                  M2C_FIELD(&data_021116b8, s32 *, 0xF0), M2C_FIELD(&data_021116b8, s32 *, 0xF4));
    func_0200142c(&data_021117e8, &data_02111818);
}
