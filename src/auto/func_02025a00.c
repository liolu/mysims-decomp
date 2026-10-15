#include "m2c.h"

extern M2C_UNK data_0211168c;

s32 func_02025a00(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_0211168c, s32 *, 8);
}
