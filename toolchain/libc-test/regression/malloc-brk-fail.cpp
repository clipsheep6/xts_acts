#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include "test.h"
#include "gtest/gtest.h"

#define T(f) EXPECT_FALSE((f) == 0) << #f << " failed: " << strerror(errno) << endl;

using namespace std;
using namespace testing::ext;
class MallocBrkFailSuite : public testing::Test {};

/**
 * @tc.name      : MallocBrkFailTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(MallocBrkFailSuite, MallocBrkFail0Test, Function | MediumTest | Level2)
{
    void *p;
    void *q;
    size_t n;

    // fill memory, largest mmaped area is [p,p+n)
    ASSERT_FALSE(t_vmfill(&p, &n, 1) < 1 || n < 2 * 65536) << "vmfill failed" << endl;
    // fill memory, largest mmaped are
    errno = 0;
    T(t_setrlim(RLIMIT_DATA, 0));
    // malloc should fail here
    errno = 0;
    q = malloc(10000);
    EXPECT_FALSE(q) << "malloc(10000) succeeded after memory is filled" << endl;
    EXPECT_EQ(ENOMEM, errno) << "malloc did not fail with ENOMEM, got " << strerror(errno) << endl;
    // fill memory, largest mmaped are
    // make some space available for mmap
    T(munmap((char *)p + 65536, 65536));
    // fill memory, largest mmaped are
    // malloc should succeed now
    q = malloc(10000);
    // fill memory, largest mmaped are
    EXPECT_FALSE(!q) << "malloc(10000) failed (eventhough 64k is available to mmap): " << strerror(errno) << endl;
}
