#include "m2c.h"

M2C_UNK func_020812a8(s32, s32, s32);               /* extern */
extern s32 data_02118998;

void func_02075c60(void *arg0) {
    func_020812a8(data_02118998 + 0x380C, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}
