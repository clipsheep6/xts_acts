#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_EXP_H

TT(RN,                  0x0p+0,                  0x1p+0,          0x0p+0, 0)
TT(RN,                 -0x0p+0,                  0x1p+0,          0x0p+0, 0)
TT(RN,                  0x1p+0,    0x1.5bf0a8b145769p+1,  -0x1.4d57eep-2, INEXACT)
TT(RN,                 -0x1p+0,    0x1.78b56362cef38p-2,   0x1.ca8a42p-3, INEXACT)
TT(RN,                     inf,                     inf,          0x0p+0, 0)
TT(RN,                    -inf,                  0x0p+0,          0x0p+0, 0)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RN,    0x1.0a2b2ffffffffp+0,    0x1.6a09f771c562ap+1,   0x1.81164cp-3, INEXACT)
TT(RN,   -0x1.0a2b2ffffffffp+0,    0x1.6a09d55e22e44p-2,   0x1.02caeep-2, INEXACT)
TT(RN,           0x1.0a2b28p+0,    0x1.6a09ec2175d46p+1,  -0x1.ac74b4p-2, INEXACT)
TT(RN,            0x1.0a2b3p+0,    0x1.6a09f771c562bp+1,   -0x1.cf397p-3, INEXACT)

#endif