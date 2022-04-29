#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LGAMMA_R_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LGAMMA_R_H

TT(RN,                  0x0p+0,                     inf,          0x0p+0,           1, DIVBYZERO)
TT(RN,                 -0x0p+0,                     inf,          0x0p+0,          -1, DIVBYZERO)
TT(RN,                  0x1p+0,                  0x0p+0,          0x0p+0,           1, 0)
TT(RN,                 -0x1p+0,                     inf,          0x0p+0,           1, DIVBYZERO)
TT(RN,                  0x1p+1,                  0x0p+0,          0x0p+0,           1, 0)
TT(RN,                 -0x1p+1,                     inf,          0x0p+0,           1, DIVBYZERO)
TT(RN,                     inf,                     inf,          0x0p+0,           1, 0)
TT(RN,                    -inf,                     inf,          0x0p+0,          -1, 0)
TT(RN,                     NAN,                     NAN,          0x0p+0,           1, 0)

#endif