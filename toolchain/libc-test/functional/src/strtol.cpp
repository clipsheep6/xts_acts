#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "StrtolSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StrtolSuite
*/

using namespace std;
using namespace testing::ext;
class StrtolSuite: public testing::Test {
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
 * @tc.name      : StrtolSuite001
 * @tc.desc      : Test StrtolSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
/* r = place to store result
 * f = function call to test (or any expression)
 * x = expected result
 * m = message to print on failure (with formats for r & x)
 */
/* r = place to store result
 * f = function call to test (or any expression)
 * x = expected result
 * m = message to print on failure (with formats for r & x)
**/
#define TEST1(r, f, x, m) { \
	errno = 0, msg = (char *)#f, ((r) = (f)) == (x) || \
	(t_error("%s failed (" m ")\n", #f, r, x), 0); \
	EXPECT_EQ(r,x);\
}

#define TEST2(r, f, x, m) { \
	((r) = (f)) == (x) || \
	(t_error("%s failed (" m ")\n", msg, r, x), 0); \
	EXPECT_EQ(r,x);\
}

HWTEST_F(StrtolSuite, StrtolTest, Function | MediumTest | Level2)
{
    int i;
	long l;
	unsigned long ul;
	long long ll;
	unsigned long long ull;
	
	char *msg=(char *)"";
	char *s, *c;

	TEST1(l, atol("2147483647"), 2147483647L, "max 32bit signed %ld != %ld");
	TEST1(l, strtol("2147483647", 0, 0), 2147483647L, "max 32bit signed %ld != %ld");
	TEST1(ul, strtoul("4294967295", 0, 0), 4294967295UL, "max 32bit unsigned %lu != %lu");

	if (sizeof(long) == 4) {
		TEST1(l, strtol(s=(char *)"2147483648", &c, 0), 2147483647L, "uncaught overflow %ld != %ld");
		TEST2(i, c-s, 10, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(l, strtol(s=(char *)"-2147483649", &c, 0), -2147483647L-1, "uncaught overflow %ld != %ld");
		TEST2(i, c-s, 11, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"4294967296", &c, 0), 4294967295UL, "uncaught overflow %lu != %lu");
		TEST2(i, c-s, 10, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-1", &c, 0), -1UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-2", &c, 0), -2UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-2147483648", &c, 0), -2147483648UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 11, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-2147483649", &c, 0), -2147483649UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 11, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-4294967296", &c, 0), 4294967295UL, "uncaught negative overflow %lu != %lu");
		TEST2(i, c-s, 11, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "spurious errno %d != %d");
	} else if (sizeof(long) == 8) {
		TEST1(l, strtol(s=(char *)"9223372036854775808", &c, 0), 9223372036854775807L, "uncaught overflow %ld != %ld");
		TEST2(i, c-s, 19, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(l, strtol(s=(char *)"-9223372036854775809", &c, 0), -9223372036854775807L-1, "uncaught overflow %ld != %ld");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"18446744073709551616", &c, 0), 18446744073709551615UL, "uncaught overflow %lu != %lu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-1", &c, 0), -1UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-2", &c, 0), -2UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-9223372036854775808", &c, 0), -9223372036854775808UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-9223372036854775809", &c, 0), -9223372036854775809UL, "rejected negative %lu != %lu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ul, strtoul(s=(char *)"-18446744073709551616", &c, 0), 18446744073709551615UL, "uncaught negative overflow %lu != %lu");
		TEST2(i, c-s, 21, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "spurious errno %d != %d");
	} else {
		EXPECT_TRUE(sizeof(long) == 8 && sizeof(long) == 4) << "sizeof(long) == " << (int)sizeof(long) << ", not implemented" << endl;
		//t_error("sizeof(long) == %d, not implemented\n", (int)sizeof(long));
	}

	if (sizeof(long long) == 8) {
		TEST1(ll, strtoll(s=(char *)"9223372036854775808", &c, 0), 9223372036854775807LL, "uncaught overflow %lld != %lld");
		TEST2(i, c-s, 19, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ll, strtoll(s=(char *)"-9223372036854775809", &c, 0), -9223372036854775807LL-1, "uncaught overflow %lld != %lld");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"18446744073709551616", &c, 0), 18446744073709551615ULL, "uncaught overflow %llu != %llu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "missing errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"-1", &c, 0), -1ULL, "rejected negative %llu != %llu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"-2", &c, 0), -2ULL, "rejected negative %llu != %llu");
		TEST2(i, c-s, 2, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"-9223372036854775808", &c, 0), -9223372036854775808ULL, "rejected negative %llu != %llu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"-9223372036854775809", &c, 0), -9223372036854775809ULL, "rejected negative %llu != %llu");
		TEST2(i, c-s, 20, "wrong final position %d != %d");
		TEST2(i, errno, 0, "spurious errno %d != %d");
		TEST1(ull, strtoull(s=(char *)"-18446744073709551616", &c, 0), 18446744073709551615ULL, "uncaught negative overflow %llu != %llu");
		TEST2(i, c-s, 21, "wrong final position %d != %d");
		TEST2(i, errno, ERANGE, "spurious errno %d != %d");
	} else {
		EXPECT_TRUE(sizeof(long long) == 8) << "sizeof(long) == " << (int)sizeof(long long) << ", not implemented" << endl; 
		//t_error("sizeof(long long) == %d, not implemented\n", (int)sizeof(long long));
	}

	TEST1(l, strtol("z", 0, 36), 35, "%ld != %ld");
	TEST1(l, strtol("00010010001101000101011001111000", 0, 2), 0x12345678, "%ld != %ld");
	TEST1(l, strtol(s=(char *)"0F5F", &c, 16), 0x0f5f, "%ld != %ld");

	TEST1(l, strtol(s=(char *)"0xz", &c, 16), 0, "%ld != %ld");
	TEST2(i, c-s, 1, "wrong final position %ld != %ld");

	TEST1(l, strtol(s=(char *)"0x1234", &c, 16), 0x1234, "%ld != %ld");
	TEST2(i, c-s, 6, "wrong final position %ld != %ld");

	c = NULL;
	TEST1(l, strtol(s=(char *)"123", &c, 37), 0, "%ld != %ld");
	TEST2(i, c-s, 0, "wrong final position %d != %d");
	TEST2(i, errno, EINVAL, "%d != %d");

	TEST1(l, strtol(s=(char *)"  15437", &c, 8), 015437, "%ld != %ld");
	TEST2(i, c-s, 7, "wrong final position %d != %d");

	TEST1(l, strtol(s=(char *)"  1", &c, 0), 1, "%ld != %ld");
	TEST2(i, c-s, 3, "wrong final position %d != %d");
}
