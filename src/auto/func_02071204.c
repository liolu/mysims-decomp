#include "m2c.h"

s32 func_02071204(s32 *arg0, u32 arg1) {
    if (arg1 >= 0x14U) {
        return 0;
    }
    return (arg1 * 0x18) + (*arg0 + 0x2938);
}
