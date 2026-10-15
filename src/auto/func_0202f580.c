#include "m2c.h"

M2C_UNK func_02022800(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0202f368(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0202f3b8(void *);                      /* extern */
extern M2C_UNK data_02116a58;

void func_0202f580(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02022800(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02022800(&data_02116a58, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_0202f368(temp_r4, arg0);
    }
    func_0202f3b8(arg0);
}
