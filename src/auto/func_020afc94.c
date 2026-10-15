#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_021026e0;

void *func_020afc94(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021026e0;
    M2C_FIELD(arg0, s32 *, 0xB4)   = 0;
    M2C_FIELD(arg0, s8 *, 0xB8)    = 0;
    return arg0;
}
