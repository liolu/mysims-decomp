#include "m2c.h"

extern void **data_021188a4;

void func_02034c48(void) {
    if (data_021188a4 == NULL) {
        return;
    }
    M2C_FIELD(*data_021188a4, M2C_UNK(**)(), 4)(data_021188a4);
}
