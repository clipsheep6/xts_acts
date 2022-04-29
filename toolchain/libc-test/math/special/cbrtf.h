#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_CBRTF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_CBRTF_H

TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,            -inf,          0x0p+0, 0)
TT(RN,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,         0x1p-30,         0x1p-10,          0x0p+0, 0)
TT(RN,        -0x1p-30,        -0x1p-10,          0x0p+0, 0)
TT(RN,          0x1p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x1p+0,         -0x1p+0,          0x0p+0, 0)
TT(RN,          0x1p+3,          0x1p+1,          0x0p+0, 0)

#endif