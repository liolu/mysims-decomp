#include "m2c.h"

s32 func_020710e8(s32 *arg0, u32 arg1) {
    if (arg1 >= 0x12U) {
        return 0;
    }
    return (arg1 * 0x30) + *arg0;
}
