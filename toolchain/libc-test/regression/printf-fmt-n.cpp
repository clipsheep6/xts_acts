#include <cstdint>
#include <cstdio>

#include "gtest/gtest.h"

#define T(n, nfmt, fmt) do {                                                         \
    EXPECT_FALSE((ret = sprintf(buf, "%256d%d" nfmt "%d", 1, 2, &n, 3)) != 258)      \
        << "expexted sprintf to write 258 chars, got " << (ret) << endl;             \
    EXPECT_EQ(257, n) << (n) << " format failed: wanted 257, got " << (fmt) << endl; \
} while (0)
    
using namespace std;
using namespace testing::ext;
class PrintfFmtn : public testing::Test {};

/**
 * @tc.name      : PrintfFmtnTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(PrintfFmtn, PrintfFmtnTest, Function | MediumTest | Level2)
{
    char buf[1024];
    int ret;
    int i;
    long l;
    long long ll;
    short h;
    size_t z;
    uintmax_t j;

    T(i, "%n", "%d");
    T(l, "%ln", "%ld");
    T(ll, "%lln", "%lld");
    T(h, "%hn", "%d");
    T(z, "%zn", "%zd");
    T(j, "%jn", "%jd");
}
