#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_MODFL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_MODFL_H

TT(RN,                        0x0p+0L,                        0x0p+0L,          0x0p+0,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x0p+0L,                       -0x0p+0L,          0x0p+0,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                        0x1p-1L,                        0x1p-1L,          0x0p+0,                        0x0p+0L,          0x0p+0, 0)
TT(RN,                       -0x1p-1L,                       -0x1p-1L,          0x0p+0,                       -0x0p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+0L,                        0x0p+0L,          0x0p+0,                        0x1p+0L,          0x0p+0, 0)
TT(RN,                       -0x1p+0L,                       -0x0p+0L,          0x0p+0,                       -0x1p+0L,          0x0p+0, 0)
TT(RN,                      0x1.8p+0L,                        0x1p-1L,          0x0p+0,                        0x1p+0L,          0x0p+0, 0)
TT(RN,                     -0x1.8p+0L,                       -0x1p-1L,          0x0p+0,                       -0x1p+0L,          0x0p+0, 0)
TT(RN,                        0x1p+1L,                        0x0p+0L,          0x0p+0,                        0x1p+1L,          0x0p+0, 0)
TT(RN,                       -0x1p+1L,                       -0x0p+0L,          0x0p+0,                       -0x1p+1L,          0x0p+0, 0)
TT(RN,                            inf,                        0x0p+0L,          0x0p+0,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,                       -0x0p+0L,          0x0p+0,                           -inf,          0x0p+0, 0)
TT(RN,                            NAN,                            NAN,          0x0p+0,                            NAN,          0x0p+0, 0)

#endif