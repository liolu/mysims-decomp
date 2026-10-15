#include "m2c.h"

M2C_UNK func_0206339c(s32);                         /* extern */
extern M2C_UNK data_020fc938;

void *func_0208694c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fc938;
    func_0206339c(arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0x1000;
    M2C_FIELD(arg0, s8 *, 0x2C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s8 *, 0xAC)  = 0;
    M2C_FIELD(arg0, s8 *, 0xAD)  = 0;
    return arg0;
}
