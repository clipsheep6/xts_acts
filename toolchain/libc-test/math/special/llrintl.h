#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LLRINTL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LLRINTL_H

TT(RN,                        0x0p+0L,           0, 0)
TT(RN,                       -0x0p+0L,           0, 0)
TT(RN,                        0x1p-1L,           0, INEXACT)
TT(RN,                       -0x1p-1L,           0, INEXACT)
TT(RN,                        0x1p+0L,           1, 0)
TT(RN,                       -0x1p+0L,          -1, 0)
TT(RN,                   0x1.0001p+0L,           1, INEXACT)
TT(RN,                  -0x1.0001p+0L,          -1, INEXACT)
TT(RN,                   0x1.ffffp-1L,           1, INEXACT)
TT(RN,                  -0x1.ffffp-1L,          -1, INEXACT)
TT(RN,                      0x1p-100L,           0, INEXACT)
TT(RN,                     -0x1p-100L,           0, INEXACT)
#if INVALID
TT(RN,                            NAN,           0, INVALID)
TT(RN,                            inf,           0, INVALID)
TT(RN,                           -inf,           0, INVALID)
TT(RN,                      0x1p+100L,           0, INVALID)
TT(RN,                     -0x1p+100L,           0, INVALID)
#endif

#endif