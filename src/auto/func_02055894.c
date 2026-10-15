#include "m2c.h"

M2C_UNK func_02038b3c(void *);                      /* extern */
M2C_UNK func_02038f48(void *);                      /* extern */
M2C_UNK func_02054dfc();                            /* extern */
M2C_UNK func_02054e38(void *, M2C_UNK);             /* extern */
M2C_UNK func_020559cc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02055b70(void *);                      /* extern */
M2C_UNK func_02055bf0(void *);                      /* extern */

s32 func_02055894(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x105) == 0) {
        return;
    }
    func_02054dfc();
    func_02054e38(arg0, 0);
    func_02054e38(arg0, 1);
    func_020559cc(arg0, 1);
    func_020559cc(arg0, 0);
    func_02055b70(arg0);
    func_02055bf0(arg0);
    func_02038f48(arg0 + 0x144);
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    func_02038b3c(arg0 + 0xBC);
    M2C_FIELD(arg0, s8 *, 0x104)        = 0;
    M2C_FIELD(arg0, s8 *, 0x108)        = 0;
    return M2C_FIELD(arg0, u8 *, 0x105) = 0U;
}
