// commit: 63f4b9f18f3674124d8bcb119739fec85e6da005
// uselocale(0) should not change the current locale
#include <locale.h>
#include "test.h"
#include "gtest/gtest.h"
#include <stdio.h>
/**  
* @brief  register a test suit named "Uselocale0Suite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  Uselocale0Suite
*/

using namespace std;
using namespace testing::ext;
class Uselocale0Suite: public testing::Test {
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
 * @tc.name      : Uselocale0Suite001
 * @tc.desc      : Test Uselocale0Suite001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(Uselocale0Suite,Uselocale0Test, Function | MediumTest | Level2)
{
    locale_t c = newlocale(LC_ALL_MASK, "C", 0);

    ASSERT_FALSE(!c) << "newlocale failed" << endl;
    EXPECT_FALSE(!uselocale(c)) << "uselocale(c) failed" << endl;

	locale_t l1 = uselocale(0);
    EXPECT_EQ(c,l1) << "uselocale failed to set locale: """ << (void*)l1 << " != " << (void*)c <<endl;

	locale_t l2 = uselocale(0);
    EXPECT_EQ(l2 , l1) << "uselocale(0) changed locale: """ << (void*)l2 << " != " << (void*)l1 << endl;
}
