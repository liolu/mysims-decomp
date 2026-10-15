#include "m2c.h"

extern s32 data_02118994;

u8 func_020c6458(s32 arg0) {
    if (data_02118994 == 0) {
        return 8U;
    }
    return M2C_FIELD((data_02118994 + arg0), u8 *, 0x399A);
}
