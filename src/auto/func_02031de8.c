#include "m2c.h"

M2C_UNK func_02031a5c(void *);                      /* extern */
M2C_UNK func_02031e84();                            /* extern */
M2C_UNK func_02031f08(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_02117a30;
extern M2C_UNK data_021180c0;

void func_02031de8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02031e84(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x168)(arg0);
    func_02031f08(&data_021180c0, arg0);
    if (M2C_FIELD(&data_02117a30, s32 *, 4) != 0) {
        func_02031f08(M2C_FIELD(&data_02117a30, s32 *, 4) + 0x4E0, arg0);
    }
    func_02031a5c(arg0);
}
