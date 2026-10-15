#include "m2c.h"

M2C_UNK func_020442bc(void *, u16, M2C_UNK, u16, s32); /* extern */
M2C_UNK func_020453e0(void *);                      /* extern */

void func_020452f4(void *arg0) {
    func_020442bc(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 3, M2C_FIELD(arg0, u16 *, 0xDD2), (s32) M2C_FIELD(arg0, u16 *, 0xDE6));
    func_020442bc(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 0, M2C_FIELD(arg0, u16 *, 0xDD6), 1);
    func_020442bc(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 1, M2C_FIELD(arg0, u16 *, 0xDD8), 1);
    func_020442bc(arg0, M2C_FIELD(arg0, u16 *, 0xDCC), 2, M2C_FIELD(arg0, u16 *, 0xDD8), 1);
    func_020453e0(arg0);
}
