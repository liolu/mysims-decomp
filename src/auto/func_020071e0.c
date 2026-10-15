#include "m2c.h"

s32 func_02006b74();                                /* extern */
s32 func_02007274(M2C_UNK);                         /* extern */
s32 func_02007358(M2C_UNK);                         /* extern */
M2C_UNK func_02007400(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007414(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007874(s32);                         /* extern */
M2C_UNK func_0200787c(s32);                         /* extern */
extern M2C_UNK data_02106dc4;

void func_020071e0(void) {
    func_02007400(2, func_02007274(2));
    func_02007414(2, func_02007358(2));
    if ((M2C_FIELD(&data_02106dc4, s32 *, 4) != 0) && ((func_02006b74() & 3) != 1)) {
        return;
    }
    func_02007874(0x0200002B);
    func_0200787c(0x023E0021);
}
