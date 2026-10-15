#include "m2c.h"

M2C_UNK func_020bfbe8();                            /* extern */
extern M2C_UNK data_02103540;

void *func_020bfe08(void *arg0) {
    func_020bfbe8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103540;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s16 *, 0x84)   = 0;
    return arg0;
}
