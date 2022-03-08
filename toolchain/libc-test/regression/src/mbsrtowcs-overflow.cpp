// commit 211264e46a2f1bc382a84435e904d1548de672b0 2013-09-27
// mbsrtowcs should not write outside the ws array
#include <wchar.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MbsrtowcsOverflowSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MbsrtowcsOverflowSuite
*/

using namespace std;
using namespace testing::ext;
class MbsrtowcsOverflowSuite: public testing::Test {
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
 * @tc.name      : MbsrtowcsOverflowSuite001
 * @tc.desc      : Test MbsrtowcsOverflowSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(MbsrtowcsOverflowSuite, MbsrtowcsOverflowTest, Function | MediumTest | Level2)
{
    wchar_t ws[] = L"XXXXX";
	const char *src = "abcd";
	const char *want = src + 4;
	size_t r;

	r = mbsrtowcs(ws, &src, 4, 0);
    EXPECT_EQ(4,r) << "mbsrtowcs(ws, &abcd, 4, 0) returned " << r << ", wanted 4" << endl;
    EXPECT_EQ(want,src) << "mbsrtowcs(ws, &abcd, 4, 0) set abcd to " << src << " wanted " << want << endl;
	if (wcscmp(ws, L"abcdX") != 0)
		t_error("ws is L\"%ls\", wanted L\"abcdX\"\n", ws);
    EXPECT_EQ(0,wcscmp(ws, L"abcdX")) << "ws is L\"" << ws << "\", wanted L\"abcdX\"" << endl;
}
