/* compiler: 2.0/sp1p5 -flag no-opt_rebuildlogicals */
#include "m2c.h"

s32 func_0200265c(void *);                          /* extern */

s32 func_0204fe08(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x1E) != 0) && (func_0200265c(arg0 + 0x10) < (s32) (M2C_FIELD(arg0, s32 *, 0x38) + arg2))) {
        var_r4 = 1;
    }
    return var_r4;
}
