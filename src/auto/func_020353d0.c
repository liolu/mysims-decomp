#include "m2c.h"

s32 func_020353bc();                                /* extern */
M2C_UNK func_02035470(s32, void *);                 /* extern */

void func_020353d0(void *arg0) {
    if (func_020353bc() == 0) {
        return;
    }
    func_02035470(M2C_FIELD(arg0, s32 *, 4), arg0);
}
