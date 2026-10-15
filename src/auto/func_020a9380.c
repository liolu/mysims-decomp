#include "m2c.h"

s32 func_020a9380(void *arg0) {
    M2C_FIELD((void *) 0x04000014, s32 *, 0) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x20) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x28) << 0x10)));
    M2C_FIELD((void *) 0x04000014, s32 *, 0x1000) =
        (s32) ((M2C_FIELD(arg0, s32 *, 0x20) & 0x1FF) | (0x01FF0000 & (M2C_FIELD(arg0, s32 *, 0x28) << 0x10)));
    return 0;
}
