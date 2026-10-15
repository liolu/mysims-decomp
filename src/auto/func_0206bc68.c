#include "m2c.h"

M2C_UNK func_02069b4c(void *);                      /* extern */
M2C_UNK func_02069ef8(void *);                      /* extern */
M2C_UNK func_0206a078(void *);                      /* extern */
M2C_UNK func_0206a4d4(void *);                      /* extern */
M2C_UNK func_0206a68c(void *);                      /* extern */
M2C_UNK func_0206a9f0(void *);                      /* extern */
M2C_UNK func_0206aba8(void *);                      /* extern */

void func_0206bc68(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x1A4) == 0) && (M2C_FIELD(arg0, u8 *, 0x1A5) == 0)) {

    } else {
        func_02069b4c(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x194) = 0;
        M2C_FIELD(arg0, s32 *, 0x198) = 0;
        func_02069ef8(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A8) != 0) {
        func_0206a078(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1A9) != 0) {
        func_0206a4d4(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AA) != 0) {
        func_0206a68c(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AB) != 0) {
        func_0206a9f0(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1AC) == 0) {
        return;
    }
    func_0206aba8(arg0);
}
