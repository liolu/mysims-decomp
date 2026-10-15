#include "engine.h"
#include "m2c.h"

void func_020038a0(M2C_UNK);
void func_02008c4c(M2C_UNK);

extern s32 data_020d8264;
extern s32 data_02106aa8;

void func_02005474(void) {
    if (data_020d8264 != -1) {
        func_02008c4c(data_020d8264);
    }
    func_020038a0(data_02106aa8);
    data_02106aa8 = 0;
}
