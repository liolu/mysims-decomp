#include "m2c.h"

M2C_UNK func_02023a5c(void *);                      /* extern */
M2C_UNK func_02023aa0(void *);                      /* extern */
M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_02060530(void *, M2C_UNK);             /* extern */
M2C_UNK func_02070844(void *);                      /* extern */
M2C_UNK func_02070878(void *);                      /* extern */
extern M2C_UNK data_020d8e24;
extern M2C_UNK data_020d8e44;
extern M2C_UNK data_020f9780;
extern M2C_UNK data_020f9790;
extern M2C_UNK data_020f97b0;
extern M2C_UNK data_020f97c0;
extern M2C_UNK data_02103460;

void *func_020bf87c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02103460;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020f9780;
    func_02023a5c(arg0 + 8);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_020f97c0;
    func_020344e8(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &data_020d8e44;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &data_020f97b0;
    func_02060530(arg0 + 0x60, 0);
    func_02023aa0(arg0 + 0x4C);
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = &data_020f9790;
    func_020344e8(arg0 + 0x6C);
    M2C_FIELD(arg0, M2C_UNK **, 0x6C) = &data_020d8e24;
    func_02070878(arg0 + 0x84);
    func_02070844(arg0 + 0x9C);
    return arg0;
}
