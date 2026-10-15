#include "m2c.h"

void func_02084000(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s16 *, 0x16) = 1;
    }
}
