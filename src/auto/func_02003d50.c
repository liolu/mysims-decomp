#include "m2c.h"

M2C_UNK func_02003cfc(u16);                         /* extern */
extern M2C_UNK data_02106a8c;

void func_02003d50(void) {
    func_02003cfc(M2C_FIELD(&data_02106a8c, u16 *, 2));
}
