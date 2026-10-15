#include "m2c.h"

M2C_UNK func_02027180(void *);                      /* extern */
M2C_UNK func_02043874(void *);                      /* extern */
M2C_UNK func_020550c0(void *);                      /* extern */

void func_020c56e4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10EC) != 0) {
        func_020550c0(arg0 + 0xFE8);
    }
    if (M2C_FIELD(arg0, u8 *, 0xEEC) != 0) {
        func_020550c0(arg0 + 0xDE8);
    }
    func_02027180(arg0 + 0xA34);
    func_02043874(arg0);
}
