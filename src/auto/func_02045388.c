#include "m2c.h"

M2C_UNK func_020442bc(void *, u16, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_0204471c(void *, M2C_UNK, u16);        /* extern */

void func_02045388(void *arg0) {
    func_020442bc(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 3, M2C_FIELD(arg0, u16 *, 0xDD2), (s32) M2C_FIELD(arg0, u16 *, 0xDE6));
    func_0204471c(arg0, 1, M2C_FIELD(arg0, u16 *, 0xDDC));
    func_0204471c(arg0, 2, M2C_FIELD(arg0, u16 *, 0xDDE));
}
