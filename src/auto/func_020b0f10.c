#include "m2c.h"

M2C_UNK func_020421b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02061c1c();                            /* extern */
M2C_UNK func_02061e90(void *);                      /* extern */
M2C_UNK func_020b1a0c(void *);                      /* extern */
M2C_UNK func_020b1ef8(void *);                      /* extern */
M2C_UNK func_020b46a4(void *);                      /* extern */
M2C_UNK func_020b4e74(void *);                      /* extern */
s32 func_020b83b0();                                /* extern */
M2C_UNK func_020b9d54(void *);                      /* extern */
extern void *data_02118998;

void func_020b0f10(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* switch 1 */
        case 3:                                         /* switch 1 */
            break;
        default:                                        /* switch 1 */
            break;
        case 0:                                         /* switch 1 */
            M2C_FIELD(arg0, u16 *, 4) = (u16) (temp_r1 + 1);
            break;
        case 1:                                         /* switch 1 */
            if (func_020b83b0() == 0) {
                func_020b1a0c(arg0);
            }
            break;
        case 2:                                         /* switch 1 */
            func_02061c1c(arg0);
            temp_r0 = M2C_FIELD(arg0, u16 *, 6);
            switch (temp_r0) {                          /* switch 2 */
                default:                                    /* switch 2 */
                    break;
                case 0:                                     /* switch 2 */
                    func_020b1ef8(arg0);
                    func_02061e90(arg0);
                    break;
                case 1:                                     /* switch 2 */
                    func_020b46a4(arg0);
                    break;
                case 2:                                     /* switch 2 */
                    func_020b4e74(arg0);
                    break;
                case 3:                                     /* switch 2 */
                    M2C_FIELD(arg0, u16 *, 4) = 3U;
                    break;
            }
            break;
    }
    if ((data_02118998 != NULL) && (M2C_FIELD(data_02118998, u8 *, 0x9924) != 0)) {
        func_020b9d54(arg0);
        func_020421b8(data_02118998, 0);
    }
}
