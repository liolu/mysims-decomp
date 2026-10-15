#include "m2c.h"

extern M2C_UNK func_020625c0;
extern M2C_UNK func_0206260c;
extern M2C_UNK func_020626c0;

void func_02062700(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1C0) = &func_020625c0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C4) = &func_0206260c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1CC) = &func_020626c0;
}
