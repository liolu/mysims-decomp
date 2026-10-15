#include "m2c.h"

M2C_UNK func_02060604(void *);                      /* extern */

void func_0205e520(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 > 0) {
        *arg0 = temp_r1 - 1;
    }
    if (*arg0 != 0) {
        return;
    }
    func_02060604(((s8 *) arg0 + 4));
}
