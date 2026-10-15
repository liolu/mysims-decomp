#include "m2c.h"

M2C_UNK func_02062768();                            /* extern */
extern M2C_UNK data_020fe238;

void *func_0209446c(void *arg0) {
    func_02062768();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fe238;
    M2C_FIELD(arg0, s8 *, 0x1114)  = 0;
    M2C_FIELD(arg0, s8 *, 0x1115)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1118) = 0;
    return arg0;
}
