#include "m2c.h"

s32 func_02081dbc(s32, s32);                        /* extern */
extern M2C_UNK data_020d4fcc;
extern M2C_UNK data_020d500c;
extern s32 data_02118998;

M2C_UNK *func_02099604(void) {
    if ((func_02081dbc(data_02118998 + 0x380C, 0x129) != 0) && (func_02081dbc(data_02118998 + 0x380C, 0xD3) == 0)) {
        return &data_020d500c;
    }
    return &data_020d4fcc;
}
