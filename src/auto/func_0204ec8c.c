#include "m2c.h"

s32 func_0200265c(s32, s32);                        /* extern */
s32 func_0204dca8();                                /* extern */

s32 func_0204ec8c(s32 arg0) {
    if (func_0200265c(func_0204dca8() + 0x8F8, arg0 + 0x8F8) <= 0x3000) {
        return 1;
    }
    return 0;
}
