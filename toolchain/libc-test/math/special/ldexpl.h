#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LDEXPL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LDEXPL_H

TT(RN,                        0x0p+0L,  2147483647,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                        0x0p+0L, -2147483647,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x0p+0L,  2147483647,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                            NAN,           0,                            NAN,          0x0p+0, 0)
TT(RN,                            inf,           0,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,           0,                           -inf,          0x0p+0, 0)
TT(RN,                        0x1p+0L,           0,                        0x1p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,           1,                        0x1p+1L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,          -1,                        0x1p-1L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,  2147483647,                            inf,          0x0p+0, INEXACT|OVERFLOW)
TT(RN,                            NAN,           1,                            NAN,          0x0p+0, 0)
TT(RN,                            inf,  2147483647,                            inf,          0x0p+0, 0)
TT(RN,                            inf, -2147483647,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,  2147483647,                           -inf,          0x0p+0, 0)

#endif