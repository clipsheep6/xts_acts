#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_COPYSIGNF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_COPYSIGNF_H

TT(RN,          0x0p+0,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,          0x0p+0,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,             NAN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,             NAN,         -0x1p+0,             NAN,          0x0p+0, 0)
TT(RN,         -0x1p+0,             NAN,          0x1p+0,          0x0p+0, 0)
TT(RN,             inf,             inf,             inf,          0x0p+0, 0)
TT(RN,             inf,         -0x1p+0,            -inf,          0x0p+0, 0)
TT(RN,         -0x1p+0,             inf,          0x1p+0,          0x0p+0, 0)
TT(RN,            -inf,            -inf,            -inf,          0x0p+0, 0)
TT(RN,            -inf,          0x1p+0,             inf,          0x0p+0, 0)
TT(RN,          0x1p+0,            -inf,         -0x1p+0,          0x0p+0, 0)

#endif