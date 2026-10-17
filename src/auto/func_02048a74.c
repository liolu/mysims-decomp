#include "m2c.h"

M2C_UNK func_0202222c(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *)); /* extern */
M2C_UNK func_02038530(void *);                      /* extern */
M2C_UNK func_02047e90();                            /* extern */
M2C_UNK func_02047fcc(void *);                      /* extern */
M2C_UNK func_020480c0(void *);                      /* extern */
M2C_UNK func_0204b804(void *);                      /* extern */
M2C_UNK func_0206054c(void *);                      /* extern */
extern M2C_UNK data_020d9568;

void *func_02048a74(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020d9568;
    func_02047e90();
    func_02047fcc(arg0);
    func_020480c0(arg0);
    temp_r0 = M2C_FIELD(arg0, void ***, 0x2E8);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x2E8) = NULL;
    }
    func_0204b804(arg0);
    func_02038530(arg0 + 0x2A8);
    func_0206054c(arg0 + 0x29C);
    func_0202222c(arg0 + 0x118, 0x1C, 0xC, func_0206054c);
    return arg0;
}
