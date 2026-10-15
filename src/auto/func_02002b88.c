#include "m2c.h"

void func_02002b88(s32 arg0) {
    *(u16 *) 0x04000004 = (*(u16 *) 0x04000004 & 0x3F) | (u16) (arg0 << 8) | ((s32) (arg0 & 0x100) >> 1);
}
