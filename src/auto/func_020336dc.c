#include "m2c.h"

M2C_UNK func_02002be4();                            /* extern */
M2C_UNK func_020086b8(M2C_UNK);                     /* extern */
M2C_UNK func_02008cb4(s32);                         /* extern */
extern M2C_UNK (*data_021188a0)();

void func_020336dc(M2C_UNK arg0) {
    s32 var_r4;

    func_02002be4();
    var_r4 = 0;
    *(s32 *) 0x04001000 &= ~0x10000;
    do {
        func_02008cb4(var_r4);
        var_r4 += 1;
    } while (var_r4 < 3);
    if (data_021188a0 != NULL) {
        data_021188a0();
    }
    func_020086b8(arg0);
}
