#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_02018160(s32);                         /* extern */
extern M2C_UNK data_021189b4;

void func_02060604(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_02006da0(&data_021189b4);
    func_02018160(M2C_FIELD(arg0, s32 *, 4));
    func_02006e24(&data_021189b4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
