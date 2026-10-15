#include "m2c.h"

M2C_UNK func_020051a8();                            /* extern */
M2C_UNK func_02005248(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_020052b8();                            /* extern */
M2C_UNK func_020053f8();                            /* extern */
M2C_UNK func_02005410(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02005474();                            /* extern */
M2C_UNK func_0200701c(s32, M2C_UNK);                /* extern */

s32 func_020a9454(void *arg0) {
    func_0200701c(arg0 + 0x18, 0x200);
    if (M2C_FIELD(arg0, u8 *, 0x10) != 0) {
        func_020051a8();
        func_02005248(arg0 + 0x18, (M2C_FIELD(arg0, s32 *, 0x14) << 9) + 0x4000, 0x200);
        func_020052b8();
    } else {
        func_020053f8();
        func_02005410(arg0 + 0x18, (M2C_FIELD(arg0, s32 *, 0x14) << 9) + 0x4000, 0x200);
        func_02005474();
    }
    return 0;
}
