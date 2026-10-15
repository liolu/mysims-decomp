#include "m2c.h"

M2C_UNK func_020043b4();                            /* extern */
M2C_UNK func_02027814();                            /* extern */

void func_0202a788(void) {
    func_020043b4();
    func_02027814();
    *(s32 *) 0x04000600 = (*(s32 *) 0x04000600 & ~0xC0000000) | 0x80000000;
}
