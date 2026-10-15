#include "m2c.h"

M2C_UNK func_0205b690(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0205cc1c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0205eb48(void *, u16);                 /* extern */
M2C_UNK func_0205eb7c(void *, s32);                 /* extern */
M2C_UNK func_020600a0(void *);                      /* extern */
M2C_UNK func_020602c0(void *, s32 *, u16 *);        /* extern */

void func_0205fcbc(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, s32 arg5, u16 arg6, s32 arg7) {
    func_020602c0(arg0, &arg5, &arg6);
    func_0205eb7c(arg0, arg5);
    func_0205eb48(arg0, arg6);
    M2C_FIELD(arg0, s32 *, 0x60) = arg7;
    func_0205b690(arg0, arg1, arg2, arg3, (s32) arg4);
    func_0205cc1c(arg0, 0, 0);
    func_020600a0(arg0);
    M2C_FIELD(arg0, s32 *, 0x180) = (s32) (M2C_FIELD(arg0, s32 *, 0x180) | 0x10000);
}
