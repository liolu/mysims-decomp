#include "m2c.h"

s32 func_02017810();                                /* extern */
s32 func_02017828();                                /* extern */

s32 func_020177e8(void) {
    if ((func_02017828() != 0) && (func_02017810() == 0)) {
        return 1;
    }
    return 0;
}
