#include "m2c.h"

s32 func_0200cb80(M2C_UNK *);                       /* extern */
M2C_UNK func_0201a678(M2C_UNK *, M2C_UNK *, u16, u16, s32); /* extern */
M2C_UNK func_02083b94(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_020fb6c0;
extern M2C_UNK data_020fb6dc;
extern void *data_02118994;
extern s32 data_02118998;

s32 func_0208121c(void *arg0) {
    u8 sp4[20];
    s32 var_r4;
    void *temp_r3;

    var_r4 = 0;
    if (func_0200cb80(&data_020fb6c0) != 0) {
        temp_r3 = data_02118998 + 0x27C0;
        func_0201a678(sp4, &data_020fb6dc, M2C_FIELD(temp_r3, u16 *, 0x10), M2C_FIELD(temp_r3, u16 *, 0x12),
                      (s32) M2C_FIELD(data_02118994, u16 *, 0x9A2));
        func_02083b94(M2C_FIELD(arg0, void **, 8), sp4);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x18) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
