#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_HYPOT_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_HYPOT_H

TT(RN,                0x1.8p+1,                  0x1p+2,                0x1.4p+2,          0x0p+0, 0)
TT(RN,               -0x1.8p+1,                  0x1p+2,                0x1.4p+2,          0x0p+0, 0)
TT(RN,                  0x1p+2,                0x1.8p+1,                0x1.4p+2,          0x0p+0, 0)
TT(RN,                  0x1p+2,               -0x1.8p+1,                0x1.4p+2,          0x0p+0, 0)
TT(RN,               -0x1.8p+1,                 -0x1p+2,                0x1.4p+2,          0x0p+0, 0)
TT(RN, 0x1.fffffffffffffp+1023,                  0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
TT(RN, 0x1.fffffffffffffp+1023,                 -0x0p+0, 0x1.fffffffffffffp+1023,          0x0p+0, 0)
TT(RN,               0x1p-1074,                  0x0p+0,               0x1p-1074,          0x0p+0, 0)
TT(RN,               0x1p-1074,                 -0x0p+0,               0x1p-1074,          0x0p+0, 0)
TT(RN,                     inf,                  0x1p+0,                     inf,          0x0p+0, 0)
TT(RN,                  0x1p+0,                     inf,                     inf,          0x0p+0, 0)
TT(RN,                     inf,                     NAN,                     inf,          0x0p+0, 0)
TT(RN,                     NAN,                     inf,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,                  0x1p+0,                     inf,          0x0p+0, 0)
TT(RN,                  0x1p+0,                    -inf,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,                     NAN,                     inf,          0x0p+0, 0)
TT(RN,                     NAN,                    -inf,                     inf,          0x0p+0, 0)
TT(RN,                     NAN,                  0x1p+0,                     NAN,          0x0p+0, 0)
TT(RN,                  0x1p+0,                     NAN,                     NAN,          0x0p+0, 0)

#endif