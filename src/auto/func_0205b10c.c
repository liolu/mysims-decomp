#include "m2c.h"

M2C_UNK func_0205afb4(M2C_UNK, M2C_UNK, u8 *, u16, s32, s32, s32); /* extern */
u8 *func_0205b088(void **, M2C_UNK);                /* extern */

u8 func_0205b10c(void **arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u8 arg6) {
    u8 *temp_r0;

    temp_r0 = func_0205b088(arg0, arg3);
    if (temp_r0 == NULL) {
        return 0U;
    }
    func_0205afb4(arg1, arg2, temp_r0, arg4, (s32) arg5, (s32) arg6, (s32) M2C_FIELD(*arg0, u8 *, 8));
    return *temp_r0;
}
