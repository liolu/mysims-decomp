#include "m2c.h"

M2C_UNK func_02002b88(s16);                         /* extern */
M2C_UNK func_02005a14(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02005be4(M2C_UNK);                     /* extern */
extern M2C_UNK func_02008354;

void func_02008274(void *arg0) {
    func_02005a14(4, &func_02008354);
    func_02002b88(M2C_FIELD(arg0, s16 *, 0x10));
    *(u16 *) 0x04000004 |= 0x20;
    func_02005be4(4);
}
