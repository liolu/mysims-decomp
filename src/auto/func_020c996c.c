#include "m2c.h"

M2C_UNK func_02043874(void *);                      /* extern */
M2C_UNK func_020550c0(void *);                      /* extern */
M2C_UNK func_0205558c(void *);                      /* extern */

void func_020c996c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xED0) != 0) {
        func_020550c0(arg0 + 0xDCC);
        func_0205558c(arg0 + 0xDCC);
    }
    func_02043874(arg0);
}
