#include "m2c.h"

extern M2C_UNK func_020946e4;
extern M2C_UNK func_02094730;
extern M2C_UNK func_020947e4;

void func_02095138(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x16A4) = &func_020946e4;
    M2C_FIELD(arg0, M2C_UNK **, 0x16A8) = &func_02094730;
    M2C_FIELD(arg0, M2C_UNK **, 0x16B0) = &func_020947e4;
}
