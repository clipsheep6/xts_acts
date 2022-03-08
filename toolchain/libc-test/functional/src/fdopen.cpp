#include <string.h>
#include <unistd.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FdopenSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  FdopenSuite
*/

using namespace std;
using namespace testing::ext;
class FdopenSuite: public testing::Test {
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
 * @tc.name      : FdopenSuite001
 * @tc.desc      : Test FdopenSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
// if (!(c)) \
// 		t_error("%s failed (errno = %d)\n", #c, errno); 
#define TESTT(c) do { \
	errno = 0; \
	EXPECT_FALSE(!(c)) << #c << " failed (errno = " << errno << ")" << endl;\
} while(0)


HWTEST_F(FdopenSuite, FdopenSuite001, Function | MediumTest | Level2)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
	char foo[6];
	int fd;
	FILE *f;

	TESTT((fd = mkstemp(tmp)) > 2);
	TESTT(write(fd, "hello", 6)==6);
	TESTT(f = fdopen(fd, "rb"));
	if (f) {
		TESTT(ftello(f)==6);
		TESTT(fseeko(f, 0, SEEK_SET)==0);
		TESTT(fgets(foo, sizeof foo, f));
		if (strcmp(foo,"hello") != 0)
			t_error("fgets read back: \"%s\"; wanted: \"hello\"\n", foo);
		fclose(f);
	}
	if (fd > 2)
		TESTT(unlink(tmp) != -1);
}