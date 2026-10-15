#include "m2c.h"

M2C_UNK func_02051da8(void *);                      /* extern */
M2C_UNK func_02053308(void *);                      /* extern */
M2C_UNK func_02054f14(void *);                      /* extern */
M2C_UNK func_02058d4c(void *);                      /* extern */
M2C_UNK func_02060530(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_020dd888;

void *func_0205241c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dd888;
    func_02060530(arg0 + 4, 0);
    func_02054f14(arg0 + 0x18);
    func_02051da8(arg0 + 0x218);
    func_02053308(arg0 + 0x4A0);
    func_02058d4c(arg0 + 0xFB8);
    M2C_FIELD(arg0, s32 *, 0xFB4) = 0;
    return arg0;
}
