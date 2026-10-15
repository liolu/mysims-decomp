#include "m2c.h"

M2C_UNK func_02081398(s32, s32, s32);               /* extern */
extern s32 data_02118998;

void func_02075c88(void *arg0) {
    func_02081398(data_02118998 + 0x380C, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}
