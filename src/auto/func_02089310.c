#include "m2c.h"

M2C_UNK func_0205ecec(void *);                      /* extern */
M2C_UNK func_0205fd40(void *, s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0205fdf8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02081dbc(s32, M2C_UNK);                    /* extern */
extern s32 data_02118998;

void func_02089310(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x4310) & 2) {
        return;
    }
    func_0205ecec(arg0 + 0x2A88);
    if ((data_02118998 != 0) && (func_02081dbc(data_02118998 + 0x380C, 0x23) != 0)) {
        func_0205fdf8(arg0 + 0x2A88, 0xBA, 0xAB, 0, 1);
    }
    func_0205fd40(arg0 + 0x2A88, M2C_FIELD(arg0, s32 *, 0x431C), 7, 0x6C, 0xAC, 0, 2, 0);
    func_0205ecec(arg0 + 0x2C34);
}
