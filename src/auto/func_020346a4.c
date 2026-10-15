#include "engine.h"
#include "m2c.h"

void func_020344d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02034d20(M2C_UNK);

void func_020346a4(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, s32 *, 0xC) != arg0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    }
    func_020344d8(arg1, 0, 0, 0);
    func_02034d20(arg1);
}
