#include "m2c.h"

s32 func_020851a0(void *, M2C_UNK, M2C_UNK);        /* extern */

void func_0208522c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xDE4) <= 0) {
        M2C_FIELD(arg0, s32 *, 0xDE4) = func_020851a0(arg0, 4, 5);
    }
    M2C_FIELD(arg0, s32 *, 0xDE0) = 0;
}
