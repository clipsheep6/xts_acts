#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "gtest/gtest.h"
#include "test.h"

/**  
* @brief  register a test suit named "StringMemcpySuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StringMemcpySuite
*/

using namespace std;
using namespace testing::ext;
class StringMemcpySuite: public testing::Test {
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
 * @tc.name      : StringMemcpySuite001
 * @tc.desc      : Test StringMemcpySuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static char buf[512];

static void *(*volatile pmemcpy)(void *restrict, const void *restrictt, size_t);

static void *aligned(void *p) {
	return (void*)(((uintptr_t)p + 63) & -64);
}

#define N 80
static void test_align(int dalign, int salign, int len)
{
	char *src = (char *)aligned(buf);
	char *dst = (char *)aligned(buf + 128);
	char *want = (char *)aligned(buf + 256);
	char *p;
	int i;

	if (salign + len > N || dalign + len > N)
		abort();
	for (i = 0; i < N; i++) {
		src[i] = '#';
		dst[i] = want[i] = ' ';
	}
	for (i = 0; i < len; i++)
		src[salign+i] = want[dalign+i] = '0'+i;
	p = (char *)pmemcpy(dst+dalign, src+salign, len);
	EXPECT_STREQ(p , dst+dalign) << "memcpy(" << dst+dalign << ",...) returned " << p << endl;
	for (i = 0; i < N; i++)
		if (dst[i] != want[i]) {
			EXPECT_EQ(dst[i] , want[i]) << "memcpy(align " << dalign << ", align " << salign << ", " << len << ") failed" << endl;
			t_printf("got : %.*s\n", dalign+len+1, dst);
			t_printf("want: %.*s\n", dalign+len+1, want);
			break;
		}
}

HWTEST_F(StringMemcpySuite, StringMemcpyTest, Function | MediumTest | Level2)
{
    int i,j,k;

	pmemcpy = memcpy;

	for (i = 0; i < 16; i++)
		for (j = 0; j < 16; j++)
			for (k = 0; k < 64; k++)
				test_align(i,j,k);
}
