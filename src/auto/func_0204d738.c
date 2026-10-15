#include "m2c.h"

M2C_UNK func_0204f1cc(void *);                      /* extern */
M2C_UNK func_0205558c(void *);                      /* extern */

void func_0204d738(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x9F0) != 0) {
        func_0205558c(arg0 + 0x8EC);
    }
    func_0204f1cc(arg0);
}
