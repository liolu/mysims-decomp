#include "m2c.h"

M2C_UNK func_02000d84();                            /* extern */
M2C_UNK func_02000de0();                            /* extern */
M2C_UNK func_02006b74();                            /* extern */
M2C_UNK func_02006d88(M2C_UNK *);                   /* extern */
extern s8 data_021189a0;
extern M2C_UNK data_021189b4;

void func_02042da8(void *arg0) {
    func_02006b74();
    func_02006d88(&data_021189b4);
    func_02000d84();
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02000de0();
    data_021189a0 = 0;
}
