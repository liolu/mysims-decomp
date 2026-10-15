#include "m2c.h"

M2C_UNK func_02039694(s32);                         /* extern */
M2C_UNK func_02040c50(s32);                         /* extern */
M2C_UNK func_02040c88(s32);                         /* extern */
M2C_UNK func_02040da4(s32);                         /* extern */
M2C_UNK func_02040df8(s32);                         /* extern */
M2C_UNK func_02040e1c(s32);                         /* extern */
M2C_UNK func_02048b18(s32);                         /* extern */
M2C_UNK func_0204b804(s32);                         /* extern */
M2C_UNK func_0205296c(s32);                         /* extern */
M2C_UNK func_02058b74(s32);                         /* extern */
M2C_UNK func_0206bb70(s32);                         /* extern */
M2C_UNK func_02081500(s32, M2C_UNK);                /* extern */
M2C_UNK func_02083a78(s32);                         /* extern */
M2C_UNK func_02096028(s32);                         /* extern */
M2C_UNK func_020ae130(s32);                         /* extern */

void func_02039d5c(s32 arg0, s32 arg1) {
    func_02083a78(arg0 + 0x380C);
    func_02039694(arg0);
    func_02040c50(arg0);
    func_02040c88(arg0);
    func_02040df8(arg0);
    func_02040da4(arg0);
    func_02040e1c(arg0);
    func_0206bb70(arg0 + 0x812C);
    if (arg1 != 0) {
        func_02058b74(arg0 + 0x273C);
        func_020ae130(arg0 + 0x3DC4);
        func_0205296c(arg0 + 0x27C0);
        func_0204b804(arg0 + 0x244C);
        func_02048b18(arg0 + 0x244C);
        func_02096028(arg0 + 0x3CFC);
    }
    func_02081500(arg0 + 0x380C, 1);
}
