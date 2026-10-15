#include "m2c.h"

M2C_UNK func_0205505c(void *, void *);              /* extern */
M2C_UNK func_020c9810();                            /* extern */
M2C_UNK func_020c98a0(void *);                      /* extern */

void func_020c977c(void *arg0) {
    func_020c9810();
    func_020c98a0(arg0);
    if (M2C_FIELD(arg0, u8 *, 0xED0) == 0) {
        return;
    }
    func_0205505c(arg0 + 0x8EC, arg0 + 0xDCC);
}
