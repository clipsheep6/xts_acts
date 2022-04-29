#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_Y0F_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_Y0F_H

TT(RN,          0x0p+0,            -inf,          0x0p+0, DIVBYZERO)
TT(RN,         -0x0p+0,            -inf,          0x0p+0, DIVBYZERO)
TT(RN,         -0x1p+0,             NAN,          0x0p+0, INVALID)
TT(RN,             inf,          0x0p+0,          0x0p+0, 0)
TT(RN,            -inf,             NAN,          0x0p+0, INVALID)
TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,   0x1.0c4a3ap+0,   0x1.ff138ep-4,  -0x1.71585ap-3, INEXACT)
TT(RN,   0x1.8ae5d4p-1,  -0x1.d88a5ap-4,  -0x1.4d601ap-4, INEXACT)
TT(RN,   0x1.fa9536p+1, -0x1.da2946p-25,  -0x1.88a2bcp-2, INEXACT)

#endif