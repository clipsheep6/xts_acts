#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "gtest/gtest.h"

#define ASSERT(c) do {                                                                   \
    errno = 0;                                                                       \
    EXPECT_FALSE(!(c)) << #c << "failed (errno: " << strerror(errno) << ")" << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class FtelloUnflushedAppendSuite : public testing::Test {};

/**
 * @tc.name      : FtelloUnflushedAppendTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(FtelloUnflushedAppendSuite, FtelloUnflushedAppendTest, Function | MediumTest | Level2)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
    int fd;
    FILE *f;
    off_t off;

    ASSERT((fd = mkstemp(tmp)) > 2);
    ASSERT(write(fd, "abcd", 4) == 4);
    ASSERT(close(fd) == 0);

    ASSERT((fd = open(tmp, O_WRONLY)) > 2);
    ASSERT(f = fdopen(fd, "a"));
    if (f) {
        ASSERT(fwrite("efg", 1, 3, f) == 3);
        ASSERT((off = ftello(f)) != -1);
        EXPECT_EQ(7, off) << "ftello is broken before flush: got " << (long long)off << ", want 7" << endl;
        ASSERT(fflush(f) == 0);
        ASSERT((off = ftello(f)) != -1);
        EXPECT_EQ(7, off) << "ftello is broken before flush: got " << (long long)off << ", want 7" << endl;
        ASSERT(fclose(f) == 0);
    }
    if (fd > 2)
        ASSERT(unlink(tmp) == 0);
}
