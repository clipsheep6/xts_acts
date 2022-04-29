#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_CBRTL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_CBRTL_H

TT(RN,                            NAN,                            NAN,          0x0p+0, 0)
TT(RN,                            inf,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,                           -inf,          0x0p+0, 0)
TT(RN,                        0x0p+0L,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x0p+0L,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                       0x1p-30L,                       0x1p-10L,          0x0p+0, 0)
TT(RN,                      -0x1p-30L,                      -0x1p-10L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,                        0x1p+0L,          0x0p+0, 0)
TT(RN,                       -0x1p+0L,                       -0x1p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+3L,                        0x1p+1L,          0x0p+0, 0)
TT(RN,                   -0x1p-16433L,   -0x1.428a2f98d728ae22p-5478L,   0x1.eed5b8p-4, INEXACT)

#endif