#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_TGAMMAF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_TGAMMAF_H

TT(RN,          0x0p+0,             inf,          0x0p+0, DIVBYZERO)
TT(RN,         -0x0p+0,            -inf,          0x0p+0, DIVBYZERO)
TT(RN,          0x1p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x1p+0,             NAN,          0x0p+0, INVALID)
TT(RN,          0x1p+1,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x1p+1,             NAN,          0x0p+0, INVALID)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,             NAN,          0x0p+0, INVALID)
TT(RN,             NAN,             NAN,          0x0p+0, 0)

#endif