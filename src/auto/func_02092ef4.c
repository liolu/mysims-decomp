#include "m2c.h"

void func_02092ef4(void *arg0) {
    s32 var_ip;
    s32 var_ip_2;
    s32 var_ip_3;
    s32 var_ip_4;
    s32 var_ip_5;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r1_3;
    u8 temp_r1_4;
    u8 temp_r1_5;
    void *var_lr;
    void *var_lr_2;
    void *var_lr_3;
    void *var_lr_4;
    void *var_lr_5;

    var_ip = 0;
    var_lr = arg0;
    do {
        temp_r1 = M2C_FIELD((arg0 + var_ip), u8 *, 0x3AAD);
        var_ip += 1;
        if (temp_r1 != 0) {
            M2C_FIELD(var_lr, s8 *, 0x29D8) = 1;
            M2C_FIELD(var_lr, s8 *, 0x29D9) = 1;
        } else {
            M2C_FIELD(var_lr, s8 *, 0x29D8) = 0;
            M2C_FIELD(var_lr, s8 *, 0x29D9) = 0;
        }
        var_lr += 0xC0;
    } while (var_ip < 3);
    var_ip_2 = 0;
    var_lr_2 = arg0;
    do {
        temp_r1_2 = M2C_FIELD((arg0 + var_ip_2), u8 *, 0x3AB0);
        var_ip_2 += 1;
        if (temp_r1_2 != 0) {
            M2C_FIELD(var_lr_2, s8 *, 0x2C18) = 1;
            M2C_FIELD(var_lr_2, s8 *, 0x2C19) = 1;
        } else {
            M2C_FIELD(var_lr_2, s8 *, 0x2C18) = 0;
            M2C_FIELD(var_lr_2, s8 *, 0x2C19) = 0;
        }
        var_lr_2 += 0xC0;
    } while (var_ip_2 < 3);
    var_ip_3 = 0;
    var_lr_3 = arg0;
    do {
        temp_r1_3 = M2C_FIELD((arg0 + var_ip_3), u8 *, 0x3AB3);
        var_ip_3 += 1;
        if (temp_r1_3 != 0) {
            M2C_FIELD(var_lr_3, s8 *, 0x2E58) = 1;
            M2C_FIELD(var_lr_3, s8 *, 0x2E59) = 1;
        } else {
            M2C_FIELD(var_lr_3, s8 *, 0x2E58) = 0;
            M2C_FIELD(var_lr_3, s8 *, 0x2E59) = 0;
        }
        var_lr_3 += 0xC0;
    } while (var_ip_3 < 3);
    var_ip_4 = 0;
    var_lr_4 = arg0;
    do {
        temp_r1_4 = M2C_FIELD((arg0 + var_ip_4), u8 *, 0x3AB6);
        var_ip_4 += 1;
        if (temp_r1_4 != 0) {
            M2C_FIELD(var_lr_4, s8 *, 0x32D8) = 1;
            M2C_FIELD(var_lr_4, s8 *, 0x32D9) = 1;
        } else {
            M2C_FIELD(var_lr_4, s8 *, 0x32D8) = 0;
            M2C_FIELD(var_lr_4, s8 *, 0x32D9) = 0;
        }
        var_lr_4 += 0xC0;
    } while (var_ip_4 < 3);
    var_ip_5 = 0;
    var_lr_5 = arg0;
    do {
        temp_r1_5 = M2C_FIELD((arg0 + var_ip_5), u8 *, 0x3ABF);
        var_ip_5 += 1;
        if (temp_r1_5 != 0) {
            M2C_FIELD(var_lr_5, s8 *, 0x3518) = 1;
            M2C_FIELD(var_lr_5, s8 *, 0x3519) = 1;
        } else {
            M2C_FIELD(var_lr_5, s8 *, 0x3518) = 0;
            M2C_FIELD(var_lr_5, s8 *, 0x3519) = 0;
        }
        var_lr_5 += 0xC0;
    } while (var_ip_5 < 2);
}
