#include "m2c.h"

extern M2C_UNK data_020d3090;

u8 func_02085c8c(u32 arg0) {
    if (arg0 >= 0x1FU) {
        return 0U;
    }
    return (u8) * ((u16 *) ((s8 *) &data_020d3090 + (arg0 * 2)));
}
