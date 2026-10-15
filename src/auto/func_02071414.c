#include "m2c.h"

void *func_020713fc();                              /* extern */

void func_02071414(void) {
    void *temp_r0;

    temp_r0 = func_020713fc();
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s16 *, 0)  = 0;
    M2C_FIELD(temp_r0, s16 *, 8)  = 0;
    M2C_FIELD(temp_r0, s16 *, 4)  = 0x14;
    M2C_FIELD(temp_r0, s8 *, 0xA) = 0;
    M2C_FIELD(temp_r0, s16 *, 6)  = 0;
    M2C_FIELD(temp_r0, s8 *, 0xB) = 0;
    M2C_FIELD(temp_r0, s16 *, 2)  = 0;
}
