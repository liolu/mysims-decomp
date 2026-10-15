#include "m2c.h"

M2C_UNK func_02035e9c(void *);                      /* extern */
M2C_UNK func_02038530(void *);                      /* extern */
M2C_UNK func_02038a08(void *);                      /* extern */
M2C_UNK func_02038ed0(void *);                      /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_0205558c();                            /* extern */
extern M2C_UNK data_020dd914;

void *func_02055008(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dd914;
    if (M2C_FIELD(arg0, u8 *, 0x104) != 0) {
        func_0205558c(arg0);
    }
    func_02038ed0(arg0 + 0x144);
    func_02038530(arg0 + 0xD4);
    func_02038a08(arg0 + 0xBC);
    func_02035e9c(arg0);
    func_0204306c(arg0);
    return arg0;
}
