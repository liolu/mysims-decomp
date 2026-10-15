#include "m2c.h"

M2C_UNK func_02035578(M2C_UNK *, u16);              /* extern */
extern M2C_UNK data_021188a8;
extern M2C_UNK data_021188ae;

void func_020354fc(void) {
    func_02035578(&data_021188ae, (u16) (((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF));
    M2C_FIELD(&data_021188a8, u16 *, 0) = (u16) M2C_FIELD(&data_021188a8, u16 *, 6);
    M2C_FIELD(&data_021188a8, u16 *, 4) = (u16) M2C_FIELD(&data_021188a8, u16 *, 8);
    M2C_FIELD(&data_021188a8, u16 *, 2) = (u16) M2C_FIELD(&data_021188a8, u16 *, 0xA);
}
