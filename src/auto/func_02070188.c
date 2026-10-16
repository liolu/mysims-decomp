#include "m2c.h"

void func_02070188(s32 arg0) {
    s32 i = 0;
    while (i < 0x12) {
        M2C_FIELD((arg0 + i), s8 *, 0x168) = (s8) i;
        i++;
    }
}
