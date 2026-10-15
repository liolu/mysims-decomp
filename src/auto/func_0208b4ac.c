#include "m2c.h"

M2C_UNK func_020421b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020868c4();                            /* extern */
extern void *data_02118998;

void func_0208b4ac(void) {
    func_020868c4();
    if ((data_02118998 != NULL) && (M2C_FIELD(data_02118998, u8 *, 0x9924) != 0)) {
        func_020421b8(data_02118998, 0);
    }
}
