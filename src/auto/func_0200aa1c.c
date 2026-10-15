#include "m2c.h"

M2C_UNK func_02006fe4(s32 *, M2C_UNK);              /* extern */
extern s32 *data_02108a60;

s32 func_0200aa1c(void) {
    func_02006fe4(data_02108a60, 4);
    return *data_02108a60;
}
