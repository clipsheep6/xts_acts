#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LRINT_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LRINT_H

TT(RN,                  0x0p+0,           0, 0)
TT(RN,                 -0x0p+0,           0, 0)
TT(RN,                  0x1p-1,           0, INEXACT)
TT(RN,                 -0x1p-1,           0, INEXACT)
TT(RN,                  0x1p+0,           1, 0)
TT(RN,                 -0x1p+0,          -1, 0)
TT(RN,             0x1.0001p+0,           1, INEXACT)
TT(RN,            -0x1.0001p+0,          -1, INEXACT)
TT(RN,             0x1.ffffp-1,           1, INEXACT)
TT(RN,            -0x1.ffffp-1,          -1, INEXACT)
TT(RN,                0x1p-100,           0, INEXACT)
TT(RN,               -0x1p-100,           0, INEXACT)
#if INVALID
TT(RN,                     NAN,           0, INVALID)
TT(RN,                     inf,           0, INVALID)
TT(RN,                    -inf,           0, INVALID)
TT(RN,                0x1p+100,           0, INVALID)
TT(RN,               -0x1p+100,           0, INVALID)
#endif

#endif