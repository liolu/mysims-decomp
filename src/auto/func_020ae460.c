#include "m2c.h"

M2C_UNK func_02054f14(s32);                         /* extern */
extern M2C_UNK data_020ffc38;

void *func_020ae460(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ffc38;
    func_02054f14(arg0 + 4);
    M2C_FIELD(arg0, s8 *, 0x210)  = 0;
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
    return arg0;
}
