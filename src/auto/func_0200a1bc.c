#include "m2c.h"

M2C_UNK func_02006d88(M2C_UNK *);                   /* extern */
M2C_UNK func_0200a21c();                            /* extern */
M2C_UNK func_0200a92c();                            /* extern */
extern s32 data_02106eec;
extern M2C_UNK data_02106ef0;

void func_0200a1bc(void) {
    if (data_02106eec != 0) {
        return;
    }
    data_02106eec = 1;
    func_02006d88(&data_02106ef0);
    func_0200a21c();
    func_0200a92c();
}
