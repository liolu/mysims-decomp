#include "m2c.h"

u16 func_02071170(s32 *arg0, u32 arg1) {
    if (arg1 >= 8U) {
        return 0U;
    }
    return M2C_FIELD((*arg0 + (arg1 * 2)), u16 *, 0x2928);
}
