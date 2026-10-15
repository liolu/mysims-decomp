#include "m2c.h"

u16 func_0202e8e8(void *, u16);                     /* extern */
s32 func_0202e908();                                /* extern */

s32 func_0202e938(void *arg0) {
    if (func_0202e908() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_0202e8e8(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
