#include "m2c.h"

void func_020ae714(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x210) != 0) {
        M2C_FIELD(arg0, s8 *, 0x211) = 1;
    }
}
