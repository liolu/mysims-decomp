#include "m2c.h"

s32 func_02004078();                                /* extern */
M2C_UNK func_02008a14(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02009138(M2C_UNK, s32, u32);           /* extern */
extern s32 data_020d8264;

void func_02005148(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_02004078();
    if ((data_020d8264 != -1) && (arg2 > 0x30U)) {
        func_02008a14(data_020d8264, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02009138(arg0, temp_ip + arg1, arg2);
}
