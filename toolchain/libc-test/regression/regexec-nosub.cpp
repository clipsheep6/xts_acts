#include <regex.h>
#include <stdio.h>
#include "gtest/gtest.h"
/**
 * @brief  register a test suit named "RegexecNsubSuite"
 * @param  test subsystem name is libc
 * @param  example module name is  Functional
 * @param  test suit name is  RegexecNsubSuite
 */

using namespace std;
using namespace testing::ext;
class RegexecNsubSuite : public testing::Test
{
protected:
    // Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void)
    {
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void)
    {
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
 * @tc.name      : RegexecNsubTest
 * @tc.desc      : Test RegexecNsubTest
 * @tc.level     : Level 2
 */

HWTEST_F(RegexecNsubSuite, RegexecNsubTest, Function | MediumTest | Level2)
{
    regex_t re;
    int r;

    r = regcomp(&re, "abc", REG_NOSUB);
    printf("line:%d r:%d\n",__LINE__,r);
    EXPECT_FALSE(r) << "regcomp failed: " << r << "\n"
                   << endl;
    r = regexec(&re, "zyx abc", 1, 0, 0);
    EXPECT_NE(REG_NOMATCH, r) << "regexec failed to match" << endl;
    EXPECT_FALSE(r) << "regexec returned invalid code: " << r << endl;
    regfree(&re);
}
