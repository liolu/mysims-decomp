#include "m2c.h"

s32 func_02007274(M2C_UNK);                         /* extern */
s32 func_02007358(M2C_UNK);                         /* extern */
M2C_UNK func_02007400(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007414(M2C_UNK, s32);                /* extern */
extern s32 data_02106dc4;

void func_020070dc(void) {
    if (data_02106dc4 != 0) {
        return;
    }
    data_02106dc4 = 1;
    func_02007400(0, func_02007274(0));
    func_02007414(0, func_02007358(0));
    func_02007414(2, 0);
    func_02007400(2, 0);
    func_02007400(3, func_02007274(3));
    func_02007414(3, func_02007358(3));
    func_02007400(4, func_02007274(4));
    func_02007414(4, func_02007358(4));
    func_02007400(5, func_02007274(5));
    func_02007414(5, func_02007358(5));
    func_02007400(6, func_02007274(6));
    func_02007414(6, func_02007358(6));
}
