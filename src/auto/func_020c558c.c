#include "m2c.h"

M2C_UNK func_0205505c(void *, void *);              /* extern */
M2C_UNK func_020550c0(s32);                         /* extern */
M2C_UNK func_02055354(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_020c5458(void *);                      /* extern */
M2C_UNK func_020c5488(void *);                      /* extern */
extern M2C_UNK data_020dde88;

void func_020c558c(void *arg0) {
    func_020550c0(arg0 + 0xDE8);
    func_02055354(arg0 + 0xDE8, (M2C_UNK *) ((s8 *) &data_020dde88 + (M2C_FIELD(arg0, u16 *, 0xDD0) * 0x10)), 0);
    func_0205505c(arg0 + 0x8EC, arg0 + 0xDE8);
    func_020c5458(arg0);
    func_020c5488(arg0);
}
