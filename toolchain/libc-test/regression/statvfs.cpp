#include <cstring>
#include <cerrno>
#include <cstdio>
#include <sys/statvfs.h>

#include "gtest/gtest.h"


using namespace std;
using namespace testing::ext;
class Statvfs : public testing::Test {};

/**
 * @tc.name      : StatvfsTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Statvfs, SscanfEofTest, Function | MediumTest | Level2)
{
    struct statvfs f;

    EXPECT_FALSE(statvfs("/", &f)) << "statvfs(\"/\") failed: " << strerror(errno) << endl;
    EXPECT_FALSE(f.f_bsize == 0 || f.f_bsize > 1 << 28) <<
        "/ has bogus f_bsize: " << (unsigned long)f.f_bsize << endl;
    EXPECT_NE(0, f.f_blocks) << "/ has 0 blocks" << endl;
    EXPECT_GE(f.f_blocks, f.f_bfree) << "/ has more free blocks (" << (unsigned long long)f.f_bfree
                                     << ") than total blocks (" << (unsigned long long)f.f_blocks << ")" << endl;
    EXPECT_GE(f.f_blocks, f.f_bavail) << "/ has more avail blocks (" << (unsigned long long)f.f_bavail
                                      << ") than total blocks (" << (unsigned long long)f.f_blocks << ")" << endl;

    EXPECT_NE(0, f.f_files) << "/ has 0 file nodes" << endl;
    EXPECT_GE(f.f_files, f.f_ffree) << "/ has more free file nodes (" << (unsigned long long)f.f_ffree
                                    << ") than total file nodes (" << (unsigned long long)f.f_files << ")" << endl;
    EXPECT_GE(f.f_files, f.f_favail) << "/ has more avail file nodes (" << (unsigned long long)f.f_favail
                                     << ") than total file nodes (" << (unsigned long long)f.f_files << ")" << endl;
    EXPECT_FALSE(f.f_namemax > 1 << 16 || f.f_namemax < 8) << 
        "/ has bogus f_namemax: " << (unsigned long)f.f_namemax << endl;
}
