#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXPM1L_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXPM1L_H

TT(RN,                        0x0p+0L,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x0p+0L,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,       0x1.b7e151628aed2a6ap+0L,  -0x1.7ee2b2p-2, INEXACT)
TT(RN,                       -0x1p+0L,      -0x1.43a54e4e988641cap-1L,   0x1.1484e2p-2, INEXACT)
TT(RN,                            inf,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,                       -0x1p+0L,          0x0p+0, 0)
TT(RN,                            NAN,                            NAN,          0x0p+0, 0)
TT(RN,     -0x1.0000666666666666p+14L,                       -0x1p+0L,          0x0p+0, INEXACT)

#endif