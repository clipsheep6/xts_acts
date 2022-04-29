#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LOGB_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LOGB_H

TT(RN,                  0x0p+0,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,                 -0x0p+0,                    -inf,          0x0p+0, DIVBYZERO)
TT(RN,               -0x1p-100,               -0x1.9p+6,          0x0p+0, 0)
TT(RN,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                 -0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                     inf,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,                     inf,          0x0p+0, 0)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)

#endif