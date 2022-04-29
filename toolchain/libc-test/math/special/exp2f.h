#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP2F_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP2F_H

TT(RN,          0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,          0x1p+0,          0x1p+1,          0x0p+0, 0)
TT(RN,         -0x1p+0,          0x1p-1,          0x0p+0, 0)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,          0x0p+0,          0x0p+0, 0)
TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,  -0x1.2bccccp+7,        0x1p-149,   0x1.db3feap-2, INEXACT|UNDERFLOW)
TT(RN,      -0x1.2cp+7,          0x0p+0,         -0x1p-1, INEXACT|UNDERFLOW)
TT(RN,  -0x1.2c3334p+7,          0x0p+0,  -0x1.ddb5fcp-2, INEXACT|UNDERFLOW)
TT(RN,   0x1.ff999ap+6, 0x1.ddb6a2p+127,   0x1.a36a36p-2, INEXACT)
TT(RN,          0x1p+7,             inf,          0x0p+0, INEXACT|OVERFLOW)
TT(RN,   0x1.003334p+7,             inf,          0x0p+0, INEXACT|OVERFLOW)
TT(RN,   0x1.91eb86p+1,   0x1.1a1676p+3,   0x1.07c524p-2, INEXACT)

#endif