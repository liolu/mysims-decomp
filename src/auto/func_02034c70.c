#include "m2c.h"

M2C_UNK func_020059fc();                            /* extern */
M2C_UNK func_02005a14(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_02034bfc;
extern M2C_UNK func_02034c48;

void func_02034c70(void) {
    func_020059fc();
    func_02005a14(1, &func_02034bfc);
    func_02005a14(2, &func_02034c48);
}
