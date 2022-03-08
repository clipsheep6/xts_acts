#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "DirnameSuite001"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  DirnameSuite001
*/

using namespace std;
using namespace testing::ext;
class DirnameSuite: public testing::Test {
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
 * @tc.name      : DirnameSuite001
 * @tc.desc      : Test DirnameSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
// if (strcmp(want, got) != 0) \
// 		t_error("dirname(\"%s\") got \"%s\" want \"%s\"\n", path, got, want); 
#define T(path, want) \
{ \
	char tmp[100]; \
	char *got = dirname(strcpy(tmp, path)); \
	EXPECT_EQ(0 , strcmp(want, got)) << "dirname(\"" << path << "\") got \"" << got << "\" want \"" << want << "\"" << endl;\
}


HWTEST_F(DirnameSuite, DirnameSuite001, Function | MediumTest | Level2)
{
   if (strcmp(dirname(0), ".") != 0)
		t_error("dirname(0) returned \"%s\"; expected \".\"\n", dirname(0));
	T("", ".");
	T("/usr/lib", "/usr");
	T("/usr/", "/");
	T("usr", ".");
	T("usr/", ".");
	T("/", "/");
	T("///", "/");
	T(".", ".");
	T("..", ".");
}