#include "m2c.h"

M2C_UNK func_020811b4();                            /* extern */
M2C_UNK func_0208121c(void *);                      /* extern */
M2C_UNK func_020812a8(void *, s32, s32);            /* extern */
M2C_UNK func_02081398(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0208149c(void *, M2C_UNK);             /* extern */

void func_02081100(void *arg0) {
    s32 temp_r1;

    func_020811b4();
    func_0208121c(arg0);
    func_0208149c(arg0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_02081398(arg0, M2C_FIELD(arg0, s32 *, 0x24), -1);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r1 == 0) {
        return;
    }
    func_020812a8(arg0, temp_r1, M2C_FIELD(arg0, s32 *, 0x24));
}
