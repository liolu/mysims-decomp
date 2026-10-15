#include "m2c.h"

M2C_UNK func_02034d20(void *);                      /* extern */

void *func_020369e4(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x28);
    if (temp_r4 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, void **, 0x28) = (void *) M2C_FIELD(temp_r4, void **, 8);
    func_02034d20(temp_r4);
    return temp_r4;
}
