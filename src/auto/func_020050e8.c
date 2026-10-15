#include "m2c.h"

s32 func_02003de0();                                /* extern */
M2C_UNK func_02008a84(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02009108(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020d8264;

void func_020050e8(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02003de0();
    if ((data_020d8264 != -1) && (arg2 > 0x1CU)) {
        func_02008a84(data_020d8264, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02009108(arg0, temp_ip + arg1, arg2);
}
