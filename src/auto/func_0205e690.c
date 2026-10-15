#include "m2c.h"

M2C_UNK func_02034580(void *);                      /* extern */
M2C_UNK func_0203539c(void *);                      /* extern */
M2C_UNK func_0205b48c(void *);                      /* extern */
M2C_UNK func_0205e45c();                            /* extern */
M2C_UNK func_0205e520();                            /* extern */
M2C_UNK func_0206054c(void *);                      /* extern */

void *func_0205e690(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xA0) != 0) {
        func_0205e45c();
        func_0205e520();
        M2C_FIELD(arg0, u8 *, 0xA0) = 0U;
    }
    func_0206054c(arg0 + 0x194);
    func_02034580(arg0 + 0x148);
    func_02034580(arg0 + 0x128);
    func_0203539c(arg0 + 0x110);
    func_0203539c(arg0 + 0xEC);
    func_0203539c(arg0 + 0xD0);
    func_0206054c(arg0 + 0xBC);
    func_0206054c(arg0 + 0xB0);
    func_0206054c(arg0 + 0xA4);
    func_0205b48c(arg0);
    return arg0;
}
