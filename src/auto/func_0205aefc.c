#include "m2c.h"

M2C_UNK func_02030704(s32);                         /* extern */
extern M2C_UNK data_020f9134;
extern s32 data_021189d0;

s32 func_0205aefc(void) {
    if (M2C_FIELD(&data_020f9134, s32 *, 8) == M2C_FIELD(&data_020f9134, s32 *, 0)) {
        return 0;
    }
    func_02030704(data_021189d0);
    M2C_FIELD(&data_020f9134, s32 *, 8) = (s32) M2C_FIELD(&data_020f9134, s32 *, 0);
    return 1;
}
