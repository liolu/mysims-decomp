#include "engine.h"
#include "m2c.h"

void func_020091b4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0207196c(s32 arg0) {
    func_020091b4(arg0 + 0xD8, (M2C_FIELD(arg0, u8 *, 0x16) * 0x60) + (arg0 + 0x18), 0x60);
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) (M2C_FIELD(arg0, u8 *, 0x15) | (1 << M2C_FIELD(arg0, u8 *, 0x16)));
}
