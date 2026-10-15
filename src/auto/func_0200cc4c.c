#include "m2c.h"

M2C_UNK func_02010058(u16);                         /* extern */
M2C_UNK func_02010074(u16);                         /* extern */
extern s32 data_02108afc;

s32 func_0200cc4c(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02010058((u16) data_02108afc);
            return 0;
        case 10:
            func_02010074((u16) data_02108afc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
