#include "m2c.h"

M2C_UNK func_02005a14(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02005be4(M2C_UNK);                     /* extern */
extern s8 data_021dacb0;
extern M2C_UNK func_020cb000;

void func_020cafd0(void) {
    func_02005a14(0x100000, &func_020cb000);
    func_02005be4(0x100000);
    data_021dacb0 = 0;
}
