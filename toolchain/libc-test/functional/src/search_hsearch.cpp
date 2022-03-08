#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>
#include <errno.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SearchHsearchSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SearchHsearchSuite
*/

using namespace std;
using namespace testing::ext;
class SearchHsearchSuite: public testing::Test {
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
 * @tc.name      : SearchHsearchSuite001
 * @tc.desc      : Test SearchHsearchSuite001 3 items whth async flush
 * @tc.level     : Level 1
  */
#define set(k,v) do{ \
	e = hsearch((ENTRY){.key = k, .data = (void*)v}, ENTER); \
	EXPECT_FALSE(!e || strcmp(e->key, k) != 0) << "hsearch ENTER " << k << " " << v << " failed" << endl;\
}while(0)

#define get(k) hsearch((ENTRY){.key = k, .data = 0}, FIND)

#define getdata(e) ((intptr_t)(e)->data)

HWTEST_F(SearchHsearchSuite, SearchHsearchTest, Function | MediumTest | Level2)
{
    ENTRY *e;


	EXPECT_FALSE(hcreate(-1) || errno != ENOMEM) << "hcreate((size_t)-1) should fail with ENOMEM got " << strerror(errno) << endl;

	EXPECT_FALSE(!hcreate(13)) << "hcreate(13) failed" << endl;
	set((char *)"", 0);
	set((char *)"a", 1);
	set((char *)"b", 2);
	set((char *)"abc", 3);
	set((char *)"cd", 4);
	set((char *)"e", 5);
	set((char *)"ef", 6);
	set((char *)"g", 7);
	set((char *)"h", 8);
	set((char *)"iiiiiiiiii", 9);

	EXPECT_FALSE(!get((char *)"a")) << "hsearch FIND a failed" << endl;
	EXPECT_FALSE(get((char *)"c")) << "hsearch FIND c should fail" << endl;

	set((char *)"g", 10);
	EXPECT_FALSE(e && getdata(e) != 7) << "hsearch ENTER g 10 returned data " << getdata(e) << ", wanted 7" << endl;
	set((char *)"g", 10);
	EXPECT_FALSE(e && getdata(e) != 7) << "hsearch ENTER g 10 returned data " << getdata(e) << ", wanted 7" << endl;
	set((char *)"j", 10);
	EXPECT_TRUE(e && getdata(e) != 7) << "hsearch ENTER j 10 returned data " << getdata(e) << ", wanted 10" <<endl;
	hdestroy();
}
