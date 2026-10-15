#include "m2c.h"

M2C_UNK func_0202a618(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_021116b8;
extern s32 data_021116bc;
extern s32 data_02111704;
extern s32 data_02111734;

void func_02027968(void) {
    s32 sp0;

    func_0202a618(0x1610, &data_021116bc, 0x11);
    func_0202a618(0x19, &data_02111704, 0xC);
    sp0 = 2;
    func_0202a618(0x10, &sp0, 1);
    func_0202a618(0x15, &data_02111734, 0x20);
    M2C_FIELD(&data_021116b8, s32 *, 0xFC) = (s32) ((M2C_FIELD(&data_021116b8, s32 *, 0xFC) & ~1) | 2);
}
