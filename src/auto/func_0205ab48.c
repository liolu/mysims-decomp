#include "m2c.h"

s32 func_0205ab48(s32 arg0) {
    if (arg0 < 0) {
        return -1;
    }
    if (arg0 == 0x1E) {
        return -3;
    }
    if ((arg0 >= 0x2BC) && (arg0 < 0x384)) {
        return -2;
    }
    if ((arg0 >= 0x3B6) && (arg0 < 0x3C0)) {
        return -2;
    }
    if (arg0 <= 0x47B) {
        return -2;
    }
    return -1;
}
