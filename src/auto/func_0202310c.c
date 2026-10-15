#include "m2c.h"

M2C_UNK func_02023054();                            /* extern */
M2C_UNK func_02023068(M2C_UNK);                     /* extern */

void func_0202310c(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02023054();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02023068(arg0);
}
