#include "m2c.h"

void *func_02020adc(void *, M2C_UNK *);             /* extern */

void func_020225d8(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02020adc(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02020adc(temp_r0, &sp0);
}
