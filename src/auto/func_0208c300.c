#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_020fdae4;

void *func_0208c300(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fdae4;
    M2C_FIELD(arg0, s32 *, 4)      = 2;
    M2C_FIELD(arg0, s8 *, 0xB4)    = 0;
    M2C_FIELD(arg0, s8 *, 0xB5)    = 0;
    return arg0;
}
