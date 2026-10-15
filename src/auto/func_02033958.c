/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02033958(void *arg0) {
    u16 *temp_r1;
    u16 temp_r2;
    u8 var_ip;
    void *var_r3;

    var_ip = M2C_FIELD(arg0, u8 *, 0x14);
    var_r3 = M2C_FIELD(arg0, void **, 0x10);
    do {
        temp_r2 = M2C_FIELD(var_r3, u16 *, 4);
        temp_r1 = M2C_FIELD(var_r3, u16 **, 0);
        var_r3 += 8;
        *temp_r1 = temp_r2;
        var_ip -= 1;
    } while (var_ip != 0);
    return 0;
}
