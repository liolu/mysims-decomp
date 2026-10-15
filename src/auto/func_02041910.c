#include "m2c.h"

M2C_UNK func_020085e8();                            /* extern */
M2C_UNK func_02040c50(void *);                      /* extern */
M2C_UNK func_020419bc(void *);                      /* extern */
M2C_UNK func_02049020(void *);                      /* extern */
s32 func_02049150(void *);                          /* extern */
M2C_UNK func_0204a8a0(void *);                      /* extern */
M2C_UNK func_02052850(void *, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020529ac(void *);                      /* extern */
M2C_UNK func_02081550(void *);                      /* extern */
M2C_UNK func_02083a78(void *);                      /* extern */

void func_02041910(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02052850(arg0 + 0x27C0, (u16) (M2C_FIELD(arg0, u16 *, 0x9720) + 1), arg1, arg2);
    func_020529ac(arg0 + 0x27C0);
    if (func_02049150(arg0 + 0x244C) == 0) {
        do {
            func_02049020(arg0 + 0x244C);
            func_0204a8a0(arg0 + 0x244C);
            func_020085e8();
        } while (func_02049150(arg0 + 0x244C) == 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3C84) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C84) & ~0x10);
    func_02040c50(arg0);
    func_020419bc(arg0);
    func_02083a78(arg0 + 0x380C);
    func_02081550(arg0 + 0x380C);
}
