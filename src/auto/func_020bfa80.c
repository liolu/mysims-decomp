#include "m2c.h"

extern M2C_UNK data_0210330c;

void func_020bfa80(void *arg0, s32 arg1) {
    if (arg1 < 8) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) * ((M2C_UNK *) ((s8 *) &data_0210330c + (arg1 * 4)));
    }
}
