#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern u16 data_02106e9c;

void func_020080c0(void) {
    s32 temp_r0;

    temp_r0 = func_0200856c();
    if (data_02106e9c != 0) {
        data_02106e9c = 0;
    }
    func_02008580(temp_r0);
}
