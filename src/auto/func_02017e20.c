#include "m2c.h"

M2C_UNK func_02006430(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020067e4(void *);                      /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
M2C_UNK func_02017eac(M2C_UNK *);                   /* extern */
extern void *data_0210fd68;
extern M2C_UNK data_0210fd6c;
extern M2C_UNK data_02110190;
extern M2C_UNK func_02017ec0;

void func_02017e20(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200856c();
    if (data_0210fd68 == NULL) {
        data_0210fd68 = arg0;
        func_02017eac(arg0 + 0xC4);
        func_02017eac(&data_0210fd6c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02006430(arg0, &func_02017ec0, arg0, &data_02110190, 0x400, 0x14);
        func_020067e4(arg0);
    }
    func_02008580(temp_r4);
}
