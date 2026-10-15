#include "m2c.h"

M2C_UNK func_02002db8();                            /* extern */
extern u16 data_02106a8c;

void func_02003768(s32 arg0) {
    data_02106a8c |= arg0;
    func_02002db8(arg0);
}
