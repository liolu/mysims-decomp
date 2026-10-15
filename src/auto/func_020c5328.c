#include "m2c.h"

M2C_UNK func_020c45f0(void *, u16, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_020c53ec(void *);                      /* extern */

void func_020c5328(void *arg0) {
    func_020c45f0(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 3, M2C_FIELD(arg0, u16 *, 0xDD2), (s32) M2C_FIELD(arg0, u16 *, 0xDE4));
    func_020c53ec(arg0);
}
