#include "m2c.h"

M2C_UNK func_020601bc(void *, u16);                 /* extern */
extern void *data_02118998;

s32 func_02074290(s32 *arg0) {
    s32 temp_r0;

    if ((arg0 != NULL) && (temp_r0 = *arg0, (temp_r0 != 0))) {
        func_020601bc(data_02118998 + 0x9728, (u16) temp_r0);
    } else {
        func_020601bc(data_02118998 + 0x9728, M2C_FIELD(data_02118998, u16 *, 0x384C));
    }
    return 1;
}
