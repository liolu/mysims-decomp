#include "m2c.h"

extern M2C_UNK func_02062640;
extern M2C_UNK func_0206268c;
extern M2C_UNK func_020626c0;

void func_02062728(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = &func_02062640;
    M2C_FIELD(arg0, M2C_UNK **, 0x20C) = &func_0206268c;
    M2C_FIELD(arg0, M2C_UNK **, 0x214) = &func_020626c0;
}
