#include "engine.h"
#include "m2c.h"

void func_02006220(void);
void func_0200654c(M2C_UNK, M2C_UNK);
void func_020065a8(void);
void func_02006700(M2C_UNK);
void func_02006850(M2C_UNK, M2C_UNK);
void func_02006a00(void);
void func_02006a34(void);
void func_02006a70(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0200856c(void);
void func_02008580(M2C_UNK);

extern M2C_UNK data_02106b48;

void func_02006660(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = func_0200856c();
    if (arg0 == M2C_FIELD(&data_02106b48, s32 *, 0x28)) {
        func_0200654c(arg0, arg1);
    }
    func_02006700(arg0);
    var_r2 = M2C_FIELD(&data_02106b48, s32 *, 0x1C);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x94) - 4;
    }
    func_02006a70(arg0, (s32) func_020065a8, var_r2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02006a00();
    func_02006850(arg0, arg2);
    func_02006a34();
    func_02006220();
    func_02008580(temp_r4);
}
