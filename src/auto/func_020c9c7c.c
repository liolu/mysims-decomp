#include "m2c.h"

M2C_UNK func_020220ec(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020c5c94();                            /* extern */
M2C_UNK func_020c5cc4(void *);                      /* extern */
extern M2C_UNK func_020981e4;
extern M2C_UNK func_0209820c;

void *func_020c9c7c(void *arg0) {
    func_020c5c94();
    func_020220ec(arg0 + 0x14, 3, 0x60, &func_020981e4, &func_0209820c);
    func_020c5cc4(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
