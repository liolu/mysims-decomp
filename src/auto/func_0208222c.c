#include "m2c.h"

extern void *data_02118994;

void func_0208222c(void) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(data_02118994, u16 *, 0x9C8);
    if (temp_r2 == 0) {
        return;
    }
    M2C_FIELD(data_02118994, u16 *, 0x9C6) = temp_r2;
    M2C_FIELD(data_02118994, u16 *, 0x9C8) = 0U;
}
