#include "gtest/gtest.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "test.h"
/**  
* @brief  register a test suit named "MemStreamSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  MemStreamSuite
*/

using namespace std;
using namespace testing::ext;
//namespace {
class MemStreamSuite: public testing::Test {
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
 * @tc.name      : MemStreamSuite001
 * @tc.desc      : Test MemStreamSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TESTT(r, f, x, m) do { \
	((r) = (f)) == (x) || (t_error("%s failed (" m ")\n", #f, r, x), 0); \
	EXPECT_EQ((i) , (x)); \
} while(0)

#define TEST_E(f) do {\
	(errno = 0);\
	EXPECT_TRUE(f) << #f << " failed (errno = " << errno << ")" << endl; \
} while (0)


#define TEST_S(s, x, m) EXPECT_TRUE(!strcmp((s),(x))) << "[" << s << "] != [" << x << "] (" << m << endl;

#define TEST_M(s, x, n, m) EXPECT_TRUE(!memcmp((s),(x),(n))) << "[" << s << "] != [" << x << "] (" << m << endl;

HWTEST_F(MemStreamSuite, MemStreamSuite001, Function | MediumTest | Level2)
{
    FILE *f;
	char *s;
	size_t l;
	char buf[100];
	int i;

	s = 0;
	TEST_E(f = open_memstream(&s, &l));
	TEST_E(putc('a', f) == 'a');
	TEST_E(putc('b', f) == 'b');
	TEST_E(putc('c', f) == 'c');
	TEST_E(!fflush(f));
	fclose(f);
	if (s) TEST_S(s, "abc", "wrong output");
	free(s);

	s = 0;
	TEST_E(f = open_memstream(&s, &l));
	TEST_E(fseek(f,1,SEEK_CUR)>=0);
	TEST_E(putc('q', f) == 'q');
	TEST_E(!fflush(f));
	if (s) TEST_M(s, "\0q", 3, "wrong output");
	TESTT(i, fseek(f,-3,SEEK_CUR), -1, "invalid seek allowed");
	TESTT(i, errno, EINVAL, "%d != %d");
	TESTT(i, ftell(f), 2, "%d != %d");
	TEST_E(fseek(f,-2,SEEK_CUR)>=0);
	TEST_E(putc('e', f) == 'e');
	TEST_E(!fflush(f));
	if (s) TEST_S(s, "eq", "wrong output");
	fclose(f);
	free(s);

	TEST_E(f = fmemopen(buf, 10, "r+"));
	TEST_E(fputs("hello", f) >= 0);
	TEST_E(fputc(0, f)==0);
	TEST_E(fseek(f, 0, SEEK_SET)>=0);
	i=0;
	TEST_E(fscanf(f, "hello%n", &i)==0);
	TESTT(i, i, 5, "%d != %d");
	TESTT(i, ftell(f), 5, "%d != %d");
	errno = 0;
	TESTT(i, fseek(f, 6, SEEK_CUR)<0, 1, "");
	TESTT(i, errno!=0, 1, "");
	TESTT(i, ftell(f), 5, "%d != %d");
	TEST_S(buf, "hello", "");
	fclose(f);

	TEST_E(f = fmemopen(buf, 10, "a+"));
	TESTT(i, ftell(f), 5, "%d != %d");
	TEST_E(fseek(f, 0, SEEK_SET)>=0);
	TESTT(i, getc(f), 'h', "%d != %d");
	TESTT(i, getc(f), 'e', "%d != %d");
	TESTT(i, getc(f), 'l', "%d != %d");
	TESTT(i, getc(f), 'l', "%d != %d");
	TESTT(i, getc(f), 'o', "%d != %d");
	TESTT(i, getc(f), EOF, "%d != %d");
	TEST_E(fseek(f, 6, SEEK_SET)>=0);
	TESTT(i, ftell(f), 6, "%d != %d");
	TESTT(i, getc(f), EOF, "%d != %d");
	TESTT(i, ftell(f), 6, "%d != %d");
	TEST_E(fseek(f, 0, SEEK_SET)>=0);
	TESTT(i, getc(f), 'h', "%d != %d");
	TEST_E(fseek(f, 0, SEEK_CUR)>=0);
	buf[7] = 'x';
	TEST_E(fprintf(f, "%d", i)==3);
	TEST_E(fflush(f)==0);
	TESTT(i, ftell(f), 8, "%d != %d");
	TEST_S(buf, "hello104", "");
	fclose(f);
}
