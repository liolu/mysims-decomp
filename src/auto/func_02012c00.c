#include "engine.h"
#include "m2c.h"

M2C_UNK func_02013ef8(M2C_UNK);

extern s32 data_0210fb4c;

s32 func_02012c00(s32 arg0) {
    if ((data_0210fb4c != 0) && (func_02013ef8(arg0) != 0) &&
        (M2C_FIELD((data_0210fb4c + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}
