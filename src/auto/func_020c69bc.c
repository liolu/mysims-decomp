#include "m2c.h"

M2C_UNK func_020091b4(s32, s32, s32);               /* extern */
M2C_UNK func_0205b5c0(void *);                      /* extern */
M2C_UNK func_0205cbec(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020c69bc(void *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    void *temp_r2;

    M2C_FIELD(arg0, s32 *, 0x60) = arg4;
    func_0205cbec(arg0, arg2, arg3, 0);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC4) + (arg1 << 6);
    func_020091b4(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(temp_r2, s32 *, 0x10), M2C_FIELD(temp_r2, s32 *, 0x14));
    func_0205b5c0(arg0);
}
