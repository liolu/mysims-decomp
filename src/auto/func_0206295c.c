#include "m2c.h"

M2C_UNK func_0202222c(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02034644(void *);                      /* extern */
M2C_UNK func_02034bc4(void *);                      /* extern */
M2C_UNK func_0203539c(void *);                      /* extern */
M2C_UNK func_0204306c(void *);                      /* extern */
M2C_UNK func_02062750(s32);                         /* extern */
extern M2C_UNK data_020f966c;
extern M2C_UNK func_02034550;

void *func_0206295c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f966c;
    func_02062750(M2C_FIELD(arg0, s32 *, 0x10FC));
    func_02034644(arg0 + 0x10C8);
    func_02034644(arg0 + 0x10A0);
    func_02034644(arg0 + 0x1078);
    func_0202222c(arg0 + 0xFB8, 4, 0x18, &func_02034550);
    func_02034644(arg0 + 0xF94);
    func_02034644(arg0 + 0xF6C);
    func_02034644(arg0 + 0xF44);
    func_02034644(arg0 + 0xF1C);
    func_0202222c(arg0 + 0xE5C, 4, 0x18, &func_02034550);
    func_02034644(arg0 + 0xE38);
    func_0203539c(arg0 + 0x44);
    func_0203539c(arg0 + 0x28);
    func_0203539c(arg0 + 0xC);
    func_02034bc4(arg0);
    func_0204306c(arg0);
    return arg0;
}
