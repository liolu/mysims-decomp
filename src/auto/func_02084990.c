#include "m2c.h"

M2C_UNK func_020710e0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02071330(M2C_UNK *, s32, M2C_UNK);     /* extern */
M2C_UNK func_02084000(s32);                         /* extern */
extern s32 data_02118994;

void func_02084990(void *arg0) {
    M2C_UNK sp0;

    func_02084000(M2C_FIELD(arg0, s32 *, 0xDCC));
    func_020710e0(&sp0, data_02118994 + 0xDE8);
    func_02071330(&sp0, M2C_FIELD(arg0, s32 *, 0xDD0), 0xA);
}
