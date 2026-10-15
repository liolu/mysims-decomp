#include "m2c.h"

M2C_UNK func_0200ef6c(void *, void *);              /* extern */
M2C_UNK func_02032eb4();                            /* extern */
M2C_UNK func_02037c28();                            /* extern */
extern M2C_UNK data_020d8d74;

void *func_02037a44(void *arg0) {
    func_02032eb4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8d74;
    M2C_FIELD(arg0, s32 *, 0x60)   = 0;
    func_02037c28();
    M2C_FIELD(arg0, s8 *, 0x64) = 0;
    func_0200ef6c(arg0 + 0x68, arg0 + 0x6C);
    return arg0;
}
