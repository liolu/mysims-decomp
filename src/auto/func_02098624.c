#include "m2c.h"

M2C_UNK func_020091b4(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02098160();                            /* extern */

void func_02098624(void *arg0, M2C_UNK arg1) {
    func_02098160();
    func_020091b4(arg1, M2C_FIELD(arg0, s32 *, 4), 0x5A00);
}
