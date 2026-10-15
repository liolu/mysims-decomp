#include "m2c.h"

s32 func_0208fd7c(void *arg0) {
    *(s32 *) 0x04000014 = (M2C_FIELD(arg0, s32 *, 0x18) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x1C) << 0x10));
    return 0;
}
