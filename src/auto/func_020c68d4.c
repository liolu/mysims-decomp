#include "m2c.h"

M2C_UNK func_0201a678(M2C_UNK *, s32, s32);         /* extern */
M2C_UNK func_0205b4e4(void *, s32);                 /* extern */
M2C_UNK func_0205b510(void *, s32);                 /* extern */
M2C_UNK func_0205b520(void *, s32);                 /* extern */
M2C_UNK func_0205b530(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205b5c0(void *);                      /* extern */
M2C_UNK func_0205b718(void *, M2C_UNK);             /* extern */
s32 *func_020603dc(M2C_UNK);                        /* extern */
M2C_UNK func_020606c0(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_020c6a5c(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_021046cc;
extern void *data_02118994;

void func_020c68d4(void *arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp0[32];

    M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xF8) = arg2;
    func_0205b530(arg0, 0x18, 2, 1);
    func_0205b5c0(arg0);
    if (data_02118994 != NULL) {
        arg4 = (s32) M2C_FIELD(data_02118994, u8 *, 0x14);
    }
    func_020606c0(arg0 + 0xAC, &data_021046cc, 0);
    func_0205b510(arg0, M2C_FIELD(arg0, s32 *, 0xB0));
    func_0201a678(sp0, *func_020603dc(0x18), arg4 + 0x41);
    func_020606c0(arg0 + 0xA0, sp0, 0);
    func_0205b520(arg0, M2C_FIELD(arg0, s32 *, 0xA4));
    func_0205b4e4(arg0, M2C_FIELD(arg0, s32 *, 0xA4));
    func_0205b718(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x68) = arg4;
    M2C_FIELD(arg0, s16 *, 0x5E) = 1;
    func_020c6a5c(arg0, arg3);
}
