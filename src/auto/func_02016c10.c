#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_02008968();                            /* extern */
M2C_UNK func_02016b7c();                            /* extern */
extern M2C_UNK data_0210fb40;

void func_02016c10(void) {
    s32 temp_r4;

    temp_r4 = func_0200856c();
    if (M2C_FIELD(M2C_FIELD(&data_0210fb40, void **, 0xC), s32 *, 0x1320) != 0) {
        func_02008968();
    }
    func_02016b7c();
    func_02008580(temp_r4);
}
