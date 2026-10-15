#include "engine.h"
#include "m2c.h"

void func_0202a9d0(M2C_UNK);

void func_02038bcc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if ((temp_r0 != 0) && (M2C_FIELD(arg0, u8 *, 0x14) != 0)) {
        func_0202a9d0(temp_r0);
        M2C_FIELD(arg0, u8 *, 0x14) = 0U;
    }
}
