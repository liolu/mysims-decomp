#include "m2c.h"

M2C_UNK func_0205b4e4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205b510(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205b520(void *, M2C_UNK);             /* extern */
M2C_UNK func_0205b5b0(void *);                      /* extern */
M2C_UNK func_0205df80(void *);                      /* extern */
M2C_UNK func_0205e45c();                            /* extern */
M2C_UNK func_0205e520();                            /* extern */
M2C_UNK func_0205ec40();                            /* extern */
M2C_UNK func_02060604(void *);                      /* extern */

void func_0205e8f4(void *arg0) {
    func_0205ec40();
    func_0205df80(arg0);
    func_0205b5b0(arg0);
    func_02060604(arg0 + 0xBC);
    if (M2C_FIELD(arg0, u8 *, 0xA0) != 0) {
        func_0205e45c();
        func_0205e520();
        M2C_FIELD(arg0, u8 *, 0xA0) = 0U;
    }
    func_02060604(arg0 + 0xB0);
    M2C_FIELD(arg0, s32 *, 0x184) = -1;
    M2C_FIELD(arg0, s32 *, 0x188) = -1;
    func_0205b4e4(arg0, 0);
    func_0205b510(arg0, 0);
    func_0205b520(arg0, 0);
}
