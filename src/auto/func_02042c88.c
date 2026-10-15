#include "m2c.h"

M2C_UNK func_02040c50();                            /* extern */
M2C_UNK func_02040c88(M2C_UNK);                     /* extern */
M2C_UNK func_02040da4(M2C_UNK);                     /* extern */
M2C_UNK func_02040df8(M2C_UNK);                     /* extern */
M2C_UNK func_02040e1c(M2C_UNK);                     /* extern */
extern s32 data_02118994;

void func_02042c88(M2C_UNK arg0) {
    if (data_02118994 == 0) {
        return;
    }
    func_02040c50(arg0);
    func_02040c88(arg0);
    func_02040df8(arg0);
    func_02040da4(arg0);
    func_02040e1c(arg0);
}
