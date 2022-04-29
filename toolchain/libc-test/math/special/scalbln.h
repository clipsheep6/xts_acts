#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SCALBLN_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SCALBLN_H

TT(RN,                  0x0p+0,  2147483647,                  0x0p+0,          0x0p+0, 0)
TT(RN,                  0x0p+0, -2147483647,                  0x0p+0,          0x0p+0, 0)
TT(RN,                 -0x0p+0,  2147483647,                 -0x0p+0,          0x0p+0, 0)
TT(RN,                     NAN,           0,                     NAN,          0x0p+0, 0)
TT(RN,                     inf,           0,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,           0,                    -inf,          0x0p+0, 0)
TT(RN,                  0x1p+0,           0,                  0x1p+0,          0x0p+0, 0)
TT(RN,                  0x1p+0,           1,                  0x1p+1,          0x0p+0, 0)
TT(RN,                  0x1p+0,          -1,                  0x1p-1,          0x0p+0, 0)
TT(RN,                  0x1p+0,  2147483647,                     inf,          0x0p+0, INEXACT|OVERFLOW)
TT(RN,                     NAN,           1,                     NAN,          0x0p+0, 0)
TT(RN,                     inf,  2147483647,                     inf,          0x0p+0, 0)
TT(RN,                     inf, -2147483647,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,  2147483647,                    -inf,          0x0p+0, 0)
TT(RN,               0x1p+1023,       -2097,               0x1p-1074,          0x0p+0, 0)
TT(RN,               0x1p-1074,        2097,               0x1p+1023,          0x0p+0, 0)
TT(RN,              0x1.001p+0,       -1074,               0x1p-1074,          0x0p+0, INEXACT|UNDERFLOW)

#endif