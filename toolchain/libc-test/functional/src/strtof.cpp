#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "StrtofSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  StrtofSuite
*/

using namespace std;
using namespace testing::ext;
class StrtofSuite: public testing::Test {
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
 * @tc.name      : StrtofSuite001
 * @tc.desc      : Test StrtofSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
/* r = place to store result
 * f = function call to test (or any expression)
 * x = expected result
 * m = message to print on failure (with formats for r & x)
 */
#define length(x) (sizeof(x) / sizeof *(x))

static struct {
	char *s;
	float f;
} t[] = {
	// 2^-149 * 0.5 - eps
	{(char *)".7006492321624085354618647916449580656401309709382578858785341419448955413429303e-45", 0},
	// 2^-149 * 0.5 + eps
	{(char *)".7006492321624085354618647916449580656401309709382578858785341419448955413429304e-45", 0x1p-149},
	// 2^-149 * 0.5 - eps
	{(char *)".2101947696487225606385594374934874196920392912814773657635602425834686624028790e-44", 0x1p-149},
	// 2^-149 * 0.5 + eps
	{(char *)".2101947696487225606385594374934874196920392912814773657635602425834686624028791e-44", 0x1p-148},
	// 2^-126 + 2^-150 - eps
	{(char *)".1175494420887210724209590083408724842314472120785184615334540294131831453944281e-37", 0x1p-126},
	// 2^-126 + 2^-150 + eps
	{(char *)".1175494420887210724209590083408724842314472120785184615334540294131831453944282e-37", 0x1.000002p-126},
	// 2^128 - 2^103 - eps
	{(char *)"340282356779733661637539395458142568447.9999999999999999999", 0x1.fffffep127},
	// 2^128 - 2^103
	{(char *)"340282356779733661637539395458142568448", INFINITY},
};

HWTEST_F(StrtofSuite, StrtofTest, Function | MediumTest | Level2)
{
    int i;
	float x;
	char *p;

	for (i = 0; i < length(t); i++) {
		x = strtof(t[i].s, &p);
		EXPECT_EQ(x , t[i].f);//<< "strtof(\"" << t[i].s << "\") want " << t[i].f << " got " << x << endl;
		if (x != t[i].f)
			t_error("strtof(\"%s\") want %a got %a\n", t[i].s, t[i].f, x);
	}
}
