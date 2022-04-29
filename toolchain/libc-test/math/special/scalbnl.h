#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SCALBNL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SCALBNL_H

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
TT(RN,                    0x1p+16383L,      -32828,                    0x1p-16445L,          0x0p+0, 0)
TT(RN,                    0x1p-16445L,       32828,                    0x1p+16383L,          0x0p+0, 0)
TT(RN,            0x1.00000000001p+0L,      -16445,                    0x1p-16445L,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,       0x1.7ffffffffffffffep-1L,      -16444,                    0x1p-16445L,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,       0x1.0000000000000016p-1L,      -16384,    0x1.000000000000001p-16385L,          0x0p+0, INEXACT|UNDERFLOW)

#endif