#include "m2c.h"

void func_02035450(void *arg0, void *arg1) {
    *M2C_FIELD(arg0, void ***, 0x14) = arg1;
    M2C_FIELD(arg1, void ***, 8)     = (void **) M2C_FIELD(arg0, void ***, 0x14);
    M2C_FIELD(arg0, void ***, 0x14)  = (void **) (arg1 + 0xC);
    M2C_FIELD(arg1, void **, 4)      = arg0;
}
