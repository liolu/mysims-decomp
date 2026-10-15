#include "m2c.h"

M2C_UNK func_02004344(M2C_UNK *);                   /* extern */
M2C_UNK func_02063ea0(s32);                         /* extern */
extern M2C_UNK data_021116c0;

void func_02036444(s32 arg0, s32 arg1) {
    if ((arg1 != 1) && (arg1 != 2)) {
        return;
    }
    M2C_FIELD((void *) 0x04000440, s32 *, 0) = 0;
    if (arg1 == 1) {
        func_02004344(arg0 + 4);
    } else {
        func_02004344(&data_021116c0);
    }
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    if (arg1 != 1) {
        return;
    }
    func_02063ea0(arg0 + 0x44);
}
