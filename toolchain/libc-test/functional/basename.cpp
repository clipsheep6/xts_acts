#include <cstring>
#include <libgen.h>

#include "gtest/gtest.h"

#define T(path, want) do {                                                      \
    char tmp[100];                                                              \
    char *got = basename(strcpy(tmp, path));                                    \
    EXPECT_EQ(0, strcmp(want, got)) << "basename(\""                            \
        << path << "\") got \"" << got << "s\" want \"" << want << "\"" << endl;\
} while(0)

using namespace std;
using namespace testing::ext;
class BaseName : public testing::Test {};

/**
 * @tc.name      : BaseNameTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(BaseName, BaseNameTest, Function | MediumTest | Level2)
{
    EXPECT_EQ(0, strcmp(basename(0), ".")) 
        << "basename(0) returned \"" << basename(0) << "\"; expected \".\"" << endl;
    T("", ".");
    T("/usr/lib", "lib");
    T("/usr/", "usr");
    T("usr/", "usr");
    T("/", "/");
    T("///", "/");
    T("//usr//lib//", "lib");
    T(".", ".");
    T("..", "..");
}
