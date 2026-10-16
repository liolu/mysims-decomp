#include "m2c.h"

M2C_UNK func_0200c688(s32);                         /* extern */
extern M2C_UNK data_020f94fc;

M2C_UNK **func_02060bfc(M2C_UNK **arg0) {
    s32 base = (s32) arg0;
    *arg0    = &data_020f94fc;
    func_0200c688((M2C_UNK *) (base + 4));
    return arg0;
}
