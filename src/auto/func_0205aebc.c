#include "m2c.h"

s32 func_020306b8(s32);                             /* extern */
extern M2C_UNK data_020f9134;
extern s32 data_021189d0;

s32 func_0205aebc(void) {
    if (M2C_FIELD(&data_020f9134, s32 *, 8) != M2C_FIELD(&data_020f9134, s32 *, 0)) {
        return 0;
    }
    M2C_FIELD(&data_020f9134, s32 *, 8) = func_020306b8(data_021189d0);
    return 1;
}
