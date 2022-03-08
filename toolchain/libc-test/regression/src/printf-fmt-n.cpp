// commit: 5cbd76c6b05b381f269e0e204e10690d69f1d6ea 2011-02-16
// commit: bdc9ed15651b70e89f83c5a9f7d1ba349e624503 2011-02-20
// printf %n fmt
#include <stdint.h>
#include <stdio.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "PrintfFmtnSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  PrintfFmtnSuite
*/

using namespace std;
using namespace testing::ext;
class PrintfFmtnSuite: public testing::Test {
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
 * @tc.name      : PrintfFmtnSuite001
 * @tc.desc      : Test PrintfFmtnSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(n,nfmt,fmt) do { \
        EXPECT_FALSE((ret = sprintf(buf, "%256d%d" nfmt "%d", 1, 2, &n, 3)) != 258)\
        << "expexted sprintf to write 258 chars, got " << ret << endl;\
        EXPECT_EQ(257,n) << n << " format failed: wanted 257, got " << fmt << endl ;\
} while(0)

HWTEST_F(PrintfFmtnSuite, PrintfFmtnTest, Function | MediumTest | Level2)
{
    char buf[1024];
	int ret;
	int i;
	long l;
	long long ll;
	short h;
	size_t z;
	uintmax_t j;

	T(i,    "%n",   "%d");
	T(l,   "%ln",  "%ld");
	T(ll, "%lln", "%lld");
	T(h,   "%hn",   "%d");
	T(z,   "%zn",  "%zd");
	T(j,   "%jn",  "%jd");
}
