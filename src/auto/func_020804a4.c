#include "m2c.h"

M2C_UNK func_0208222c(s32);                         /* extern */
extern void *data_02118994;
extern s32 data_02118998;

s32 func_020804a4(s32 *arg0) {
    s32 temp_r1;

    if ((arg0 != NULL) && (temp_r1 = *arg0, (temp_r1 != 0))) {
        M2C_FIELD(data_02118994, s16 *, 0x9C8) = (s16) temp_r1;
    }
    func_0208222c(data_02118998 + 0x380C);
    return 1;
}
