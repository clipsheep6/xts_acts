#include <stdlib.h>
#include <string.h>
#include <libgen.h>
#include "gtest/gtest.h"

#define T(path, want) do {                                                                                                  \
    char tmp[100];                                                                                                          \
    char *got = dirname(strcpy(tmp, path));                                                                                 \
    EXPECT_EQ(0, strcmp(want, got)) << "dirname(\"" << path << "\") got \"" << got << "\" want \"" << want << "\"" << endl; \
} while(0)

using namespace std;
using namespace testing::ext;
class DirnameSuite : public testing::Test {};

/**
 * @tc.name      : DirnameTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(DirnameSuite, DirnameTest, Function | MediumTest | Level2)
{

    EXPECT_EQ(strcmp(dirname(0), "."), 0) << "dirname(0) returned \"" << dirname(0) << "\"; expected \".\"" << endl;
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