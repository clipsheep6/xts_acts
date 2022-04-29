#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ACOS_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ACOS_H

TT(RN,                  0x0p+0,    0x1.921fb54442d18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,                 -0x1p+0,    0x1.921fb54442d18p+1,  -0x1.1a6264p-2, INEXACT)
TT(RN,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RN,   -0x1.0fd51a5672715p-1,    0x1.10b3beb3ca315p+1,   0x1.1ce0e8p-3, INEXACT)
TT(RN,    0x1.f9cf8431025cep-2,    0x1.0ddda02455023p+0,    0x1.c3ae8p-3, INEXACT)


#endif