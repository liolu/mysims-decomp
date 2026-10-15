#include "m2c.h"

M2C_UNK func_02006048(s32, void *);                 /* extern */
M2C_UNK func_02006220();                            /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
extern M2C_UNK data_02106b48;

void func_0200672c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0200856c();
    temp_r5 = *M2C_FIELD(&data_02106b48, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02006048(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02006220();
    func_02008580(temp_r4);
}
