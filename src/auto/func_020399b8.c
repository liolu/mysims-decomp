#include "m2c.h"

M2C_UNK func_0203965c();                            /* extern */
M2C_UNK func_02040e78(void *);                      /* extern */
M2C_UNK func_02041710(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02041768(void *);                      /* extern */
M2C_UNK func_02042624(void *, M2C_UNK);             /* extern */
M2C_UNK func_02048af8(void *);                      /* extern */
M2C_UNK func_0204b610(void *, u16, u16);            /* extern */
M2C_UNK func_0206ba80(void *, s32, void *, void *, void *, void *, void *, void *, void *, void *); /* extern */
M2C_UNK func_0208121c(void *);                      /* extern */
M2C_UNK func_02081f78(void *);                      /* extern */
M2C_UNK func_02083a78(void *);                      /* extern */
M2C_UNK func_02095d28(void *);                      /* extern */
M2C_UNK func_020addbc(void *, void *, M2C_UNK);     /* extern */
extern void *data_02118994;

void func_020399b8(void *arg0, s32 arg1) {
    void *temp_r6;

    func_0203965c(arg0);
    temp_r6                        = data_02118994 + 0x138;
    M2C_FIELD(arg0, s32 *, 0x971C) = (s32) M2C_FIELD(data_02118994, u16 *, 0x138);
    M2C_FIELD(arg0, u16 *, 0x9720) = (u16) M2C_FIELD(temp_r6, u16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x9722) = (s16) M2C_FIELD(temp_r6, s32 *, 4);
    func_0206ba80(arg0 + 0x812C, M2C_FIELD(arg0, s32 *, 0x9910), arg0 + 0x188, arg0 + 0x26C, arg0 + 0xE8, arg0 + 0x110,
                  arg0 + 0x294, arg0 + 0x378, arg0 + 0x138, arg0 + 0x160);
    func_02041768(arg0);
    func_02042624(arg0, 0);
    if (arg1 != 0) {
        func_02048af8(arg0 + 0x244C);
        func_02041710(arg0, 0x10, 2);
        func_02095d28(arg0 + 0x3CFC);
        func_020addbc(arg0 + 0x3DC4, arg0 + 0x40C, 1);
        func_0204b610(arg0 + 0x244C, M2C_FIELD(data_02118994, u16 *, 0x178), M2C_FIELD(data_02118994, u16 *, 0x17A));
        func_02040e78(arg0);
    }
    func_0208121c(arg0 + 0x380C);
    M2C_FIELD(arg0, s32 *, 0x3844) = 0;
    func_02083a78(arg0 + 0x380C);
    func_02081f78(arg0 + 0x380C);
}
