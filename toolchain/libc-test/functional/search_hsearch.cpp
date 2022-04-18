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

    EXPECT_FALSE(hcreate(-1) || errno != ENOMEM) 
        << "hcreate((size_t)-1) should fail with ENOMEM got " << strerror(errno) << endl;
    EXPECT_FALSE(!hcreate(13)) << "hcreate(13) failed" << endl;
    set(const_cast<char*>(""), 0);
    set(const_cast<char*>("a"), 1);
    set(const_cast<char*>("b"), 2);
    set(const_cast<char*>("abc"), 3);
    set(const_cast<char*>("cd"), 4);
    set(const_cast<char*>("e"), 5);
    set(const_cast<char*>("ef"), 6);
    set(const_cast<char*>("g"), 7);
    set(const_cast<char*>("h"), 8);
    set(const_cast<char*>("iiiiiiiiii"), 9);

    EXPECT_FALSE(!get(const_cast<char*>("a"))) << "hsearch FIND a failed" << endl;
    EXPECT_FALSE(get(const_cast<char*>("c"))) << "hsearch FIND c should fail" << endl;

    set(const_cast<char*>("g"), 10);
    EXPECT_FALSE(e && getdata(e) != 7) << "hsearch ENTER g 10 returned data " << getdata(e) << ", wanted 7" << endl;
    set(const_cast<char*>("g"), 10);
    EXPECT_FALSE(e && getdata(e) != 7) << "hsearch ENTER g 10 returned data " << getdata(e) << ", wanted 7" << endl;
    set(const_cast<char*>("j"), 10);
    EXPECT_TRUE(e && getdata(e) != 7) << "hsearch ENTER j 10 returned data " << getdata(e) << ", wanted 10" << endl;
    hdestroy();
}
