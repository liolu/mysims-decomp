#include "m2c.h"

extern s16 data_020d8260;
extern s16 data_02106a88;

void func_02002be4(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020d8260       = 0;
    data_02106a88       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
