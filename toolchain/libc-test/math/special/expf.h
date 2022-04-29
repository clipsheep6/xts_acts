#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXPF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXPF_H

TT(RN,          0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,          0x1p+0,   0x1.5bf0a8p+1,  -0x1.628aeep-2, INEXACT)
TT(RN,         -0x1p+0,   0x1.78b564p-2,   0x1.3a621ap-2, INEXACT)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,          0x0p+0,          0x0p+0, 0)
TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,   0x1.62e42ep+6, 0x1.ffff08p+127,    -0x1.7364p-4, INEXACT)
TT(RN,    0x1.62e43p+6,             inf,          0x0p+0, INEXACT|OVERFLOW)
TT(RN,  -0x1.9fe368p+6,        0x1p-149,   0x1.ffffeap-2, INEXACT|UNDERFLOW)
TT(RN,  -0x1.9fe36ap+6,          0x0p+0,  -0x1.ffff16p-2, INEXACT|UNDERFLOW)
TT(RN,   0x1.62e42ep-2,   0x1.6a09e6p+0,   0x1.1d2196p-3, INEXACT)
TT(RN,    0x1.62e43p-2,   0x1.6a09e6p+0,  -0x1.b6f236p-3, INEXACT)
TT(RN,   0x1.62e432p-2,   0x1.6a09e8p+0,   0x1.ba7cfep-2, INEXACT)

#endif