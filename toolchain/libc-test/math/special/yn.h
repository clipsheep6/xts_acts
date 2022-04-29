#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_YN_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_YN_H

TT(RN,                  0x0p+0,           0,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x0p+0,           0,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x1p+0,           0,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,           0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                    -inf,           0,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,           0,                     NAN,          0x0p+0, 0)
TT(RN,                  0x0p+0,           1,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x0p+0,           1,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x1p+0,           1,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,           1,                  0x0p+0,          0x0p+0, 0)
TT(RN,                    -inf,           1,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,           1,                     NAN,          0x0p+0, 0)
TT(RN,                  0x0p+0,          -1,                     inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x0p+0,          -1,                     inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x1p+0,          -1,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,          -1,                  0x0p+0,          0x0p+0, 0)
TT(RN,                    -inf,          -1,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,          -1,                     NAN,          0x0p+0, 0)
TT(RN,                  0x0p+0,           2,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x0p+0,           2,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x1p+0,           2,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,           2,                  0x0p+0,          0x0p+0, 0)
TT(RN,                    -inf,           2,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,           2,                     NAN,          0x0p+0, 0)

#endif