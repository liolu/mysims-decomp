/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020d8fe8;
extern M2C_UNK data_021189a4;

void func_02042d5c(void *arg0) {
    s32 var_r3;

    var_r3                         = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8fe8;
    do {
        *((M2C_UNK *) ((s8 *) &data_021189a4 + (var_r3 * 4))) = 0;
        var_r3 += 1;
    } while (var_r3 < 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
