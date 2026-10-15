#include "m2c.h"

M2C_UNK func_02027180(void *);                      /* extern */
M2C_UNK func_02043874(void *);                      /* extern */
M2C_UNK func_02047a94();                            /* extern */
M2C_UNK func_020550c0(void *);                      /* extern */

void func_0204576c(void *arg0) {
    func_02047a94();
    if (M2C_FIELD(arg0, u8 *, 0x10F0) != 0) {
        func_020550c0(arg0 + 0xFEC);
    }
    if (M2C_FIELD(arg0, u8 *, 0xEF0) != 0) {
        func_020550c0(arg0 + 0xDEC);
    }
    func_02027180(arg0 + 0xA34);
    func_02043874(arg0);
}
