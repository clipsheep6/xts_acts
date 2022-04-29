#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_FREXPL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_FREXPL_H

TT(RN,                        0x0p+0L,                        0x0p+0L,          0x0p+0,           0, 0)
TT(RN,                       -0x0p+0L,                       -0x0p+0L,          0x0p+0,           0, 0)
TT(RN,                        0x1p-1L,                        0x1p-1L,          0x0p+0,           0, 0)
TT(RN,                       -0x1p-1L,                       -0x1p-1L,          0x0p+0,           0, 0)
TT(RN,                        0x1p+0L,                        0x1p-1L,          0x0p+0,           1, 0)
TT(RN,                       -0x1p+0L,                       -0x1p-1L,          0x0p+0,           1, 0)
TT(RN,                        0x1p+1L,                        0x1p-1L,          0x0p+0,           2, 0)
TT(RN,                       -0x1p+1L,                       -0x1p-1L,          0x0p+0,           2, 0)
// TODO: exp is unspecified
TT(RN,                            inf,                            inf,          0x0p+0,           0, 0)
TT(RN,                           -inf,                           -inf,          0x0p+0,           0, 0)
TT(RN,                            NAN,                            NAN,          0x0p+0,           0, 0)

#endif