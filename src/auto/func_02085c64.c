#include "m2c.h"

extern M2C_UNK data_020d3090;

u8 func_02085c64(u32 arg0) {
    if (arg0 >= 0x1FU) {
        return 0U;
    }
    return (u8) ((s32) * ((u16 *) ((s8 *) &data_020d3090 + (arg0 * 2))) >> 8);
}
