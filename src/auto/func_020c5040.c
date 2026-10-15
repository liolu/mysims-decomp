#include "m2c.h"

M2C_UNK func_02035ed8(void *, M2C_UNK, M2C_UNK *);  /* extern */
M2C_UNK func_0205505c(void *, void *);              /* extern */
M2C_UNK func_020c5294(void *);                      /* extern */
M2C_UNK func_020c54b8();                            /* extern */
M2C_UNK func_020c558c(void *);                      /* extern */
M2C_UNK func_020c55ec(void *);                      /* extern */
extern M2C_UNK data_021039d4;

void func_020c5040(void *arg0) {
    func_020c54b8();
    func_020c558c(arg0);
    if (M2C_FIELD(arg0, u8 *, 0xEEC) != 0) {
        func_0205505c(arg0 + 0x8EC, arg0 + 0xDE8);
        M2C_FIELD(arg0, s32 *, 0xEA0) = 0x1E;
        func_02035ed8(arg0 + 0x8EC, 6, &data_021039d4);
    }
    func_020c55ec(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x10EC) != 0) {
        func_0205505c(arg0 + 0x8EC, arg0 + 0xFE8);
        M2C_FIELD(arg0, s32 *, 0x10A0) = 0x1E;
        func_02035ed8(arg0 + 0x8EC, 6, &data_021039d4);
    }
    func_020c5294(arg0);
}
