#include <cmath>
#include <cfloat>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <securec.h>

#include "gtest/gtest.h"

#define T(f, desc, c, cwant, s, swant) do {                                                  \
    c = fpclassify(f);                                                                       \
    EXPECT_EQ(c != cwant) << "fpclassify(" << desc                                           \
        << ") failed: got " << strclass(c) << " want " << #cwant << endl;                    \
    memset_s(s, sizeof(s) - 1,0, sizeof(s));                                                                 \
    EXPECT_GE(snprintf_s(s, sizeof(s), sizeof(s), "%La", f), sizeof(s))                      \
        << "snprintf_s(\"%%La\"," << desc << ") failed with invalid return value\n"<< endl;  \
    EXPECT_EQ(strcmp(s, swant), 0) << "snprintf_s(\"" << desc                                \
        << "\", " << sizeof(s) << ") failed: got \"" << s << "\" want " << #swant << endl;   \
} while (0)

using namespace std;
using namespace testing::ext;
class FpclassifyInvalidLd80 : public testing::Test{};

#if LDBL_MANT_DIG == 64
static char *strclass(int c) {
#define C(n) \
    case n:  \
        return #n;
    switch (c) {
        C(FP_NAN)
        C(FP_INFINITE)
        C(FP_ZERO)
        C(FP_SUBNORMAL)
        C(FP_NORMAL)
    }
    return "invalid";
}
/**
 * @tc.name      : FpclassifyInvalidLd80Test
 * @tc.desc      : 
 * @tc.level     : Level 2
 */
HWTEST_F(FpclassifyInvalidLd80, FpclassifyInvalidLd80Test, Function | MediumTest | Level2)
{
    union {
        long double f;
        struct {
            uint64_t m;
            uint16_t se;
        } i;
    } u;
    int c;
    int r;
    char s[32];

    u.f = 0;
    u.i.m = (uint64_t)1 << 63;
    T(u.f, "zero with msb set", c, FP_NORMAL, s, "0x1p-16382");
    u.i.m++;
    T(u.f, "subnormal with msb set", c, FP_NORMAL, s, "0x1.0000000000000002p-16382");
    u.f = 1;
    u.i.m = 0;
    T(u.f, "normal with msb unset", c, FP_NAN, s, "nan");
    u.f = INFINITY;
    u.i.m = 0;
    T(u.f, "infinity with msb unset", c, FP_NAN, s, "nan");
    u.f = NAN;
    u.i.m &= (uint64_t)-1 / 2;
    T(u.f, "nan with msb unset", c, FP_NAN, s, "nan");
}
#else
HWTEST_F(FpclassifyInvalidLd80, FpclassifyInvalidLd80Test, Function | MediumTest | Level2)
{
    return;
}
#endif
