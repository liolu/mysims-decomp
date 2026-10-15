#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_021026c4;

void *func_020b0130(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021026c4;
    M2C_FIELD(arg0, s32 *, 0xB4)   = -1;
    M2C_FIELD(arg0, s32 *, 0xB8)   = -1;
    M2C_FIELD(arg0, s32 *, 0xBC)   = -1;
    M2C_FIELD(arg0, s32 *, 0xC0)   = -1;
    return arg0;
}
