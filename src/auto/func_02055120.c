#include "engine.h"
#include "m2c.h"

void func_02055120(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s16 *, 0xB4) = (s16) arg1;
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x110);
    if (temp_r0 != 0) {
        func_02055120(temp_r0, arg1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x118);
    if (temp_r0_2 == 0) {
        return;
    }
    func_02055120(temp_r0_2, arg1);
}
