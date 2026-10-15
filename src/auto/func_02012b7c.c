#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);
void func_02009308(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02013ef8(M2C_UNK);

extern s32 data_0210fb4c;

s32 func_02012b7c(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0200856c();
    if ((data_0210fb4c != 0) && (func_02013ef8(arg0) != 0)) {
        func_02009308(((arg0 - 1) * 0x16) + (data_0210fb4c + 0x1340), data_0210fb4c + 0x1772, 0x16);
        func_02008580(temp_r4);
        return data_0210fb4c + 0x1772;
    }
    func_02008580(temp_r4);
    return 0;
}
