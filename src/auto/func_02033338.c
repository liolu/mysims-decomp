#include "m2c.h"

s32 func_02033314(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02033430(M2C_UNK, M2C_UNK, M2C_UNK, u16, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_02033338(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u16 arg6, u16 arg7, u16 arg8,
                   u16 arg9) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    func_02033430(arg1, arg2, arg3, arg4, func_02033314(arg0, 0), (s32) arg5, (s32) arg6, (s32) M2C_FIELD(temp_r4, u8 *, 8),
                  (s32) M2C_FIELD(temp_r4, u8 *, 6), (s32) arg7, (s32) arg8, (s32) arg9);
}
