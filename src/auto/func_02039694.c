/* compiler: 2.0/sp1p5 -flag no-opt_common_subs */
#include "m2c.h"

M2C_UNK func_02043094();                            /* extern */

void func_02039694(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x9910) == 0) {
        return;
    }
    func_02043094();
    M2C_FIELD(arg0, s32 *, 0x9910) = 0;
}
