#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <wctype.h>
#include <stdlib.h>
#include <locale.h>
#include <langinfo.h>
#include <limits.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "ClocaleMbfuncsSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  ClocaleMbfuncsSuite
*/

using namespace std;
using namespace testing::ext;
class ClocaleMbfuncsSuite: public testing::Test {
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
 * @tc.name      : ClocaleMbfuncsSuite001
 * @tc.desc      : Test ClocaleMbfuncsSuite001 3 items whth async flush
 * @tc.level     : Level 2
 */


HWTEST_F(ClocaleMbfuncsSuite, ClocaleMbfuncsSuite001, Function | MediumTest | Level2)
{
    int i, j;
	mbstate_t st;//st2;
	wchar_t wc, map[257], wtmp[257];
	char s[MB_LEN_MAX*256];
	size_t rv;
	int c;
	int ni_errors=0;
    char tmp;
    const wchar_t *tmp2;
    const char *tmp3;

	setlocale(LC_CTYPE, "C");
	EXPECT_EQ(1 , MB_CUR_MAX) << "MB_CUR_MAX = " << (int)MB_CUR_MAX << ", expected 1" << endl;

	for (i=0; i<256; i++) {
		st = (mbstate_t){0};
        tmp = (char){i};
		EXPECT_EQ(!!i , mbrtowc(&wc, &tmp, 1, &st)) << "mbrtowc failed to convert byte " 
		<< hex << i << " to wchar_t" << endl;
		if ((map[i]=btowc(i)) == WEOF) {
			EXPECT_NE(WEOF , (map[i]=btowc(i))) << "btowc failed to convert byte " 
			<< hex << i << " to wchar_t" << endl;
			continue;
		}
		for (j=0; j<i; j++) {
			EXPECT_NE(map[j],map[i]) << "bytes " << hex << j << " and " << hex 
			<< i << " map to same wchar_t " << (unsigned)map[i] << endl;
		}
	}

	for (i=0; i<256; i++) {
		if (map[i]==WEOF) continue;
		EXPECT_EQ(i , wctob(map[i])) << "wctob failed to convert wchar_t " << hex 
		<< (unsigned)map[i] << " back to byte " << hex << i << endl;
	}

	/* covering whole 32-bit range would be too slow... maybe add random high tests? */
	for (i=0; i<0x110000; i++) {
		if (wcschr(map+1, i)) continue;
		EXPECT_FALSE((c=wctob(i)) != WEOF && ni_errors++ < 50) << "wctob accepted non-image wchar_t " 
		<< hex << i << " as byte " << hex << c << endl; 
		st = (mbstate_t){0};
		EXPECT_FALSE(wcrtomb(s, i, &st) != -1  && ni_errors++ < 50) << "wcrtomb accepted non-image wchar_t " << hex << i << endl;
	}
	EXPECT_GE(50 , ni_errors) << "additional " << ni_errors << " non-image errors (not printed)" << endl;

	map[256] = 0;
	st = (mbstate_t){0};
    tmp2 = (const wchar_t *){map+1};
	EXPECT_EQ((rv=wcsrtombs(s, &tmp2, sizeof s, &st)) , 255) << "wcsrtombs returned " << rv << ", expected 255" << endl;

    tmp3 = (const char *){s};
	EXPECT_EQ((rv=mbsrtowcs(wtmp, &tmp3, 256, &st)) , 255) << "mbsrtowcs returned " << rv << ", expected 255" << endl;
	EXPECT_FALSE(memcmp(map+1, wtmp, 256*sizeof(*map))) << "wcsrtombs/mbsrtowcs round trip failed" << endl;

	for (i=128; i<256; i++) {
		EXPECT_FALSE(iswalnum(map[i])) << "iswalnum returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswalpha(map[i])) << "iswalpha returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswblank(map[i])) << "iswblank returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswcntrl(map[i])) << "iswcntrl returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswdigit(map[i])) << "iswdigit returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswgraph(map[i])) << "iswgraph returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswlower(map[i])) << "iswlower returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswprint(map[i])) << "iswprint returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswpunct(map[i])) << "iswpunct returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswspace(map[i])) << "iswspace returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswupper(map[i])) << "iswupper returned true for " << map[i] << " (" << i << ")" << endl;
		EXPECT_FALSE(iswxdigit(map[i])) << "iswxdigit returned true for " << map[i] << " (" << i << ")" << endl;

	}

}
