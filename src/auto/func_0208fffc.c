#include "m2c.h"

M2C_UNK func_0208694c();                            /* extern */
extern M2C_UNK data_020fe05c;

void *func_0208fffc(void *arg0) {
    func_0208694c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fe05c;
    M2C_FIELD(arg0, s32 *, 4)      = 5;
    return arg0;
}
