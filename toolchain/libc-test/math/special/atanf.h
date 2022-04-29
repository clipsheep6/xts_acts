#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ATANF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ATANF_H

TT(RN,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,          0x1p+0,   0x1.921fb6p-1,   0x1.777a5cp-2, INEXACT)
TT(RN,         -0x1p+0,  -0x1.921fb6p-1,  -0x1.777a5cp-2, INEXACT)
TT(RN,             inf,   0x1.921fb6p+0,   0x1.777a5cp-2, INEXACT)
TT(RN,            -inf,  -0x1.921fb6p+0,  -0x1.777a5cp-2, INEXACT)
TT(RN,             NAN,             NAN,          0x0p+0, 0)

#endif