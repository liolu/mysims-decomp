#include "m2c.h"

void *func_02050ca4(u16, u16);                      /* extern */
M2C_UNK func_020516d8(void *);                      /* extern */
void *func_02056d48();                              /* extern */

void func_02058418(void) {
    void *temp_r0;

    temp_r0 = func_02056d48();
    if (temp_r0 == NULL) {
        return;
    }
    if ((M2C_FIELD(func_02050ca4((u16) M2C_FIELD(temp_r0, s32 *, 0x8E4), (u16) M2C_FIELD(temp_r0, s32 *, 0x8E8)), s32 *,
                   0x38) &
         0x800) &&
        (M2C_FIELD(temp_r0, u8 *, 0xE9C) != 0)) {
        func_020516d8(temp_r0);
    }
}
