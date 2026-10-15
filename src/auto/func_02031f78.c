#include "m2c.h"

s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_02022800(M2C_UNK, void *);             /* extern */
void *func_02022860(M2C_UNK, M2C_UNK);              /* extern */

void *func_02031f78(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_0200856c();
    temp_r0 = func_02022860(arg0, 0);
    if (temp_r0 != NULL) {
        func_02022800(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_02008580(temp_r4);
    return temp_r0;
}
