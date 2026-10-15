#include "m2c.h"

M2C_UNK func_02043094(s32);                         /* extern */
M2C_UNK func_02044bc0(void *);                      /* extern */
M2C_UNK func_0204f1cc();                            /* extern */
M2C_UNK func_02054fbc(void *);                      /* extern */
M2C_UNK func_0206040c(void *);                      /* extern */
extern M2C_UNK data_020d986c;

void *func_0204d838(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d986c;
    func_0204f1cc();
    func_02043094(M2C_FIELD(arg0, s32 *, 0x1D94));
    M2C_FIELD(arg0, s32 *, 0x1D94) = 0;
    func_02054fbc(arg0 + 0x1B64);
    func_0206040c(arg0 + 0x1298);
    func_02044bc0(arg0);
    return arg0;
}
