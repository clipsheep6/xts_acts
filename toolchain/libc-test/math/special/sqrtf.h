#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SQRTF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_SQRTF_H

TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,             inf,             inf,          0x0p+0, 0)
TT(RN,            -inf,             NAN,          0x0p+0, INVALID)
TT(RN,          0x0p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,         -0x0p+0,         -0x0p+0,          0x0p+0, 0)
TT(RN,          0x1p+0,          0x1p+0,          0x0p+0, 0)
TT(RN,         -0x1p+0,             NAN,          0x0p+0, INVALID)
TT(RN,          0x1p+2,          0x1p+1,          0x0p+0, 0)
TT(RN,        0x1p-148,         0x1p-74,          0x0p+0, 0)
TT(RN,      0x1.8p-148,  0x1.3988e2p-74,   0x1.7edbdap-2, INEXACT)
TT(RN,        0x1p-149,  0x1.6a09e6p-75,  -0x1.9fcef4p-3, INEXACT)
TT(RN,       -0x1p-149,             NAN,          0x0p+0, INVALID)
TT(RN, 0x1.fffffep+127,  0x1.fffffep+63,         -0x1p-1, INEXACT)
TT(RN,-0x1.fffffep+127,             NAN,          0x0p+0, INVALID)
TT(RN,   0x1.fffffcp-1,   0x1.fffffep-1,  0x1.000002p-25, INEXACT)
TT(RN,   0x1.fffffep-1,   0x1.fffffep-1,         -0x1p-1, INEXACT)
TT(RN,   0x1.fffffcp+0,   0x1.6a09e4p+0,  -0x1.fbd3acp-2, INEXACT)
TT(RN,   0x1.fffffep+0,   0x1.6a09e6p+0,   0x1.3444dap-3, INEXACT)
TT(RN,   0x1.000002p+0,          0x1p+0,         -0x1p-1, INEXACT)
TT(RN,   0x1.000004p+0,   0x1.000002p+0,  0x1.fffffcp-25, INEXACT)
TT(RN,   0x1.000002p+1,   0x1.6a09e8p+0,   0x1.7012ecp-4, INEXACT)
TT(RN,   0x1.000004p+1,   0x1.6a09eap+0,   0x1.87f0f2p-2, INEXACT)

#endif