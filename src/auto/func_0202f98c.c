#include "m2c.h"

M2C_UNK func_02009ef0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0200a4c0(M2C_UNK);                     /* extern */
M2C_UNK func_0200a67c(s32);                         /* extern */
s32 func_0200a6e8();                                /* extern */
M2C_UNK func_0200f44c(void *);                      /* extern */
M2C_UNK func_0200f464(void *);                      /* extern */
M2C_UNK func_0202fa00(void *);                      /* extern */

void func_0202f98c(void *arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_02009ef0(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0200f44c(arg0 + 8);
        func_0200f464(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_0200a6e8();
        func_0200a4c0(1);
        func_0200a67c(temp_r5);
    }
    func_0202fa00(arg0);
}
