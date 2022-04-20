#include <cstdlib>
#include <cstring>
#include <libgen.h>
#include <securec.h>

#include "gtest/gtest.h"

#define T(path, want) do {                                                      \
    char tmp[100];                                                              \
    strcpy_s(tmp, strlen(path)+1, path);                                        \
    char *got = dirname(tmp);                                                   \
    EXPECT_EQ(0, strcmp(want, got)) << "dirname(\""                             \
        << path << "\") got \"" << got << "\" want \"" << want << "\"" << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class Dirname : public testing::Test {};

/**
 * @tc.name      : DirnameTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Dirname, DirnameTest, Function | MediumTest | Level2)
{

    EXPECT_EQ(strcmp(dirname(0), "."), 0) 
        << "dirname(0) returned \"" << dirname(0) << "\"; expected \".\"" << endl;
    T("", ".");
    T("/usr/lib", "/usr");
    T("/usr/", "/");
    T("usr", ".");
    T("usr/", ".");
    T("/", "/");
    T("///", "/");
    T(".", ".");
    T("..", ".");
}