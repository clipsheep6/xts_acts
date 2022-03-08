#include <stddef.h>
#include <string.h>
#include "gtest/gtest.h"
#include "test.h"

/**  
* @brief  register a test suit named "StringStrcspnSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StringStrcspnSuite
*/

using namespace std;
using namespace testing::ext;
class StringStrcspnSuite: public testing::Test {
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
 * @tc.name      : StringStrcspnSuite001
 * @tc.desc      : Test StringStrcspnSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(s, c, n) { \
	char *p = s; \
	char *q = c; \
	size_t r = strcspn(p, q); \
	EXPECT_EQ(r , n) << "strcspn(" << #s << "," << #c << ") returned " << (unsigned long)r << ", wanted " << (unsigned long)(n) << endl; \
}

HWTEST_F(StringStrcspnSuite, StringStrcspnTest, Function | MediumTest | Level2)
{
    int i;
	char a[128];
	char s[256];

	for (i = 0; i < 128; i++)
		a[i] = (i+1) & 127;
	for (i = 0; i < 256; i++)
		*((unsigned char*)s+i) = i+1;

	T((char *)"", (char *)"", 0)
	T((char *)"a", (char *)"", 1)
	T((char *)"", (char *)"a", 0)
	T((char *)"abc", (char *)"cde", 2)
	T((char *)"abc", (char *)"ccc", 2)
	T((char *)"abc", a, 0)
	T((char *)"\xff\x80 abc", a, 2)
	T(s, (char *)"\xff", 254)

}
