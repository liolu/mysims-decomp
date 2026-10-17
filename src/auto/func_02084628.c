#include "m2c.h"

M2C_UNK func_020432a4(void *);                      /* extern */

void *func_02084628(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xDCC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_020432a4(arg0);
    return arg0;
}
