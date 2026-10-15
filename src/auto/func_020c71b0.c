#include "m2c.h"

M2C_UNK func_02009108(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02009308(s32, s32, M2C_UNK);           /* extern */

s32 func_020c71b0(void *arg0) {
    func_02009308(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), 0x800);
    func_02009108(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), 0x20);
    return 0;
}
