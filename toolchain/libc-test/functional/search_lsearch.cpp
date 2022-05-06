#include <cstring>
#include <search.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class SearchIsearch : public testing::Test {};

static char tab[100][80];
static size_t nel;

static int  W = 80;

static void *get(const char *k)
{
    return lfind(k, tab, &nel, W, reinterpret_cast<int (*)(const void *, const void *)>(strcmp));
}

static void set_str(const char *k)
{
    void *r = lsearch(k, tab, &nel, W, reinterpret_cast<int (*)(const void *, const void *)>(strcmp));
    EXPECT_EQ(0, strcmp(reinterpret_cast<const char *>(r), k));
}

/**
 * @tc.name      : SearchIsearchTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SearchIsearch, SearchIsearchTest, Function | MediumTest | Level2)
{
    size_t n;

    set_str("");
    set_str("a");
    set_str("b");
    set_str("abc");
    set_str("cd");
    set_str("e");
    set_str("ef");
    set_str("g");
    set_str("h");
    set_str("iiiiiiiiii");
    EXPECT_TRUE(get("a"));
    EXPECT_FALSE(get("c"));
    n = nel;
    set_str(const_cast<char*>("g"));
    EXPECT_EQ(n, nel);
    n = nel;
    set_str(const_cast<char*>("j"));
    EXPECT_EQ(nel, n + 1);
}
