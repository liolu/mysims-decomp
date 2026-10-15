#include "m2c.h"

void func_02034d20(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, void **, 8) = NULL;
}
