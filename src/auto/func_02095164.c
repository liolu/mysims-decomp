#include "m2c.h"

extern M2C_UNK func_02094764;
extern M2C_UNK func_020947b0;
extern M2C_UNK func_020947e4;

void func_02095164(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x16EC) = &func_02094764;
    M2C_FIELD(arg0, M2C_UNK **, 0x16F0) = &func_020947b0;
    M2C_FIELD(arg0, M2C_UNK **, 0x16F8) = &func_020947e4;
}
