#include "engine.h"
#include "m2c.h"

void func_020c9f34(M2C_UNK);
void func_020ca014(M2C_UNK);

void func_020419bc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = arg0 + 0x4744;
    if (M2C_FIELD(arg0, u16 *, 0x9720) == 3) {
        func_020c9f34(temp_r0);
        return;
    }
    func_020ca014(temp_r0);
}
