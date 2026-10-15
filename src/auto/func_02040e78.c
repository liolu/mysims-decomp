#include "m2c.h"

M2C_UNK func_02056d7c(void *);                      /* extern */
M2C_UNK func_02056e1c(void *);                      /* extern */
M2C_UNK func_020585dc(void *);                      /* extern */
M2C_UNK func_0206227c(s32);                         /* extern */

void func_02040e78(void *arg0) {
    func_0206227c(M2C_FIELD(arg0, s32 *, 0x3808));
    func_02056d7c(arg0 + 0x273C);
    func_02056e1c(arg0 + 0x273C);
    func_020585dc(arg0 + 0x273C);
}
