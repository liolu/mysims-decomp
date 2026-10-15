#include "m2c.h"

M2C_UNK func_020082b4();                            /* extern */
s32 func_0200856c();                                /* extern */
M2C_UNK func_02008580(s32);                         /* extern */
extern M2C_UNK data_02106e9c;

void func_020082fc(void) {
    s32 temp_r5;
    void *temp_r0;
    void *var_r6;

    temp_r5 = func_0200856c();
    if (M2C_FIELD(&data_02106e9c, void **, 0xC) != NULL) {
        var_r6 = M2C_FIELD(M2C_FIELD(&data_02106e9c, void **, 0xC), void **, 0x18);
    } else {
        var_r6 = NULL;
    }
    if (M2C_FIELD(&data_02106e9c, void **, 0xC) != NULL) {
        do {
            func_020082b4();
            temp_r0 = var_r6;
            if (var_r6 != NULL) {
                var_r6 = M2C_FIELD(var_r6, void **, 0x18);
            } else {
                var_r6 = NULL;
            }
        } while (temp_r0 != NULL);
    }
    func_02008580(temp_r5);
}
