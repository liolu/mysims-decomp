#include "m2c.h"

M2C_UNK func_02083c00(void *, s32);                 /* extern */

s32 func_0208151c(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u8 *, 0x18) != 0) {
        M2C_FIELD(arg0, s32 *, 0x460) = 2;
        temp_r0                       = M2C_FIELD(arg0, void **, 0xC);
        func_02083c00(temp_r0, M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x10), s32 *, 8));
    }
    return 0;
}
