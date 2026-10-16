/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200cbfc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/func_0200cbfc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02010ca0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0200cbd8();
extern int *data_02108afc[];
int func_0200cbfc(int a, int b, int c, int d) {
    func_02010ca0((int) data_02108afc[1], c, b, d, (int) func_0200cbd8, a, 1);
    return 6;
}
