#include "m2c.h"

M2C_UNK func_02081e00(void *, s32);                 /* extern */
M2C_UNK func_0208c110();                            /* extern */
extern s32 data_02118998;

void func_0208bca4(void *arg0) {
    void *temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) >= (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        return;
    }
    func_0208c110(arg0);
    temp_r0 = data_02118998 + 0x380C;
    func_02081e00(temp_r0, M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r0, void **, 0xC), void **, 0x10), s32 *, 8) +
                               M2C_FIELD(arg0, s32 *, 0x10));
}
