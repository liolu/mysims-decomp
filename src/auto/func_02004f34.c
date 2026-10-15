#include "engine.h"
#include "m2c.h"

void func_02008a84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02009108(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020d8264;

void func_02004f34(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020d8264 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02008a84(data_020d8264, arg0, arg1 + 0x05000000, arg2);
        return;
    }
    func_02009108(arg0, arg1 + 0x05000000, arg2);
}
