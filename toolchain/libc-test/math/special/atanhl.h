#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ATANHL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ATANHL_H

TT(RN,                            NAN,                            NAN,          0x0p+0, 0)
TT(RN,                            inf,                            NAN,          0x0p+0, INVALID)
TT(RN,                           -inf,                            NAN,          0x0p+0, INVALID)
TT(RN,                        0x0p+0L,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x0p+0L,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,                            inf,          0x0p+0, DIVBYZERO)
TT(RN,                       -0x1p+0L,                           -inf,          0x0p+0, DIVBYZERO)
TT(RN,                   0x1.0001p+0L,                            NAN,          0x0p+0, INVALID)
TT(RN,                  -0x1.0001p+0L,                            NAN,          0x0p+0, INVALID)
TT(RN,                       0x1p-66L,                       0x1p-66L,          0x0p+0, INEXACT)
TT(RN,                    0x1p-16000L,                    0x1p-16000L,          0x0p+0, INEXACT)
TT(RN,                    0x1p-16384L,                    0x1p-16384L,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,                   -0x1p-16384L,                   -0x1p-16384L,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,                    0x1p+16383L,                            NAN,          0x0p+0, INVALID)

#endif