#include "m2c.h"

M2C_UNK func_02060454(void *, M2C_UNK *, void *, M2C_UNK); /* extern */
extern M2C_UNK func_020430bc;

void func_020432e0(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x8CD) == 0) && (M2C_FIELD(arg0, u8 *, 0x8CC) == 0)) {
        func_02060454(arg0 + 4, &func_020430bc, arg0, 0x14);
        M2C_FIELD(arg0, u8 *, 0x8CC) = 1U;
    }
}
