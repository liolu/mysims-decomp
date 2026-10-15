#include "m2c.h"

M2C_UNK func_02018020(M2C_UNK);                     /* extern */
M2C_UNK func_02021ed8();                            /* extern */
extern M2C_UNK data_02110190;

void func_02017fd4(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02110190, s32 *, 0xC) == 0) {
        func_02021ed8();
        if (M2C_FIELD(&data_02110190, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02110190, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02110190, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02018020(arg0);
}
