#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_0202f6b8(void *);                      /* extern */
M2C_UNK func_02031d50(void *);                      /* extern */
extern M2C_UNK data_02117a30;
extern M2C_UNK data_021180a8;

void func_02032034(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_02006da0(&data_021180a8);
    if (M2C_FIELD(&data_02117a30, s32 *, 4) != 0) {
        func_02006da0(M2C_FIELD(&data_02117a30, s32 *, 4) + 0x4C8);
    }
    func_02031d50(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_0202f6b8(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02006e24(&data_021180a8);
    if (M2C_FIELD(&data_02117a30, s32 *, 4) == 0) {
        return;
    }
    func_02006e24(M2C_FIELD(&data_02117a30, s32 *, 4) + 0x4C8);
}
