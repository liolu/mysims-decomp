#include "m2c.h"

M2C_UNK func_02038d60(void *);                      /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_02056650(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x38) == 0) {
        return;
    }
    func_02038d60(arg0 + 0x1C);
    func_02060604(arg0 + 0xC);
    M2C_FIELD(arg0, u8 *, 0x38) = 0U;
}
