#include "m2c.h"

M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_02043094(s32);                         /* extern */
M2C_UNK func_02044bc0(void *);                      /* extern */
M2C_UNK func_0204d08c();                            /* extern */
M2C_UNK func_02054fbc(void *);                      /* extern */
extern M2C_UNK data_020d9724;

void *func_0204c570(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9724;
    func_0204d08c();
    func_02043094(M2C_FIELD(arg0, s32 *, 0x16AC));
    M2C_FIELD(arg0, s32 *, 0x16AC) = 0;
    func_02054fbc(arg0 + 0x14AC);
    func_02054fbc(arg0 + 0x12AC);
    func_02044bc0(arg0);
    func_0204306c(arg0);
    return arg0;
}
