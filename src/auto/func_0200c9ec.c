#include "m2c.h"

M2C_UNK func_0200672c(void *);                      /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
s32 func_0200c120(void *);                          /* extern */

s32 func_0200c9ec(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = func_0200856c();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 4);
            do {
                func_0200672c(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x40));
        } else {
            do {
                func_0200672c(arg0 + 0x18);
                if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    func_02008580(temp_r4);
    if (var_r5 != 0) {
        return func_0200c120(arg0);
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
