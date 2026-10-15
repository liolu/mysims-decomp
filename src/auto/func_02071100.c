#include "m2c.h"

s32 func_02071100(s32 *arg0, u32 arg1) {
    if (arg1 >= 0x12U) {
        return 0;
    }
    return M2C_FIELD((*arg0 + (arg1 * 4)), s32 *, 0x360);
}
