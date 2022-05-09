#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_HYPOTL_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_HYPOTL_H

TT(RN,                      0x1.8p+1L,            0x1p+2L,                      0x1.4p+2L,          0x0p+0, 0)
TT(RN,                     -0x1.8p+1L,            0x1p+2L,                      0x1.4p+2L,          0x0p+0, 0)
TT(RN,                        0x1p+2L,          0x1.8p+1L,                      0x1.4p+2L,          0x0p+0, 0)
TT(RN,                        0x1p+2L,         -0x1.8p+1L,                      0x1.4p+2L,          0x0p+0, 0)
TT(RN,                     -0x1.8p+1L,           -0x1p+2L,                      0x1.4p+2L,          0x0p+0, 0)
TT(RN,   0x1.fffffffffffffffep+16383L,            0x0p+0L,   0x1.fffffffffffffffep+16383L,          0x0p+0, 0)
TT(RN,   0x1.fffffffffffffffep+16383L,           -0x0p+0L,   0x1.fffffffffffffffep+16383L,          0x0p+0, 0)
TT(RN,                    0x1p-16445L,            0x0p+0L,                    0x1p-16445L,          0x0p+0, 0)
TT(RN,                    0x1p-16445L,           -0x0p+0L,                    0x1p-16445L,          0x0p+0, 0)
TT(RN,                            inf,            0x1p+0L,                            inf,          0x0p+0, 0)
TT(RN,                        0x1p+0L,                inf,                            inf,          0x0p+0, 0)
TT(RN,                            inf,                NAN,                            inf,          0x0p+0, 0)
TT(RN,                            NAN,                inf,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,            0x1p+0L,                            inf,          0x0p+0, 0)
TT(RN,                        0x1p+0L,               -inf,                            inf,          0x0p+0, 0)
TT(RN,                           -inf,                NAN,                            inf,          0x0p+0, 0)
TT(RN,                            NAN,               -inf,                            inf,          0x0p+0, 0)
TT(RN,                            NAN,            0x1p+0L,                            NAN,          0x0p+0, 0)
TT(RN,                        0x1p+0L,                NAN,                            NAN,          0x0p+0, 0)

#endif