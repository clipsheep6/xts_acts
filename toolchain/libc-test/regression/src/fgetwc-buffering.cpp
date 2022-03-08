// decode across buffer boundary
#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "test.h"

#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "FgetwcBufferingSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  FgetwcBufferingSuite
*/

using namespace std;
using namespace testing::ext;
class FgetwcBufferingSuite: public testing::Test {
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

/**if (!(c)) t_error("%s failed\n", #c); if (!(c)) t_error(#c" failed\n");
 * @tc.name      : FgetwcBufferingSuite001
 * @tc.desc      : Test FgetwcBufferingSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define A(c) do { EXPECT_FALSE(!(c)) << #c << " failed" << endl;} while(0)

HWTEST_F(FgetwcBufferingSuite, FgetwcBufferingTest, Function | MediumTest | Level2)
{
    t_setutf8();

	int p[2];
	A(pipe(p) == 0);
	A(write(p[1], "x\340\240", 3) == 3);
	A(dup2(p[0], 0) == 0);
	wint_t wc;
	wc = fgetwc(stdin);
	A(wc == 'x');
	A(write(p[1], "\200", 1) == 1);
	close(p[1]);

	wc = fgetwc(stdin);
	if (wc != 0x800)
		t_error("wanted 0x800, got 0x%x\n", (unsigned)wc);

	errno = 0;
	wc = fgetwc(stdin);
	if (wc != WEOF)
		t_error("wanted WEOF, got 0x%x\n", (unsigned)wc);
	if (errno != 0)
		t_error("wanted errno==0, got %d (%s)\n", errno, strerror(errno));
	A(feof(stdin)!=0);
	A(ferror(stdin)==0);
}
