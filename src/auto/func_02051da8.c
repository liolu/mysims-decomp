#include "m2c.h"

M2C_UNK func_02051e60();                            /* extern */
extern M2C_UNK data_020d9a94;

void *func_02051da8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9a94;
    M2C_FIELD(arg0, s32 *, 0x250)  = 0;
    M2C_FIELD(arg0, s32 *, 0x24C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x26C)  = -1;
    M2C_FIELD(arg0, s32 *, 0x270)  = -1;
    M2C_FIELD(arg0, s32 *, 0x274)  = -1;
    M2C_FIELD(arg0, s32 *, 0x278)  = 0;
    M2C_FIELD(arg0, s32 *, 0x27C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x280)  = 0;
    func_02051e60(arg0);
    return arg0;
}
