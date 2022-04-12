#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class EnvSuite : public testing::Test {};

extern char **environ;

/**
 * @tc.name      : EnvTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(EnvSuite, EnvTest, Function | MediumTest | Level2)
{
    char *s;
    int r;

    EXPECT_FALSE(!environ) << "environ is NULL" << endl;
    EXPECT_FALSE(clearenv() || (environ && *environ)) << "clrearenv: " << strerror(errno) << endl;
    EXPECT_FALSE(putenv((char *)"TEST=1")) << "putenv: "
                                           << "strerror(errno)" << endl;
    EXPECT_FALSE(strcmp(environ[0], "TEST=1") != 0) << "putenv failed: environ[0]: " << environ[0] << ", wanted \"TEST=1\"" << endl;
    EXPECT_FALSE((s = environ[1])) << "environ[1]: " << s << ", wanted 0" << endl;
    EXPECT_FALSE(!(s = getenv("TEST"))) << "getenv(\"TEST\"): 0, wanted \"1\"" << endl;

    EXPECT_EQ(0, strcmp(s, "1")) << "getenv(\"TEST\"): \"" << s << "\", wanted \"1\"" << endl;
    EXPECT_FALSE(unsetenv("TEST")) << "unsetenv: " << strerror(errno) << endl;
    EXPECT_FALSE((s = *environ)) << "*environ: " << s << " != 0" << endl;
    EXPECT_FALSE((s = getenv("TEST"))) << "getenv(\"TEST\"): " << s << ", wanted 0" << endl;
    errno = 0;
    EXPECT_FALSE(setenv("TEST", "2", 0)) << "setenv: " << strerror(errno) << endl;
    EXPECT_EQ(0, strcmp(s = getenv("TEST"), "2")) << "getenv(\"TEST\"): \""
                                                  << "\", wanted \"2\"" << endl;
    EXPECT_EQ(0, strcmp(environ[0], "TEST=2")) << "setenv failed: environ[0]: " << environ[0] << ", wanted \"TEST=2\"" << endl;
    errno = 0;
    EXPECT_FALSE(setenv("TEST", "3", 0)) << "setenv: " << strerror(errno) << endl;
    EXPECT_EQ(0, strcmp(s = getenv("TEST"), "2")) << "getenv(\"TEST\"): \"" << s << "\", wanted \"2\"" << endl;
    errno = 0;
    EXPECT_FALSE(setenv("TEST", "3", 1)) << "setenv: " << strerror(errno) << endl;
    EXPECT_EQ(0, strcmp(s = getenv("TEST"), "3")) << "getenv(\"TEST\"): \"" << s << "\", wanted \"3\"" << endl;
    /* test failures */
    errno = 0;
    EXPECT_FALSE((r = setenv("", "", 0)) != -1 || errno != EINVAL) << "setenv(\"\",\"\",0): " << r
        << ", errno: " << errno << " (" << strerror(errno) << "), wanted -1, " << EINVAL << " (EINVAL)" << endl;
}
