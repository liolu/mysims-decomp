#include "engine.h"
#include "m2c.h"

void func_01ff81b4(void);
M2C_UNK func_02005bb8(M2C_UNK);
void func_02005c44(M2C_UNK);
M2C_UNK func_02005fa8(void);
void func_0200868c(M2C_UNK);
void func_02008968(void);
void func_02008cb4(M2C_UNK);
void func_02010058(M2C_UNK);

void func_020086b8(s32 arg0) {
    if (*(u16 *) 0x027FFC40 == 2) {
        func_02008968();
    }
    func_02010058((s32) (u16) func_02005fa8());
    func_02008cb4(0);
    func_02008cb4(1);
    func_02008cb4(2);
    func_02008cb4(3);
    func_02005bb8(0x40000);
    func_02005c44(-1);
    *(s32 *) 0x027FFC20 = arg0;
    func_0200868c(0x10);
    func_01ff81b4();
}
