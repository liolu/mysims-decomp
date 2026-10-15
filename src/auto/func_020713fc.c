#include "m2c.h"

s32 func_020713fc(s32 *arg0, u32 arg1) {
    if (arg1 >= 8U) {
        return 0;
    }
    return (arg1 * 0xC) + *arg0;
}
