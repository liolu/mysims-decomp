#include "m2c.h"

void func_02034d70(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 4) = arg1;
    }
    M2C_FIELD(arg1, void **, 4) = arg0;
    M2C_FIELD(arg1, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8) = arg1;
}
