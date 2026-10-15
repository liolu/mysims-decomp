#include "m2c.h"

M2C_UNK func_020344e8(void *);                      /* extern */
M2C_UNK func_02034d90(void *);                      /* extern */
M2C_UNK func_020380f0();                            /* extern */
M2C_UNK func_02042ccc(void *);                      /* extern */
s32 func_02042f80(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0204888c(void *);                      /* extern */
M2C_UNK func_02052470(void *);                      /* extern */
M2C_UNK func_020566e0(void *);                      /* extern */
M2C_UNK func_0205e570(void *);                      /* extern */
M2C_UNK func_02063e58(void *);                      /* extern */
M2C_UNK func_02063e80(void *);                      /* extern */
M2C_UNK func_0206b318(void *);                      /* extern */
M2C_UNK func_02080dc4(void *);                      /* extern */
M2C_UNK func_02095324(void *);                      /* extern */
M2C_UNK func_020981e4(void *);                      /* extern */
M2C_UNK func_0209896c(void *);                      /* extern */
M2C_UNK func_020adc04(void *);                      /* extern */
s32 func_020b0350();                                /* extern */
M2C_UNK func_020c5c94(void *);                      /* extern */
M2C_UNK func_020c83ec(void *);                      /* extern */
M2C_UNK func_020c9ef4(void *);                      /* extern */
extern M2C_UNK data_020d8c88;
extern M2C_UNK data_020d8c9c;
extern M2C_UNK data_020d8e14;
extern M2C_UNK data_020d8f34;

void *func_02042834(void *arg0) {
    s32 var_r0;
    void *temp_r3;
    void *temp_r3_2;

    func_020380f0();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d8f34;
    func_02063e80(arg0 + 0x15B0);
    func_02063e80(arg0 + 0x164C);
    func_02063e58(arg0 + 0x16E8);
    func_02063e58(arg0 + 0x1730);
    func_02034d90(arg0 + 0x1778);
    func_02034d90(arg0 + 0x1D80);
    func_020344e8(arg0 + 0x2388);
    M2C_FIELD(arg0, M2C_UNK **, 0x2388) = &data_020d8e14;
    func_020981e4(arg0 + 0x23A8);
    func_0209896c(arg0 + 0x2408);
    func_02042ccc(arg0 + 0x2418);
    func_0204888c(arg0 + 0x244C);
    func_020566e0(arg0 + 0x273C);
    func_02052470(arg0 + 0x27C0);
    func_02080dc4(arg0 + 0x380C);
    func_02095324(arg0 + 0x3CFC);
    func_020adc04(arg0 + 0x3DC4);
    func_020c9ef4(arg0 + 0x4744);
    func_020c83ec(arg0 + 0x476C);
    func_020c5c94(arg0 + 0x47D4);
    func_0206b318(arg0 + 0x812C);
    func_0205e570(arg0 + 0x9728);
    temp_r3                             = arg0 + 0x98E0;
    M2C_FIELD(arg0, M2C_UNK **, 0x98E0) = &data_020d8c9c;
    M2C_FIELD(temp_r3, s32 *, 4)        = 0;
    M2C_FIELD(temp_r3, s32 *, 8)        = 0;
    M2C_FIELD(temp_r3, s32 *, 0xC)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x98E0) = &data_020d8c88;
    M2C_FIELD(temp_r3, s32 *, 0x10)     = 0;
    M2C_FIELD(temp_r3, void **, 0x14)   = (void *) (temp_r3 + 0x10);
    temp_r3_2                           = arg0 + 0x98F8;
    M2C_FIELD(arg0, M2C_UNK **, 0x98F8) = &data_020d8c9c;
    M2C_FIELD(temp_r3_2, s32 *, 4)      = 0;
    M2C_FIELD(temp_r3_2, s32 *, 8)      = 0;
    M2C_FIELD(temp_r3_2, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x98F8) = &data_020d8c88;
    M2C_FIELD(temp_r3_2, s32 *, 0x10)   = 0;
    M2C_FIELD(temp_r3_2, void **, 0x14) = (void *) (temp_r3_2 + 0x10);
    var_r0                              = func_02042f80(0x556C, 1);
    if (var_r0 != 0) {
        var_r0 = func_020b0350();
    }
    M2C_FIELD(arg0, s32 *, 0x3808) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x96EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x96F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x96F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x96F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x96FC) = 0;
    M2C_FIELD(arg0, s8 *, 0x9700)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9704) = 0;
    M2C_FIELD(arg0, s32 *, 0x9708) = 0;
    M2C_FIELD(arg0, s32 *, 0x970C) = 0;
    M2C_FIELD(arg0, s32 *, 0x9710) = 0;
    M2C_FIELD(arg0, s32 *, 0x9714) = 0;
    M2C_FIELD(arg0, s32 *, 0x9718) = 0;
    M2C_FIELD(arg0, s32 *, 0x9910) = 0;
    M2C_FIELD(arg0, s32 *, 0x96E8) = 0;
    M2C_FIELD(arg0, s8 *, 0x9916)  = 0;
    M2C_FIELD(arg0, s32 *, 0x98D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x98D8) = -1;
    M2C_FIELD(arg0, s32 *, 0x98DC) = -1;
    M2C_FIELD(arg0, s8 *, 0x9917)  = 1;
    M2C_FIELD(arg0, s32 *, 0x9920) = -1;
    M2C_FIELD(arg0, s8 *, 0x9924)  = 0;
    return arg0;
}
