#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200724c(M2C_UNK);
M2C_UNK func_02007260(M2C_UNK);
void func_02007414(M2C_UNK, M2C_UNK);
M2C_UNK func_02007684(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200772c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02106a40;

void func_02000de0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r6;
    void *temp_r4;

    temp_r4 = (M2C_UNK *) ((s8 *) &data_02106a40 + (arg0 * 8));
    temp_r1 = M2C_FIELD(temp_r4, volatile s32 *, 4);
    if (temp_r1 & 0x80000000) {
        return;
    }
    M2C_FIELD(temp_r4, volatile s32 *, 4) = (s32) (temp_r1 | 0x40000000);
    temp_r6                               = func_02007260(arg0);
    temp_r0                               = func_0200724c(arg0);
    temp_r0_2                             = func_02007684(arg0, temp_r6, temp_r0, 1);
    func_02007414(arg0, temp_r0_2);
    M2C_FIELD(temp_r4, volatile s32 *, 0) = func_0200772c(arg0, temp_r0_2, temp_r0);
    M2C_FIELD(temp_r4, volatile s32 *, 4) = (s32) ((M2C_FIELD(temp_r4, volatile s32 *, 4) | 0x80000000) & ~0x40000000);
}
