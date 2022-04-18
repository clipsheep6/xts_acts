#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "gtest/gtest.h"

#define length(x) (sizeof(x) / sizeof *(x))

using namespace std;
using namespace testing::ext;
class Strtof : public testing::Test {};

static struct {
    char *s;
    float f;
} t[] = {
    // 2^-149 * 0.5 - eps
    {const_cast<char*>(".7006492321624085354618647916449580656401309709382578858785341419448955413429303e-45"), 0},
    // 2^-149 * 0.5 + eps
    {const_cast<char*>(".7006492321624085354618647916449580656401309709382578858785341419448955413429304e-45"), 0x1p-149},
    // 2^-149 * 0.5 - eps
    {const_cast<char*>(".2101947696487225606385594374934874196920392912814773657635602425834686624028790e-44"), 0x1p-149},
    // 2^-149 * 0.5 + eps
    {const_cast<char*>(".2101947696487225606385594374934874196920392912814773657635602425834686624028791e-44"), 0x1p-148},
    // 2^-126 + 2^-150 - eps
    {const_cast<char*>(".1175494420887210724209590083408724842314472120785184615334540294131831453944281e-37"), 0x1p-126},
    // 2^-126 + 2^-150 + eps
    {const_cast<char*>(".1175494420887210724209590083408724842314472120785184615334540294131831453944282e-37"), 0x1.000002p-126},
    // 2^128 - 2^103 - eps
    {const_cast<char*>("340282356779733661637539395458142568447.9999999999999999999"), 0x1.fffffep127},
    // 2^128 - 2^103
    {const_cast<char*>("340282356779733661637539395458142568448"), INFINITY},
};

/**
 * @tc.name      : StrtofTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Strtof, StrtofTest, Function | MediumTest | Level2)
{
    int i;
    float x;
    char *p;

    for (i = 0; i < length(t); i++) {
        x = strtof(t[i].s, &p);
        EXPECT_EQ(x, t[i].f) << "strtof(\"" << t[i].s << "\") want " << t[i].f << " got " << x << endl;
    }
}
