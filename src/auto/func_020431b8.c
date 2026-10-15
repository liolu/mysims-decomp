#include "m2c.h"

M2C_UNK func_0204f918(void *);                      /* extern */
M2C_UNK func_02054f14(void *);                      /* extern */
M2C_UNK func_020603f4(s32);                         /* extern */
extern M2C_UNK data_020d9100;

void *func_020431b8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9100;
    func_020603f4(arg0 + 4);
    func_02054f14(arg0 + 0x8EC);
    func_02054f14(arg0 + 0xAEC);
    func_0204f918(arg0 + 0xCEC);
    M2C_FIELD(arg0, s32 *, 0xDA4) = 0;
    M2C_FIELD(arg0, s8 *, 0x8CC)  = 0;
    M2C_FIELD(arg0, s8 *, 0x8CD)  = 0;
    M2C_FIELD(arg0, s8 *, 0xDC0)  = 1;
    M2C_FIELD(arg0, s32 *, 0xDB8) = 0;
    M2C_FIELD(arg0, s32 *, 0xDBC) = -1;
    return arg0;
}
