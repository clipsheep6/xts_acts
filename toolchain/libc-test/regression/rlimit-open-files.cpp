#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/resource.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class RlimitOpenFilesSuite : public testing::Test {};

/**
 * @tc.name      : RlimitOpenFilesTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(RlimitOpenFilesSuite, RlimitOpenFilesTest, Function | MediumTest | Level2)
{
    static const long lim = 42;
    static const int r = RLIMIT_NOFILE;
    struct rlimit rl;
    int fd, maxfd = 0;

    rl.rlim_max = lim;
    rl.rlim_cur = lim;
    EXPECT_FALSE(setrlimit(r, &rl)) << "setrlimit(" << r << ", " << lim << ") failed: " << strerror(errno) << endl;
    EXPECT_FALSE(getrlimit(r, &rl)) << "getrlimit(" << r << ") failed: " << strerror(errno) << endl;

    EXPECT_FALSE(rl.rlim_max != lim || rl.rlim_cur != lim) << "getrlimit " << r << " says cur="
                                                           << rl.rlim_cur << ",max=" << rl.rlim_max << " after setting the limit to " << lim << endl;

    while ((fd = dup(1)) != -1)
        if (fd > maxfd)
            maxfd = fd;
    EXPECT_EQ(EMFILE, errno) << "dup(1) failed with " << strerror(errno) << ", wanted EMFILE" << endl;
    EXPECT_EQ(maxfd + 1, lim) << "more fds are open than rlimit allows: fd=" << maxfd << ", limit=" << lim << endl;
}
