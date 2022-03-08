#include <string.h>
#include "gtest/gtest.h"
#include "test.h"

/**  
* @brief  register a test suit named "StringStrchrSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StringStrchrSuite
*/

using namespace std;
using namespace testing::ext;
class StringStrchrSuite: public testing::Test {
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
 * @tc.name      : StringStrchrSuite001
 * @tc.desc      : Test StringStrchrSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
static char buf[512];

static void *aligned(void *p)
{
	return (void*)(((uintptr_t)p + 63) & -64);
}

static void *aligncpy(void *p, size_t len, size_t a)
{
	return memcpy((char*)aligned(buf)+a, p, len);
}

void N(char *s,char c) 
{ 
	int align; 
	for (align=0; align<8; align++) { 
		char *p = (char *)aligncpy(s, sizeof s, align); 
		char *q = strchr(p, c); 
		// if (q)
		// 	t_error("with align=%d returned str+%d, wanted 0\n",align, q-p);//strchr(%s,%s)  #s, #c, 
		EXPECT_FALSE(q);
	} 
}

void T(char *s,char c,int n)
{
	int align;
	for (align=0; align<8; align++) {
		char *p = (char *)aligncpy((void *)s, sizeof s, align);
		char *q = strchr(p, c);
		// if (q == 0)
		// 	t_error("align=%d returned 0, wanted str+%d\n",  align, n);//strchr(%s,%s) with #s, #c,
		// else if (q - p != n)
		// 	t_error("align=%d returned str+%d, wanted str+%d\n", align, q-p, n);//strchr(%s,%s) with #s, #c, 
		EXPECT_STRNE(q,NULL);
		EXPECT_EQ(q-p , n);
	}
}

HWTEST_F(StringStrchrSuite, StringStrchrTest, Function | MediumTest | Level2)
{
    int i;
	char a[128];
	char s[256];

	for (i = 0; i < 128; i++)
		a[i] = (i+1) & 127;
	for (i = 0; i < 256; i++)
		*((unsigned char*)s+i) = i+1;

	N((char *)"\0aaa", 'a');
	N((char *)"a\0bb", 'b');
	N((char *)"ab\0c", 'c');
	N((char *)"abc\0d", 'd');
	N((char *)"abc abc\0x", 'x');
	N(a, 128);
	N(a, 255);

	T((char *)"", 0, 0);
	T((char *)"a", 'a', 0);
	T((char *)"a", (char)('a'+256), 0);
	T((char *)"a", 0, 1);
	T((char *)"abb", 'b', 1);
	T((char *)"aabb", 'b', 2);
	T((char *)"aaabb", 'b', 3);
	T((char *)"aaaabb", 'b', 4);
	T((char *)"aaaaabb", 'b', 5);
	T((char *)"aaaaaabb", 'b', 6);
	T((char *)"abc abc", 'c', 2);
	T(s, 1, 0);
	T(s, 2, 1);
	T(s, 10, 9);
	T(s, 11, 10);
	T(s, 127, 126);
	T(s, 128, 127);
	T(s, 255, 254);
	T(s, 0, 255);

}
