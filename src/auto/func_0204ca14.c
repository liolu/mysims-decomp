#include "m2c.h"

M2C_UNK func_02035ed8(void *, M2C_UNK, M2C_UNK *);  /* extern */
s32 func_02047c8c();                                /* extern */
M2C_UNK func_0205505c(void *, void *);              /* extern */
M2C_UNK func_020550c0(void *);                      /* extern */
M2C_UNK func_02055354(void *, void *, M2C_UNK);     /* extern */
extern M2C_UNK data_020d07f8;
extern M2C_UNK data_020d9000;

void func_0204ca14(void *arg0) {
    u16 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u16 *, 0x12A8);
    if (temp_r5 == 0) {
        return;
    }
    if ((u32) temp_r5 >= 0x16U) {
        return;
    }
    func_020550c0(arg0 + 0x14AC);
    func_02055354(arg0 + 0x14AC, (M2C_UNK *) ((s8 *) &data_020d07f8 + ((temp_r5 - 1) * 0x10)), 0);
    M2C_FIELD(arg0, s32 *, 0x1564) = func_02047c8c();
    func_02035ed8(arg0 + 0x8EC, 6, &data_020d9000);
    func_0205505c(arg0 + 0x8EC, arg0 + 0x14AC);
}
