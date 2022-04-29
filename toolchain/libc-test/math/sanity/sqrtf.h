#ifndef TOOLCHAIN_LIBC_TEST_MATH_SANITY_SQRTF_H
#define TOOLCHAIN_LIBC_TEST_MATH_SANITY_SQRTF_H

TT(RN,   -0x1.0223ap+3,             NAN,          0x0p+0, INVALID)
TT(RN,   0x1.161868p+2,   0x1.0ad1aep+1,   0x1.47b8a2p-2, INEXACT)
TT(RN,  -0x1.0c34b4p+3,             NAN,          0x0p+0, INVALID)
TT(RN,   -0x1.a206fp+2,             NAN,          0x0p+0, INVALID)
TT(RN,   0x1.288bbcp+3,   0x1.85a7d4p+1,   0x1.9b6e6ap-5, INEXACT)
TT(RN,    0x1.52efdp-1,   0x1.a0937ap-1,   0x1.cadb0cp-3, INEXACT)
TT(RN,  -0x1.a05cc8p-2,             NAN,          0x0p+0, INVALID)
TT(RN,   0x1.1f9efap-1,   0x1.7fbf4cp-1,    0x1.e2f46p-5, INEXACT)
TT(RN,    0x1.8c5dbp-1,   0x1.c27ce8p-1,  -0x1.f32fe4p-2, INEXACT)
TT(RN,  -0x1.5b86eap-1,             NAN,          0x0p+0, INVALID)

#endif