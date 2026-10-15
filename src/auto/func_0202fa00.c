#include "m2c.h"

M2C_UNK func_02022800(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0202ec14(s32);                         /* extern */
extern M2C_UNK data_02117328;

void func_0202fa00(void *arg0) {
    func_0202ec14(M2C_FIELD(arg0, s32 *, 0x40));
    func_02022800(&data_02117328, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
