#include "m2c.h"

extern u16 data_02106e7c;

void func_02007a60(s32 arg0) {
    data_02106e7c |= 1 << arg0;
}
