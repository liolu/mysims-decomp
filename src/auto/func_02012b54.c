#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern void *data_0210fb4c;

void func_02012b54(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_0200856c();
    M2C_FIELD(data_0210fb4c, s32 *, 0x14E4) = arg0;
    func_02008580(temp_r0);
}
