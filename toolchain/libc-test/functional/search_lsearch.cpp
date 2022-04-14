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
    EXPECT_EQ(n, nel);
    n = nel;
    set_str((char *)"j");
    EXPECT_EQ(nel, n + 1);
}
