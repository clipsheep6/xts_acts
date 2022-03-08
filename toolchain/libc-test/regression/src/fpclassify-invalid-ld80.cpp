// commit: f657fe4b9f734d7fdea515af8dffbf7c28ce4fbc 2013-09-05
// classify invalid x86 ld80 representations (this is ub, we follow the fpu)
// test printf("%La") as well
#include <math.h>
#include <float.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FpclassifyInvalidLd80Suite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FpclassifyInvalidLd80Suite
*/

using namespace std;
using namespace testing::ext;
class FpclassifyInvalidLd80Suite: public testing::Test {
protected:
// Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void){
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void){
    }
    // Preset action of the test case
    virtual void SetUp()
    {
    }
    // Cleanup action of the test case
    virtual void TearDown()
    {
    }
};

/**
 * @tc.name      : FpclassifyInvalidLd80Suite001
 * @tc.desc      : Test FpclassifyInvalidLd80Suite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#if LDBL_MANT_DIG==64
static char *strclass(int c)
{
#define C(n) case n: return #n;
	switch (c) {
	C(FP_NAN)
	C(FP_INFINITE)
	C(FP_ZERO)
	C(FP_SUBNORMAL)
	C(FP_NORMAL)
	}
	return "invalid";
}

#define T(f, desc, c, cwant, s, swant) do{ \
	c = fpclassify(f); \
	EXPECT_EQ(c != cwant) << "fpclassify(" << desc << ") failed: got " << strclass(c) << " want " << #cwant << endl;\
	memset(s, 0, sizeof(s)); \
	EXPECT_LT(snprintf(s, sizeof(s), "%La", f) , sizeof(s));\
	if (snprintf(s, sizeof(s), "%La", f) >= sizeof(s)) \
		t_error("snprintf(\"%%La\", %s) failed with invalid return value\n", desc); \
	EXPECT_EQ(strcmp(s,swant) , 0) ;\
	if (strcmp(s,swant) != 0) \
		t_error("snprintf(\"%%La\", %s) failed: got \"%.*s\" want %s\n", desc, sizeof(s), s, #swant); \
}while(0)

HWTEST_F(FpclassifyInvalidLd80Suite, FpclassifyInvalidLd80Test, Function | MediumTest | Level2)
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
	u.i.m = (uint64_t)1<<63;
	T(u.f, "zero with msb set", c, FP_NORMAL, s, "0x1p-16382");
	u.i.m++;
	T(u.f, "subnormal with msb set", c, FP_NORMAL, s, "0x1.0000000000000002p-16382");
	u.f=1;
	u.i.m=0;
	T(u.f, "normal with msb unset", c, FP_NAN, s, "nan");
	u.f=INFINITY;
	u.i.m=0;
	T(u.f, "infinity with msb unset", c, FP_NAN, s, "nan");
	u.f=NAN;
	u.i.m&=(uint64_t)-1/2;
	T(u.f, "nan with msb unset", c, FP_NAN, s, "nan");
}
#else
HWTEST_F(FpclassifyInvalidLd80Suite, FpclassifyInvalidLd80Test, TestSize.Level1)
{
	return;
}
#endif