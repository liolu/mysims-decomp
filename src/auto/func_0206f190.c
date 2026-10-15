#include "m2c.h"

M2C_UNK func_0206d5c4();                            /* extern */
M2C_UNK func_0206db08(void *);                      /* extern */
M2C_UNK func_0206e024(void *);                      /* extern */
M2C_UNK func_0206e3e8(void *);                      /* extern */
M2C_UNK func_0206eedc(void *);                      /* extern */

void func_0206f190(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1A8) != 0) {
        func_0206d5c4(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A9) != 0) {
        func_0206db08(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AA) != 0) {
        func_0206e024(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AB) != 0) {
        func_0206e3e8(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AC) == 0) {
        return;
    }
    func_0206eedc(arg0);
}
