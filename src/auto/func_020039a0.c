#include "m2c.h"

M2C_UNK func_02002db8(u16);                         /* extern */
extern u16 data_02106a8c;

u16 func_020039a0(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_02106a8c |= temp_r4;
    func_02002db8(temp_r4);
    return temp_r4;
}
