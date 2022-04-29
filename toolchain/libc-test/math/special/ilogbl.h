#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ILOGBL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ILOGBL_H

TT(RN,                  0x0p+0, FP_ILOGB0, INVALID)
TT(RN,                 -0x0p+0, FP_ILOGB0, INVALID)
TT(RN,               -0x1p-100, -100, 0)
TT(RN,                  0x1p+0, 0, 0)
TT(RN,                 -0x1p+0, 0, 0)
TT(RN,                     inf, -1U/2, INVALID)
TT(RN,                    -inf, -1U/2, INVALID)
TT(RN,                     NAN, FP_ILOGBNAN, INVALID)
TT(RN,             0x1p-16445L, -16445, 0)

#endif