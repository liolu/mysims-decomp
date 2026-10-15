#include "m2c.h"

M2C_UNK func_0205b24c(void *);                      /* extern */
M2C_UNK func_0205b31c(void *, M2C_UNK);             /* extern */

void func_0205b758(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0205b24c(arg0 + 4);
        func_0205b31c(arg0 + 4, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x88) = -1;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}
