#include "m2c.h"

M2C_UNK func_02055354(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02055e28(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020c6220(void *);                      /* extern */
extern M2C_UNK data_020d6430;
extern M2C_UNK data_020d6440;

void func_020c619c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8E4);
    if (temp_r0 == 0xA0) {
        func_02055354(arg0 + 0x8EC, &data_020d6430, 0);
    } else if (temp_r0 == 0xA1) {
        func_02055354(arg0 + 0x8EC, &data_020d6440, 0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x9F0) != 0) {
        func_02055e28(arg0 + 0x8EC, 0, 0, 0);
    }
    func_020c6220(arg0);
}
