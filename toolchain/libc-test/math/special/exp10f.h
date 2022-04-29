#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP10F_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP10F_H

TT(RN,          0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,          0x1p+0,        0x1.4p+3,          0x0p+0, 0)
TT(RN,         -0x1p+0,   0x1.99999ap-4,   0x1.99999ap-3, INEXACT)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,          0x0p+0,          0x0p+0, 0)
TT(RN,             NAN,             NAN,          0x0p+0, 0)

#endif