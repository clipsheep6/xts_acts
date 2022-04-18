#include <cstring>
#include <search.h>
#include "gtest/gtest.h"

#define W 80

#define get(k) lfind(k, tab, &nel, W, (int (*)(const void *, const void *))strcmp)

using namespace std;
using namespace testing::ext;
class SearchIsearch : public testing::Test {};

static char tab[100][W];
static size_t nel;

void set_str(char *k)
{
    void *r = lsearch(k, tab, &nel, W, (int (*)(const void *, const void *))strcmp);
    EXPECT_EQ(0, strcmp((const char *)r, k));
}

/**
 * @tc.name      : SearchIsearchTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SearchIsearch, SearchIsearchTest, Function | MediumTest | Level2)
{
    size_t n;

    set_str(const_cast<char*>(""));
    set_str(const_cast<char*>("a"));
    set_str(const_cast<char*>("b"));
    set_str(const_cast<char*>("abc"));
    set_str(const_cast<char*>("cd"));
    set_str(const_cast<char*>("e"));
    set_str(const_cast<char*>("ef"));
    set_str(const_cast<char*>("g"));
    set_str(const_cast<char*>("h"));
    set_str(const_cast<char*>("iiiiiiiiii"));
    EXPECT_TRUE(get("a"));
    EXPECT_FALSE(get("c"));
    n = nel;
    set_str(const_cast<char*>("g"));
    EXPECT_EQ(n, nel);
    n = nel;
    set_str(const_cast<char*>("j"));
    EXPECT_EQ(nel, n + 1);
}
