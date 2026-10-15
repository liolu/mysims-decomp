#include "m2c.h"

M2C_UNK func_02006430(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020067e4(void *);                      /* extern */
M2C_UNK func_02006d88(void *);                      /* extern */
M2C_UNK func_020226b4(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_02032d0c;

void func_02031ea8(void *arg0, s32 arg1) {
    func_02006430(arg0, &func_02032d0c, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020226b4(arg0 + 0x4E0, 0);
    func_02006d88(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_020067e4(arg0);
}
