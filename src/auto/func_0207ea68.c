#include "m2c.h"

extern void *data_02118998;

s32 func_0207ea68(s32 arg0) {
    void *temp_ip;

    temp_ip                                 = data_02118998 + 0x380C;
    M2C_FIELD(temp_ip, s32 *, 0x4B8)        = (s32) ((arg0 * 0x96) + M2C_FIELD(temp_ip, s32 *, 0x4B8));
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x1000);
    M2C_FIELD(data_02118998, s32 *, 0x3C84) = (s32) (M2C_FIELD(data_02118998, s32 *, 0x3C84) | 0x800);
    return 1;
}
