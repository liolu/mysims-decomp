#include "m2c.h"

M2C_UNK func_02006fe4(void *, M2C_UNK);             /* extern */
extern void *data_02108a60;

s32 func_0200a9f0(void) {
    func_02006fe4(data_02108a60 + 4, 4);
    return M2C_FIELD(data_02108a60, s32 *, 4);
}
