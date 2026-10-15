#include "m2c.h"

s32 func_02071150(s32 *arg0, u32 arg1) {
    if (arg1 >= 0xC8U) {
        return 0;
    }
    return (arg1 * 0x30) + (*arg0 + 0x3A8);
}
