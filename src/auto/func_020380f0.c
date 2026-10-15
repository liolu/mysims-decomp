#include "m2c.h"

M2C_UNK func_02033d88(void *);                      /* extern */
M2C_UNK func_020340bc(void *);                      /* extern */
M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_020345c0(void *);                      /* extern */
M2C_UNK func_02036684(void *);                      /* extern */
M2C_UNK func_02036df8(s32);                         /* extern */
M2C_UNK func_02037074(void *);                      /* extern */
M2C_UNK func_02037a44();                            /* extern */
extern M2C_UNK data_020d8e14;
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_020d8e34;
extern M2C_UNK data_020d8e44;
extern M2C_UNK data_020d8e54;

void *func_020380f0(void *arg0) {
    func_02037a44();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8e54;
    func_02036df8(arg0 + 0x70);
    func_02037074(arg0 + 0xAC);
    func_020340bc(arg0 + 0xE8);
    func_020345c0(arg0 + 0x110);
    M2C_FIELD(arg0, M2C_UNK **, 0x110) = &data_020d8e34;
    func_020340bc(arg0 + 0x138);
    func_020345c0(arg0 + 0x160);
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &data_020d8e34;
    func_02033d88(arg0 + 0x188);
    func_020345c0(arg0 + 0x26C);
    M2C_FIELD(arg0, M2C_UNK **, 0x26C) = &data_020d8e34;
    func_02033d88(arg0 + 0x294);
    func_020345c0(arg0 + 0x378);
    M2C_FIELD(arg0, M2C_UNK **, 0x378) = &data_020d8e34;
    func_020344e8(arg0 + 0x3A0);
    M2C_FIELD(arg0, M2C_UNK **, 0x3A0) = &data_020d8e44;
    func_020344e8(arg0 + 0x3BC);
    M2C_FIELD(arg0, M2C_UNK **, 0x3BC) = &data_020d8e24;
    func_020344e8(arg0 + 0x3D4);
    M2C_FIELD(arg0, M2C_UNK **, 0x3D4) = &data_020d8e14;
    func_020344e8(arg0 + 0x3F4);
    M2C_FIELD(arg0, M2C_UNK **, 0x3F4) = &data_020d8e24;
    func_02036684(arg0 + 0x40C);
    M2C_FIELD(arg0, s32 *, 0x15AC) = 0;
    return arg0;
}
