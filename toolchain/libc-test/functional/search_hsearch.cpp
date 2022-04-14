#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <search.h>

#include "gtest/gtest.h"

#define set(k, v) do {                                                                                    \
    e = hsearch((ENTRY){.key = k, .data = (void *)v}, ENTER);                                             \
    EXPECT_FALSE(!e || strcmp(e->key, k) != 0) << "hsearch ENTER " << k << " " << v << " failed" << endl; \
} while (0)

#define get(k) hsearch((ENTRY){.key = k, .data = 0}, FIND)

#define getdata(e) ((intptr_t)(e)->data)

using namespace std;
using namespace testing::ext;
class SearchHsearch : public testing::Test {};

/**
 * @tc.name      : SearchHsearchTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SearchHsearch, SearchHsearchTest, Function | MediumTest | Level2)
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
    EXPECT_TRUE(e && getdata(e) != 7) << "hsearch ENTER j 10 returned data " << getdata(e) << ", wanted 10" << endl;
    hdestroy();
}
