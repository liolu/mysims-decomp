#include "m2c.h"

M2C_UNK func_02035450(void *, void *);              /* extern */

void func_020a859c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F98)   = 0x05000600;
    M2C_FIELD(arg0, void **, 0x1F9C) = (void *) (arg0 + 0x1EC8);
    M2C_FIELD(arg0, s32 *, 0x1FA0)   = 0x60;
    func_02035450(arg0 + 0xC, arg0 + 0x1F88);
}
