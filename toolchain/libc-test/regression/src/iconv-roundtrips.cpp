// commit: b7bfb5c3a8330002250f304cb5deb522fa054eae
// fix iconv conversions for iso88592-iso885916
#include <iconv.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "iconvRoundtripsSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  iconvRoundtripsSuite
*/

using namespace std;
using namespace testing::ext;
class iconvRoundtripsSuite: public testing::Test {
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
 * @tc.name      : iconvRoundtripsSuite001
 * @tc.desc      : Test iconvRoundtripsSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(iconvRoundtripsSuite, IconvRoundtripsTest, Function | MediumTest | Level2)
{
    static char *test_charsets[] = {
		(char *)"iso-8859-1",
		(char *)"iso-8859-2",
		(char *)"iso-8859-4",
		(char *)"iso-8859-5",
		(char *)"iso-8859-9",
		(char *)"iso-8859-10",
		(char *)"iso-8859-13",
		(char *)"iso-8859-14",
		(char *)"iso-8859-15",
		(char *)"iso-8859-16",
		0
	};
	char all_codepoints[256];
	int i;

	for (i=0; i<256; i++)
		all_codepoints[i] = 255-i;

	for (i=0; test_charsets[i]; i++) {
		iconv_t there = iconv_open((char *)"UTF-8", test_charsets[i]);
		if (there == (iconv_t)-1) continue;
		iconv_t andback = iconv_open(test_charsets[i], (char *)"UTF-8");
		if (andback == (iconv_t)-1) {
			iconv_close(there);
			continue;
		}
		char u8buf[1024];
		char buf[256];
		size_t u8rem = sizeof u8buf;
        char *tmp1 = (char *){all_codepoints};
        size_t tmp2 = (size_t){sizeof all_codepoints};
        char *tmp3 = (char *){u8buf};
		int r1 = (int)iconv(there, &tmp1, &tmp2, &tmp3, &u8rem);
		size_t u8len = sizeof u8buf - u8rem;
        tmp1 = (char *){u8buf};
        tmp2 = (size_t){u8len};
        tmp3 = (char *){buf};
        size_t tmp4 = (size_t){sizeof buf};
		int r2 = (int)iconv(andback, &tmp1, &tmp2, &tmp3, &tmp4);

        EXPECT_FALSE(r1) << "got " << r1 << " converting from " << test_charsets[i] << endl;
        EXPECT_FALSE(r2) << "got " << r2 << " converting back to " << test_charsets[i] << endl;

        EXPECT_FALSE(memcmp(all_codepoints, buf, sizeof buf)) << "round trip corrupted " 
        << test_charsets[i] << " characters" << endl;

		iconv_close(there);
		iconv_close(andback);
	}
}
