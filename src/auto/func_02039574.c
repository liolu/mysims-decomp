#include "m2c.h"

s32 func_02039574(s32 arg0) {
    if (!(arg0 & 0x100)) {
        return arg0 & 0x1FF;
    }
    return 0 - (0x200 - (arg0 & 0x1FF));
}
