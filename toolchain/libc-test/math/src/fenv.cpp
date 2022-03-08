#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include "mtest.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FenvSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FenvSuite
*/

using namespace std;
using namespace testing::ext;
class FenvSuite: public testing::Test {
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
 * @tc.name      : FenvSuite001
 * @tc.desc      : Test FenvSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static int test_status;

#define error(...) print((char *)__FILE__, __LINE__, __VA_ARGS__)
static void print(char *f, int l, char *fmt, ...)
{
	test_status = 1;
	va_list ap;
	printf("%s:%d: ", f, l);
	va_start(ap, fmt);
	vprintf(fmt, ap);
	va_end(ap);
}

#define F(n) {(char *)#n, n}

static struct {
	char *name;
	int i;
} te[] = {
#ifdef FE_DIVBYZERO
	F(FE_DIVBYZERO),
#endif
#ifdef FE_INEXACT
	F(FE_INEXACT),
#endif
#ifdef FE_INVALID
	F(FE_INVALID),
#endif
#ifdef FE_OVERFLOW
	F(FE_OVERFLOW),
#endif
#ifdef FE_UNDERFLOW
	F(FE_UNDERFLOW),
#endif
	{0, 0}
};

static void test_except()
{
	//#pragma STDC FENV_ACCESS ON
	int i,r;
	fenv_t env;

	for (i=0; te[i].i; i++) {
		feclearexcept(FE_ALL_EXCEPT);

		r = feraiseexcept(te[i].i);
		EXPECT_FALSE(r) << "feraiseexcept(" << te[i].name << ") returned" << r << endl;
		r = fetestexcept(FE_ALL_EXCEPT);
		if (r != te[i].i) {
#if defined FE_OVERFLOW && defined FE_INEXACT
			if (te[i].i == FE_OVERFLOW && r == (FE_OVERFLOW|FE_INEXACT))
				continue;
#endif
#if defined FE_UNDERFLOW && defined FE_INEXACT
			if (te[i].i == FE_UNDERFLOW && r == (FE_UNDERFLOW|FE_INEXACT))
				continue;
#endif
			error((char *)"feraiseexcept(%s) want %d got %d\n",
				te[i].name, te[i].i, r);
		}
	}

	r = feraiseexcept(FE_ALL_EXCEPT);
	EXPECT_EQ(r,0) <<"feraisexcept(FE_ALL_EXCEPT) failed" << endl;
	r = fegetenv(&env);
	EXPECT_EQ(r,0) <<"fegetenv(&env) = "<< r <<endl;
	r = fetestexcept(FE_ALL_EXCEPT);
	EXPECT_EQ(r , FE_ALL_EXCEPT) << "fetestexcept failed: got 0x" << hex << r
	<< ", want 0x" << hex <<FE_ALL_EXCEPT << "(FE_ALL_ECXEPT)" << endl;
	r = fesetenv(FE_DFL_ENV);
	EXPECT_EQ(r,0)<< "fesetenv(FE_DFL_ENV) = " << r << endl;
	r = fetestexcept(FE_ALL_EXCEPT);
	EXPECT_EQ(r,0) << "fesetenv(FE_DFL_ENV) did not clear exceptions: 0x" << hex <<r << endl;
	r = fesetenv(&env);
	EXPECT_EQ(r,0) << "fesetenv(&env) = " << r << endl;
	r = fetestexcept(FE_ALL_EXCEPT);
	EXPECT_EQ(r , FE_ALL_EXCEPT) << "fesetenv(&env) did not restore exceptions: 0x" << hex << r << endl;

}

static struct {
	char *name;
	int i;
} tr[] = {
	F(FE_TONEAREST),
#ifdef FE_UPWARD
	F(FE_UPWARD),
#endif
#ifdef FE_DOWNWARD
	F(FE_DOWNWARD),
#endif
#ifdef FE_TOWARDZERO
	F(FE_TOWARDZERO),
#endif
};

static void test_round()
{
	//#pragma STDC FENV_ACCESS ON
	int i,r;
	fenv_t env;
	volatile float two100 = 0x1p100;
	volatile float x;

	for (i=0; i < sizeof tr/sizeof*tr; i++) {
		EXPECT_FALSE(tr[i].i < 0) << tr[i].name << " (" << tr[i].i << ") < 0" << endl;
		for (r=0; r < i; r++)
			EXPECT_NE(tr[r].i , tr[i].i) << tr[r].name << " (" << tr[r].i
			 << ") == " << tr[i].name << " (" << tr[i].i << ")" << endl;
	}

	for (i=0; i < sizeof tr/sizeof*tr; i++) {
		r = fesetround(tr[i].i);
		EXPECT_EQ(r , 0) << "fesetround(" << tr[i].name << ") = " << r << endl;
		r = fegetround();
		EXPECT_EQ(r , tr[i].i) << "fegetround() = 0x" << hex << r << ", wanted 0x" << hex << tr[i].i << "  ("<< tr[i].name << ")" << endl;
	}

#ifdef FE_UPWARD
	r = fesetround(FE_UPWARD);
	EXPECT_EQ(r , 0) << "fesetround(FE_UPWARD) failed" << endl;
#endif
	r = fegetenv(&env);
	EXPECT_EQ(r , 0) << "fegetenv(&env) = " << r << endl;
	i = fegetround();
	r = fesetenv(FE_DFL_ENV);
	EXPECT_EQ(r , 0) << "fesetenv(FE_DFL_ENV) = " << r << endl;
	r = fegetround();
	EXPECT_EQ(r , FE_TONEAREST) << "fesetenv(FE_DFL_ENV) did not set FE_TONEAREST (0x" 
	<< hex << FE_TONEAREST << "), got 0x" << hex << r << endl;
	x = two100 + 1;
	EXPECT_FLOAT_EQ(x , two100) << "fesetenv(FE_DFL_ENV) did not set FE_TONEAREST, arithmetics rounds upward" <<endl;
	x = two100 - 1;
	EXPECT_FLOAT_EQ(x , two100) << "fesetenv(FE_DFL_ENV) did not set FE_TONEAREST, arithmetics rounds downward or tozero"<<endl;
	r = fesetenv(&env);
	EXPECT_EQ(r , 0) << "fesetenv(&env) = " << r << endl;
	r = fegetround();
	EXPECT_EQ(r , i) << "fesetenv(&env) did not restore 0x" << hex << i << ", got 0x" << hex << r;
#ifdef FE_UPWARD
	x = two100 + 1;
	EXPECT_NE(x , two100) << "fesetenv did not restore upward rounding" << endl;
#endif

}

/* ieee double precision add operation */
static struct dd_d t[] = {
TT(RN,                  0x1p+0,                 0x1p-52,    0x1.0000000000001p+0,          0x0p+0, 0)
TT(RN,                  0x1p+0,                 0x1p-53,                  0x1p+0,         -0x1p-1, INEXACT)
TT(RN,                  0x1p+0,              0x1.01p-53,    0x1.0000000000001p+0,       0x1.fep-2, INEXACT)
TT(RN,                  0x1p+0,                -0x1p-54,                  0x1p+0,          0x1p-2, INEXACT)
TT(RN,                  0x1p+0,             -0x1.01p-54,    0x1.fffffffffffffp-1,      -0x1.fep-2, INEXACT)
TT(RN,                 -0x1p+0,                -0x1p-53,                 -0x1p+0,          0x1p-1, INEXACT)
TT(RN,                 -0x1p+0,             -0x1.01p-53,   -0x1.0000000000001p+0,      -0x1.fep-2, INEXACT)
TT(RN,                 -0x1p+0,                 0x1p-54,                 -0x1p+0,         -0x1p-2, INEXACT)
TT(RN,                 -0x1p+0,              0x1.01p-54,   -0x1.fffffffffffffp-1,       0x1.fep-2, INEXACT)

TT(RU,                  0x1p+0,                 0x1p-52,    0x1.0000000000001p+0,          0x0p+0, 0)
TT(RU,                  0x1p+0,                 0x1p-53,    0x1.0000000000001p+0,          0x1p-1, INEXACT)
TT(RU,                  0x1p+0,              0x1.01p-53,    0x1.0000000000001p+0,       0x1.fep-2, INEXACT)
TT(RU,                  0x1p+0,                -0x1p-54,                  0x1p+0,          0x1p-2, INEXACT)
TT(RU,                  0x1p+0,             -0x1.01p-54,                  0x1p+0,       0x1.01p-2, INEXACT)
TT(RU,                 -0x1p+0,                -0x1p-53,                 -0x1p+0,          0x1p-1, INEXACT)
TT(RU,                 -0x1p+0,             -0x1.01p-53,                 -0x1p+0,       0x1.01p-1, INEXACT)
TT(RU,                 -0x1p+0,                 0x1p-54,   -0x1.fffffffffffffp-1,          0x1p-1, INEXACT)
TT(RU,                 -0x1p+0,              0x1.01p-54,   -0x1.fffffffffffffp-1,       0x1.fep-2, INEXACT)

TT(RD,                  0x1p+0,                 0x1p-52,    0x1.0000000000001p+0,          0x0p+0, 0)
TT(RD,                  0x1p+0,                 0x1p-53,                  0x1p+0,         -0x1p-1, INEXACT)
TT(RD,                  0x1p+0,              0x1.01p-53,                  0x1p+0,      -0x1.01p-1, INEXACT)
TT(RD,                  0x1p+0,                -0x1p-54,    0x1.fffffffffffffp-1,         -0x1p-1, INEXACT)
TT(RD,                  0x1p+0,             -0x1.01p-54,    0x1.fffffffffffffp-1,      -0x1.fep-2, INEXACT)
TT(RD,                 -0x1p+0,                -0x1p-53,   -0x1.0000000000001p+0,         -0x1p-1, INEXACT)
TT(RD,                 -0x1p+0,             -0x1.01p-53,   -0x1.0000000000001p+0,      -0x1.fep-2, INEXACT)
TT(RD,                 -0x1p+0,                 0x1p-54,                 -0x1p+0,         -0x1p-2, INEXACT)
TT(RD,                 -0x1p+0,              0x1.01p-54,                 -0x1p+0,      -0x1.01p-2, INEXACT)

TT(RZ,                  0x1p+0,                 0x1p-52,    0x1.0000000000001p+0,          0x0p+0, 0)
TT(RZ,                  0x1p+0,                 0x1p-53,                  0x1p+0,         -0x1p-1, INEXACT)
TT(RZ,                  0x1p+0,              0x1.01p-53,                  0x1p+0,      -0x1.01p-1, INEXACT)
TT(RZ,                  0x1p+0,                -0x1p-54,    0x1.fffffffffffffp-1,         -0x1p-1, INEXACT)
TT(RZ,                  0x1p+0,             -0x1.01p-54,    0x1.fffffffffffffp-1,      -0x1.fep-2, INEXACT)
TT(RZ,                 -0x1p+0,                -0x1p-53,                 -0x1p+0,          0x1p-1, INEXACT)
TT(RZ,                 -0x1p+0,             -0x1.01p-53,                 -0x1p+0,       0x1.01p-1, INEXACT)
TT(RZ,                 -0x1p+0,                 0x1p-54,   -0x1.fffffffffffffp-1,          0x1p-1, INEXACT)
TT(RZ,                 -0x1p+0,              0x1.01p-54,   -0x1.fffffffffffffp-1,       0x1.fep-2, INEXACT)
};

static void test_round_add(void)
{
	//#pragma STDC FENV_ACCESS ON
	double y;
	float d;
	int i;
	struct dd_d *p;

	for (i = 0; i < sizeof t/sizeof *t; i++) {
		p = t + i;

		if (p->r < 0)
			continue;
		fesetround(p->r);
		y = p->x + p->x2;
		d = ulperr(y, p->y, p->dy);
		EXPECT_FALSE(!checkcr(y, p->y, p->r));
		if (!checkcr(y, p->y, p->r)) {
			printf("%s:%d: %s %a+%a want %a got %a ulperr %.3f = %a + %a\n",
				p->file, p->line, rstr(p->r), p->x, p->x2, p->y, y, d, d-p->dy, p->dy);
			test_status = 1;
		}
	}
}

static void test_bad(void)
{
	fexcept_t f;
	int r;

	r = feclearexcept(FE_ALL_EXCEPT);
	EXPECT_EQ(r,0) <<"feclearexcept(FE_ALL_EXCEPT) failed" << endl;
	r = fetestexcept(-1);
	EXPECT_EQ(r,0) <<"fetestexcept(-1) should return 0 when all exceptions are cleared, got "<< r <<endl;
	r = feraiseexcept(1234567|FE_ALL_EXCEPT);
	EXPECT_EQ(r,0) << "feraiseexcept returned non-zero for non-supported exceptions: " << r << endl;
	r = feclearexcept(1234567|FE_ALL_EXCEPT);
	EXPECT_EQ(r,0) << "feclearexcept returned non-zero for non-supported exceptions: " << r << endl;
	r = fesetround(1234567);
	EXPECT_NE(r,0) << "fesetround should fail on invalid rounding mode" << endl;
	r = fegetexceptflag(&f, 1234567);
	EXPECT_EQ(r,0) << "fegetexceptflag returned non-zero for non-supported exceptions: " << r << endl;
	r = fegetexceptflag(&f, 0);
	EXPECT_EQ(r,0) << "fegetexceptflag(0) failed" << endl;
	r = fesetexceptflag(&f, 1234567);
	EXPECT_EQ(r,0) << "fesetexceptflag returned non-zero fir non-supported exceptions: " << r << endl;
}


HWTEST_F(FenvSuite, FenvTest, Function | MediumTest | Level2)
{
	test_except();
	test_round();
	test_round_add();
	test_bad();
}
