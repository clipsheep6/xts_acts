#include <string.h>
#include <unistd.h>
#include "gtest/gtest.h"

#define TESTT(c)                                                                 \
    do {                                                                         \
        errno = 0;                                                               \
        EXPECT_FALSE(!(c)) << #c << " failed (errno = " << errno << ")" << endl; \
    } while (0)

using namespace std;
using namespace testing::ext;
class FdopenSuite : public testing::Test {};

/**
 * @tc.name      : FdopenTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(FdopenSuite, FdopenTest, Function | MediumTest | Level2)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
    char foo[6];
    int fd;
    FILE *f;

    TESTT((fd = mkstemp(tmp)) > 2);
    TESTT(write(fd, "hello", 6) == 6);
    TESTT(f = fdopen(fd, "rb"));
    if (f) {
        TESTT(ftello(f) == 6);
        TESTT(fseeko(f, 0, SEEK_SET) == 0);
        TESTT(fgets(foo, sizeof foo, f));
        EXPECT_EQ(strcmp(foo, "hello"), 0) << "fgets read back: \"" << foo << "\"; wanted: \"hello\"" << endl;
        fclose(f);
    }
    if (fd > 2)
        TESTT(unlink(tmp) != -1);
}