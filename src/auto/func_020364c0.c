#include "m2c.h"

M2C_UNK func_02004344();                   /* extern */
M2C_UNK func_0200437c();                   /* extern */
M2C_UNK func_0202a4e4();                            /* extern */
M2C_UNK func_02063eb8();                         /* extern */
extern M2C_UNK data_021116c0;
extern M2C_UNK data_02111704;

void func_020364c0(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_0202a4e4();
            return;
        case 1:
            func_02063eb8(arg0 + 0x44);
        /* fallthrough */
        case 2:
            *(s32 *) 0x04000440 = 0;
            func_02004344(&data_021116c0);
            func_0200437c(&data_02111704);
            *(M2C_UNK *) 0x04000440 = 2;
            return;
    }
}
