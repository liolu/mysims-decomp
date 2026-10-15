#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02108bcc;

s32 func_0200e908(void) {
    s32 temp_r0;

    temp_r0 = func_0200856c();
    if (M2C_FIELD(&data_02108bcc, s32 *, 0x18) != 0) {
        func_02008580(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_02108bcc, s32 *, 0x18) = 1;
    func_02008580(temp_r0);
    return 1;
}
