#include "m2c.h"

extern M2C_UNK data_02116eac;

u16 func_0202ee00(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02116eac + (arg0 * 0x24)));
}
