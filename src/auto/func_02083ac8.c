#include "m2c.h"

extern s32 data_02118994;

u16 func_02083ac8(s32 arg0, s32 arg1) {
    return M2C_FIELD((data_02118994 + (arg1 * 2)), u16 *, 0x980);
}
