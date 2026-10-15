#include "m2c.h"

M2C_UNK func_020a06e8();                            /* extern */
M2C_UNK func_020a0848();                            /* extern */

void func_020a06ac(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x6ED0);
    if (temp_ip & 8) {
        return;
    }
    if (temp_ip & 0x10) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x6F50) == -1) {
        func_020a06e8(arg0, arg1, arg2);
        return;
    }
    func_020a0848(arg0, arg1, arg2);
}
