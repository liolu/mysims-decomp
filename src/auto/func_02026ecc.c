#include "m2c.h"

M2C_UNK func_02009124(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_020d883c;
extern s32 data_020d8840;
extern s32 data_020d8844;

void func_02026ecc(void *arg0, s32 arg1) {
    func_02009124(0, arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_020d8844;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_020d8840;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_020d883c;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
}
