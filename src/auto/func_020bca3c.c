#include "m2c.h"

void func_020bca3c(void *arg0, s8 arg1) {
    if (arg1 == M2C_FIELD(arg0, s8 *, 0x2A9)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2BD) == 0) {
        M2C_FIELD(arg0, s8 *, 0x2A9) = arg1;
        M2C_FIELD(arg0, s8 *, 0x2BC) = 1;
    }
}
