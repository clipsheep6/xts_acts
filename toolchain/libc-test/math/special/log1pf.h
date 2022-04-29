#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LOG1PF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_LOG1PF_H

TT(RN,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,       -0x1p-100,       -0x1p-100,         0x1p-78, INEXACT)
TT(RN,          0x1p+0,    0x1.62e43p-1,    0x1.05c61p-5, INEXACT)
TT(RN,         -0x1p+0,            -inf,          0x0p+0, DIVBYZERO)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,             NAN,          0x0p+0, INVALID)
TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,-0x1.fffffcp-127,-0x1.fffffcp-127,        0x1p-104, INEXACT|UNDERFLOW)

#endif