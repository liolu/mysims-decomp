#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_0200c9b0(void *);                      /* extern */
M2C_UNK func_0200c9ec(void *);                      /* extern */
M2C_UNK func_0200caac(void *);                      /* extern */
s32 func_02060c68(void *);                          /* extern */
extern M2C_UNK data_021daac4;

void func_02060e40(void *arg0) {
    s32 var_r0;

    func_02006da0(&data_021daac4);
    if (func_02060c68(arg0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            func_0200caac(arg0 + 4);
            func_0200c9ec(arg0 + 4);
        }
        func_0200c9b0(arg0 + 4);
    }
    func_02006e24(&data_021daac4);
}
