#include "m2c.h"

extern u16 data_02109560;

s32 func_020115ec(void) {
    if (data_02109560 != 0) {
        return 0;
    }
    return 3;
}
