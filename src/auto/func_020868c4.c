#include "m2c.h"

s32 func_02042f44(s32);                             /* extern */
void *func_02042f80(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
s32 func_02070ea4();                                /* extern */
void *func_02087228();                              /* extern */
M2C_UNK func_0208723c(void *);                      /* extern */
M2C_UNK func_02087240(void *);                      /* extern */
extern s32 data_02118994;

void func_020868c4(s8 arg0) {
    s32 var_r0;
    void *var_r4;

    if ((data_02118994 == 0) && (arg0 != 0)) {
        var_r0 = func_02042f44(0x3A24);
        if (var_r0 != 0) {
            var_r0 = func_02070ea4();
        }
        data_02118994 = var_r0;
    }
    var_r4 = func_02042f80(0x10, 1);
    if (var_r4 != NULL) {
        var_r4 = func_02087228();
    }
    M2C_FIELD(var_r4, s8 *, 8) = arg0;
    func_02087240(var_r4);
    if (var_r4 == NULL) {
        return;
    }
    func_0208723c(var_r4);
    func_0204306c(var_r4);
}
