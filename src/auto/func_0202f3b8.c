#include "m2c.h"

M2C_UNK func_0202279c();   /* extern */
void *func_02022860();            /* extern */
extern M2C_UNK data_02116a58;

void func_0202f3b8(void *arg0) {
    void *var_r1;

    var_r1 = func_02022860(&data_02116a58, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_02022860(&data_02116a58);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0202279c(&data_02116a58, var_r1, arg0);
}
