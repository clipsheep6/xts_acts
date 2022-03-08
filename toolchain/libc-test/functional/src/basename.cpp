#include <string.h>
#include <libgen.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "BaseNameSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  BaseNameSuite
*/

using namespace std;
using namespace testing::ext;
class BaseNameSuite: public testing::Test {
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
 * @tc.name      : BaseNameSuite001
 * @tc.desc      : Test BaseNameSuite001 3 items whth async flush
 * @tc.level     : Level 2
 */
#define T(path, want) \
{ \
	char tmp[100]; \
	char *got = basename(strcpy(tmp, path)); \
	EXPECT_EQ(0 , strcmp(want, got)) << "basename(\"" << path << "\") got \"" << got << "s\" want \"" << want << "\"" << endl;\
}

HWTEST_F(BaseNameSuite, BaseNameSuite001, Function | MediumTest | Level2)
{
    if (strcmp(basename(0), ".") != 0)
		t_error("basename(0) returned \"%s\"; expected \".\"\n", basename(0));
	T("", ".");
	T("/usr/lib", "lib");
	T("/usr/", "usr");
	T("usr/", "usr");
	T("/", "/");
	T("///", "/");
	T("//usr//lib//", "lib");
	T(".", ".");
	T("..", "..");
}
