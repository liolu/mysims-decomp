#include "m2c.h"

void func_020550c0(void *arg0) {
    void *temp_r2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x10C);
    if (temp_r2 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r2, void **, 0x110) == arg0) {
        M2C_FIELD(temp_r2, void **, 0x110) = (void *) M2C_FIELD(arg0, void **, 0x118);
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x118);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x114) = (void *) M2C_FIELD(arg0, void **, 0x114);
        M2C_FIELD(arg0, void **, 0x118)    = NULL;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x114);
    if (temp_r3_2 != NULL) {
        M2C_FIELD(temp_r3_2, void **, 0x118) = (void *) M2C_FIELD(arg0, void **, 0x118);
        M2C_FIELD(arg0, void **, 0x114)      = NULL;
    }
    M2C_FIELD(arg0, void **, 0x10C) = NULL;
}
