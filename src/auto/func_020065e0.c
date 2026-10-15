#include "m2c.h"

M2C_UNK func_020060f4(s32, void *);                 /* extern */
M2C_UNK func_020061d8(void *);                      /* extern */
M2C_UNK func_0200677c(void *);                      /* extern */
M2C_UNK func_02006834();                            /* extern */
M2C_UNK func_02006a00();                            /* extern */
M2C_UNK func_02006a34();                            /* extern */
M2C_UNK func_02006e80(void *);                      /* extern */
M2C_UNK func_02008968();                            /* extern */
extern M2C_UNK data_02106b48;

void func_020065e0(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_02106b48, void ***, 8);
    func_02006a00();
    func_02006e80(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020060f4(temp_r0, temp_r4);
    }
    func_020061d8(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_0200677c(temp_r4 + 0x9C);
    func_02006a34();
    func_02006834();
    func_02008968();
}
