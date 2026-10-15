#include "m2c.h"

M2C_UNK func_02038b90(void *);                      /* extern */
M2C_UNK func_02038bcc();                            /* extern */

void func_02038af8(void *arg0, s32 *arg1) {
    if (arg1 == NULL) {
        return;
    }
    if (*arg1 != 0x30444D42) {
        return;
    }
    M2C_FIELD(arg0, s32 **, 0x10) = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x14) == 0) {
        return;
    }
    func_02038bcc(arg0);
    func_02038b90(arg0);
}
