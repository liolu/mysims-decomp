/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02020a14 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02020a14(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
asm void func_0202098c(register void* c);
// clang-format on
int func_02020a14(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_0202098c(&buffer[i]);
    }

    return 0;
}
