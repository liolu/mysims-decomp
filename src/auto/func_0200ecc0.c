#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200e908(void);
void func_0200efc8(M2C_UNK);

extern M2C_UNK data_02108bcc;

s32 func_0200ecc0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0200e908() == 0) {
        return 1;
    }
    M2C_FIELD(&data_02108bcc, s32 *, 0x1C) = arg2;
    M2C_FIELD(&data_02108bcc, s32 *, 0x20) = arg3;
    func_0200efc8((u8) arg0 | 0x02006400);
    func_0200efc8(0x01010000 | (u16) arg1);
    return 0;
}
