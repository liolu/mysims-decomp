#include "engine.h"
#include "m2c.h"

void func_02024e74(M2C_UNK);
void func_02025d08(M2C_UNK);
void func_02025d18(void);
void func_02025d2c(M2C_UNK);
M2C_UNK func_02025d3c(void);

extern M2C_UNK data_021106f4;

void func_0202520c(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(M2C_FIELD(&data_021106f4, void **, 8), s32 *, 0x80) != 0) {
        temp_r4 = func_02025d3c();
        func_02025d08(1);
        func_02025d2c(M2C_FIELD(M2C_FIELD(&data_021106f4, void **, 8), s32 *, 0x80));
        func_02024e74(arg0);
        func_02025d08(0);
        func_02025d2c(temp_r4);
        func_02025d18();
        return;
    }
    func_02024e74(arg0);
}
