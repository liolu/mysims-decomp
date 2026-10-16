#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200e908(void);
void func_0200efc8(M2C_UNK);
void func_0200f224(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02108bcc;

s32 func_0200eb38(s32 arg0, s32 arg1) {
    if (func_0200e908() == 0) {
        return 1;
    }
    M2C_FIELD(&data_02108bcc, volatile s32 *, 4) = 0;
    func_0200efc8(0x03006000);
    do {

    } while (M2C_FIELD(&data_02108bcc, volatile s32 *, 4) == 0);
    M2C_FIELD(&data_02108bcc, volatile s32 *, 4) = 0;
    M2C_FIELD(&data_02108bcc, volatile s32 *, 8) = 0;
    func_0200f224(0, 2, 0, 1);
    func_0200efc8((u8) arg0 | 0x02006100);
    func_0200efc8(0x01010000 | (u16) arg1);
    return 0;
}
