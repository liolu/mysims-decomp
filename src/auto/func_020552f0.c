#include "m2c.h"

M2C_UNK func_020363c8(M2C_UNK, void *);             /* extern */

void func_020552f0(void *arg0, M2C_UNK arg1) {
    void *temp_r0;
    void *temp_r0_2;

    if ((M2C_FIELD(arg0, u8 *, 0x104) == 0) && (M2C_FIELD(arg0, u8 *, 0x105) == 0)) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x118);
    if (temp_r0 != NULL) {
        func_020552f0(temp_r0, arg1);
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x110);
    if (temp_r0_2 != NULL) {
        func_020552f0(temp_r0_2, arg1);
    }
    if (M2C_FIELD(arg0, u8 *, 0x108) == 0) {
        return;
    }
    func_020363c8(arg1, arg0);
}
