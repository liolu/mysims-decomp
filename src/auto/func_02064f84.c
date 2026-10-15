#include "m2c.h"

M2C_UNK func_020650d0();                            /* extern */
M2C_UNK func_02065354();                            /* extern */
M2C_UNK func_02065988();                            /* extern */
M2C_UNK func_02065e84();                            /* extern */
M2C_UNK func_02066058();                            /* extern */
M2C_UNK func_02066370();                            /* extern */
M2C_UNK func_02066b08();                            /* extern */
M2C_UNK func_020673ec();                            /* extern */
M2C_UNK func_02067ca0();                            /* extern */
M2C_UNK func_02067fb0();                            /* extern */
M2C_UNK func_020681bc();                            /* extern */

void func_02064f84(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x150);
    switch (temp_r1) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 1:
            func_020650d0(arg0);
            break;
        case 2:
            func_02065354(arg0);
            if (M2C_FIELD(arg0, u8 *, 0x38D) != 0) {
                M2C_FIELD(arg0, s32 *, 0x194) = 0x40;
            }
            break;
        case 3:
            func_02065988(arg0);
            break;
        case 4:
            func_02065e84(arg0);
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 5:
        case 12:
            func_02066058(arg0);
            break;
        case 6:
            func_02066370(arg0);
            break;
        case 7:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 8:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 9:
            func_02066b08(arg0);
            break;
        case 10:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 11:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 13:
            func_020673ec(arg0);
            break;
        case 14:
            M2C_FIELD(arg0, s32 *, 0x194) = 0;
            M2C_FIELD(arg0, s32 *, 0x198) = 0;
            break;
        case 16:
            func_02067ca0(arg0);
            break;
        case 17:
            func_02067fb0(arg0);
            break;
        case 18:
            func_020681bc(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x13C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x15D)   = 1;
}
