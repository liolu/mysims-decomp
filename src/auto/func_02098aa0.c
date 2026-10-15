#include "m2c.h"

void func_02098aa0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        *(s32 *) 0x04000064 = 0x81370010;
    }
}
