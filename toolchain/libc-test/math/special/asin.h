#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ASIN_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ASIN_H

TT(RN,                  0x1p+0,    0x1.921fb54442d18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,                 -0x1p+0,   -0x1.921fb54442d18p+0,   0x1.1a6264p-2, INEXACT)
TT(RN,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                 -0x0p+0,                 -0x0p+0,          0x0p+0, 0)
TT(RN,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RN,    0x1.03bd66c158fd6p-1,    0x1.10695e668145dp-1,   -0x1.4ae6ep-3, INEXACT)

#endif