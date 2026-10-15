#include "m2c.h"

M2C_UNK func_02008274();                            /* extern */
extern M2C_UNK data_02106e9c;

void func_02008164(void *arg0) {
    void *temp_r3;

    temp_r3                                  = M2C_FIELD(&data_02106e9c, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x14)           = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x18)             = 0;
    M2C_FIELD(&data_02106e9c, void **, 0x10) = arg0;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void **, 0x18) = arg0;
        return;
    }
    M2C_FIELD(&data_02106e9c, void **, 0xC) = arg0;
    func_02008274();
}
