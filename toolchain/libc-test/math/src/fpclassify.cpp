#include <stdint.h>
#include <stdio.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FpclassifySuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FpclassifySuite
*/

using namespace std;
using namespace testing::ext;
class FpclassifySuite: public testing::Test {
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
 * @tc.name      : FpclassifySuite001
 * @tc.desc      : Test FpclassifySuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(a,b) {__LINE__, a, b},
#define length(a) (sizeof(a)/sizeof*(a))

static struct {
	int line;
	float f;
	int classs;
} tf[] = {
	T(0.0/0.0, FP_NAN)
	T(-0.0/0.0, FP_NAN)
	T(1/0.0, FP_INFINITE)
	T(-1/0.0, FP_INFINITE)
	T(0x1.ffffp127, FP_NORMAL)
	T(-0x1.ffffp127, FP_NORMAL)
	T(0x1p-127, FP_SUBNORMAL)
	T(-0x1p-127, FP_SUBNORMAL)
	T(0.0, FP_ZERO)
	T(-0.0, FP_ZERO)
	T(3.14, FP_NORMAL)
	T(-42, FP_NORMAL)
};

static struct {
	int line;
	double f;
	int classs;
} td[] = {
	T(0.0/0.0, FP_NAN)
	T(-0.0/0.0, FP_NAN)
	T(1/0.0, FP_INFINITE)
	T(-1/0.0, FP_INFINITE)
	T(0x1.ffffp1023, FP_NORMAL)
	T(-0x1.ffffp1023, FP_NORMAL)
	T(0x1p-1023, FP_SUBNORMAL)
	T(-0x1p-1023, FP_SUBNORMAL)
	T(0.0, FP_ZERO)
	T(-0.0, FP_ZERO)
	T(3.14, FP_NORMAL)
	T(-42, FP_NORMAL)
};

static struct {
	int line;
	long double f;
	int classs;
} tl[] = {
	T(0.0/0.0, FP_NAN)
	T(-0.0/0.0, FP_NAN)
	T(1/0.0, FP_INFINITE)
	T(-1/0.0, FP_INFINITE)
#if LDBL_MAX_EXP==16384
	T(0x1.ffffp16383L, FP_NORMAL)
	T(-0x1.ffffp16383L, FP_NORMAL)
	T(0x1p-16383L, FP_SUBNORMAL)
	T(-0x1p-16383L, FP_SUBNORMAL)
#elif LDBL_MAX_EXP==1024
	T(0x1.ffffp1023L, FP_NORMAL)
	T(-0x1.ffffp1023L, FP_NORMAL)
	T(0x1p-1023L, FP_SUBNORMAL)
	T(-0x1p-1023L, FP_SUBNORMAL)
#endif
	T(0.0, FP_ZERO)
	T(-0.0, FP_ZERO)
	T(3.14, FP_NORMAL)
	T(-42, FP_NORMAL)
};

static char *strclass(int c)
{
#define C(n) case n: return (char *)#n;
	switch (c) {
	C(FP_NAN)
	C(FP_INFINITE)
	C(FP_ZERO)
	C(FP_SUBNORMAL)
	C(FP_NORMAL)
	}
	return (char *)"invalid";
}

#define error(t,c) err++, printf("%s:%d: (at line %d) %La has classs %d (%s), but %s returns %d\n", \
	__FILE__, __LINE__, t.line, (long double)t.f, t.classs, strclass(t.classs), #c, c(t.f))

HWTEST_F(FpclassifySuite, FpclassifyTest, Function | MediumTest | Level2)
{
	int i;
	int err = 0;

	for (i = 0; i < length(tf); i++) {
		EXPECT_EQ(fpclassify(tf[i].f) , tf[i].classs);
		if (fpclassify(tf[i].f) != tf[i].classs)
			error(tf[i], fpclassify);
		EXPECT_EQ(!!isinf(tf[i].f) , (tf[i].classs == FP_INFINITE));
		if (!!isinf(tf[i].f) != (tf[i].classs == FP_INFINITE))
			error(tf[i], isinf);
		EXPECT_EQ(!!isnan(tf[i].f) , (tf[i].classs == FP_NAN));
		if (!!isnan(tf[i].f) != (tf[i].classs == FP_NAN))
			error(tf[i], isnan);
		EXPECT_EQ(!!isnormal(tf[i].f) , (tf[i].classs == FP_NORMAL));
		if (!!isnormal(tf[i].f) != (tf[i].classs == FP_NORMAL))
			error(tf[i], isnormal);
		EXPECT_EQ(!!isfinite(tf[i].f) , (tf[i].classs > FP_INFINITE));
		if (!!isfinite(tf[i].f) != (tf[i].classs > FP_INFINITE))
			error(tf[i], isfinite);
	}

	for (i = 0; i < length(td); i++) {
		EXPECT_EQ(fpclassify(td[i].f) , td[i].classs);
		if (fpclassify(td[i].f) != td[i].classs)
			error(td[i], fpclassify);
		EXPECT_EQ(!!isinf(td[i].f) , (td[i].classs == FP_INFINITE));
		if (!!isinf(td[i].f) != (td[i].classs == FP_INFINITE))
			error(td[i], isinf);
		EXPECT_EQ(!!isnan(td[i].f) , (td[i].classs == FP_NAN));
		if (!!isnan(td[i].f) != (td[i].classs == FP_NAN))
			error(td[i], isnan);
		EXPECT_EQ(!!isnormal(td[i].f) , (td[i].classs == FP_NORMAL));
		if (!!isnormal(td[i].f) != (td[i].classs == FP_NORMAL))
			error(td[i], isnormal);
		EXPECT_EQ(!!isfinite(td[i].f) , (td[i].classs > FP_INFINITE));
		if (!!isfinite(td[i].f) != (td[i].classs > FP_INFINITE))
			error(td[i], isfinite);
	}

	for (i = 0; i < length(tl); i++) {
		EXPECT_EQ(fpclassify(tl[i].f) , tl[i].classs);
		if (fpclassify(tl[i].f) != tl[i].classs)
			error(tl[i], fpclassify);
		EXPECT_EQ(!!isinf(tl[i].f) , (tl[i].classs == FP_INFINITE));
		if (!!isinf(tl[i].f) != (tl[i].classs == FP_INFINITE))
			error(tl[i], isinf);
		EXPECT_EQ(!!isnan(tl[i].f) , (tl[i].classs == FP_NAN));
		if (!!isnan(tl[i].f) != (tl[i].classs == FP_NAN))
			error(tl[i], isnan);
		EXPECT_EQ(!!isnormal(tl[i].f) , (tl[i].classs == FP_NORMAL));
		if (!!isnormal(tl[i].f) != (tl[i].classs == FP_NORMAL))
			error(tl[i], isnormal);
		EXPECT_EQ(!!isfinite(tl[i].f) , (tl[i].classs > FP_INFINITE));
		if (!!isfinite(tl[i].f) != (tl[i].classs > FP_INFINITE))
			error(tl[i], isfinite);
	}

}
