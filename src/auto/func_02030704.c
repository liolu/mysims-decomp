#include "engine.h"
#include "m2c.h"

void func_02022800(M2C_UNK, M2C_UNK);
M2C_UNK func_02022878(M2C_UNK, M2C_UNK);
M2C_UNK func_02023138(M2C_UNK, M2C_UNK);
void func_02023188(M2C_UNK, M2C_UNK);
void func_02030594(M2C_UNK);
M2C_UNK func_0203081c(M2C_UNK);
void func_02030858(void);

void func_02030704(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        func_02030594(arg0);
        return;
    }
    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC)) {
        do {
            temp_r0 = func_02022878(arg0 + 4, 0);
            var_r8  = func_02022878(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r8, M2C_UNK(**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r8 + 0x20, M2C_FIELD(var_r8, s32 *, 8), M2C_FIELD(var_r8, s32 *, 0x10),
                                M2C_FIELD(var_r8, s32 *, 0x14));
                        var_r7 = 1;
                    }
                    var_r8 = func_02022878(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            func_02022800(arg0 + 4, temp_r0);
        } while (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC));
    }
    func_02023188(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (var_r7 != 0) {
        func_02030858();
    }
    func_02023138(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC));
    func_0203081c(arg0);
}
