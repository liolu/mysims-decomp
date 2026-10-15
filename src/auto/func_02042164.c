#include "m2c.h"

M2C_UNK func_0205ab24(M2C_UNK);                     /* extern */
M2C_UNK func_0205aebc();                            /* extern */
s32 func_0205aefc();                                /* extern */
extern s32 data_02118994;

s32 func_02042164(void) {
    void *temp_r4;

    temp_r4 = data_02118994 + 0x178;
    if (func_0205aefc() != 0) {
        func_0205aebc();
        if (M2C_FIELD(temp_r4, u16 *, 2) == 1) {
            func_0205ab24(1);
        } else {
            func_0205ab24(5);
        }
        return 1;
    }
    return 0;
}
