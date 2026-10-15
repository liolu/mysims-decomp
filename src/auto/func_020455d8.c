#include "m2c.h"

M2C_UNK func_0204544c(void *);                      /* extern */
M2C_UNK func_0204547c(void *);                      /* extern */
M2C_UNK func_0205505c(void *, void *);              /* extern */
M2C_UNK func_020550c0(s32);                         /* extern */
M2C_UNK func_02055354(void *, void *, M2C_UNK);     /* extern */
extern M2C_UNK data_020dde88;

void func_020455d8(void *arg0) {
    u16 temp_r0;

    func_020550c0(arg0 + 0xDEC);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xDD4);
    if (((u32) temp_r0 >= 7U) && ((u32) temp_r0 <= 0xAU)) {
        return;
    }
    func_02055354(arg0 + 0xDEC, (M2C_UNK *) ((s8 *) &data_020dde88 + (M2C_FIELD(arg0, u16 *, 0xDD0) * 0x10)), 0);
    func_0205505c(arg0 + 0x8EC, arg0 + 0xDEC);
    func_0204544c(arg0);
    func_0204547c(arg0);
}
