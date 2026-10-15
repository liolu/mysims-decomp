#include "m2c.h"

s32 func_020304a4(M2C_UNK);                         /* extern */
extern M2C_UNK func_02032bf4;
extern M2C_UNK func_02032c68;
extern M2C_UNK func_02032c78;
extern M2C_UNK func_02032cb0;
extern M2C_UNK func_02032cc0;
extern M2C_UNK func_02032ce8;
extern M2C_UNK func_02032cec;
extern M2C_UNK func_02032d08;

void func_02032b74(void *arg0, M2C_UNK arg1) {
    if (func_020304a4(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02032bf4;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_02032c68;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02032c78;
        M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_02032cb0;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_02032cc0;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &func_02032ce8;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_02032cec;
    M2C_FIELD(arg0, M2C_UNK **, 0x170) = &func_02032d08;
}
