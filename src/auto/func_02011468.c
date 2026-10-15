#include "m2c.h"

s32 func_02006c48(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_02006cec(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
M2C_UNK func_02006fe4(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_02109568;

u16 *func_02011468(void) {
    u16 *sp0;

    if (func_02006c48(&data_02109568, &sp0, 0) == 0) {
        return NULL;
    }
    func_02006fe4(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02006cec(&data_02109568, sp0, 1);
    return NULL;
}
