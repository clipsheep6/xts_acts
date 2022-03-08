#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <string.h>
#include <search.h>
//#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SearchIsearchSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SearchIsearchSuite
*/

using namespace std;
using namespace testing::ext;
class SearchIsearchSuite: public testing::Test {
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
 * @tc.name      : SearchIsearchSuite001
 * @tc.desc      : Test SearchIsearchSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define W 80
static char tab[100][W];
static size_t nel;

void set_str(char *k)
{
	void *r = lsearch(k, tab, &nel, W, (int(*)(const void*,const void*))strcmp);
	EXPECT_EQ(0 , strcmp((const char *)r, k));
}

#define get(k) lfind(k, tab, &nel, W, (int(*)(const void*,const void*))strcmp)

HWTEST_F(SearchIsearchSuite, SearchIsearchTest, Function | MediumTest | Level2)
{
    size_t n;

	set_str((char *)"");
	set_str((char *)"a");
	set_str((char *)"b");
	set_str((char *)"abc");
	set_str((char *)"cd");
	set_str((char *)"e");
	set_str((char *)"ef");
	set_str((char *)"g");
	set_str((char *)"h");
	set_str((char *)"iiiiiiiiii");
	EXPECT_TRUE(get("a"));
	EXPECT_FALSE(get("c"));
	n = nel;
	set_str((char *)"g");
	EXPECT_EQ(n , nel);
	n = nel;
	set_str((char *)"j");
	EXPECT_EQ(nel , n+1);
}
