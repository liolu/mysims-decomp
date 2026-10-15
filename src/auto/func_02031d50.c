#include "m2c.h"

M2C_UNK func_02006da0(M2C_UNK *);                   /* extern */
M2C_UNK func_02006e24(M2C_UNK *);                   /* extern */
M2C_UNK func_0202f8d4(void *);                      /* extern */
M2C_UNK func_02031de8(void *);                      /* extern */
extern M2C_UNK data_02117a30;
extern M2C_UNK data_021180a8;

void func_02031d50(void *arg0) {
    func_02006da0(&data_021180a8);
    if (M2C_FIELD(&data_02117a30, s32 *, 4) != 0) {
        func_02006da0(M2C_FIELD(&data_02117a30, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_0202f8d4(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x170)(arg0);
    }
    func_02031de8(arg0);
    func_02006e24(&data_021180a8);
    if (M2C_FIELD(&data_02117a30, s32 *, 4) == 0) {
        return;
    }
    func_02006e24(M2C_FIELD(&data_02117a30, s32 *, 4) + 0x4C8);
}
