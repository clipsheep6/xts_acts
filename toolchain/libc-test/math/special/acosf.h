#ifndef TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ACOSF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SPECIAL_ACOSF_H

TT(RN,          0x0p+0,   0x1.921fb6p+0,   0x1.777a5cp-2, INEXACT)
TT(RN,         -0x1p+0,   0x1.921fb6p+1,   0x1.777a5cp-2, INEXACT)
TT(RN,          0x1p+0,          0x0p+0,          0x0p+0, 0)
TT(RN,   0x1.000002p+0,             NAN,          0x0p+0, INVALID)
TT(RN,  -0x1.000002p+0,             NAN,          0x0p+0, INVALID)
TT(RN,             inf,             NAN,          0x0p+0, INVALID)
TT(RN,            -inf,             NAN,          0x0p+0, INVALID)
TT(RN,             NAN,             NAN,          0x0p+0, 0)
TT(RN,   0x1.ffa46cp-2,   0x1.0c2f92p+0,  -0x1.b164dap-3, INEXACT)
TT(RN,  -0x1.02a1c8p-1,   0x1.0cd7fap+1,  -0x1.ab103cp-3, INEXACT)
TT(RN,  -0x1.09b7aep-1,   0x1.0ee7eep+1,  -0x1.2b0662p-3, INEXACT)

#endif