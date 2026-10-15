#include "m2c.h"

M2C_UNK func_0202eac8(M2C_UNK);                     /* extern */
M2C_UNK func_0202ead4(M2C_UNK);                     /* extern */
M2C_UNK func_0205a9fc();                            /* extern */
M2C_UNK func_0205ab24(M2C_UNK);                     /* extern */
M2C_UNK func_0205ae6c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0205ae78(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020c83a0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        func_0205a9fc();
        func_0202eac8(0x7F);
        func_0202ead4(0);
        func_0205ae6c(0x7F, 0);
        func_0205ae78(0x7F, 0);
        func_0205ab24(0);
    }
    return 1;
}
