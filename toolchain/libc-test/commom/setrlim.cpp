#include <cstring>
#include <cerrno>
#include <cstdio>
#include <sys/resource.h>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;

int t_setrlim(int r, long lim)
{
    struct rlimit rl;
    
    EXPECT_EQ(0, getrlimit(r, &rl)) << "getrlimit " << r << ": " << strerror(errno) << endl;
    if (lim > rl.rlim_max) {
        return -1;
    }
    if (lim == rl.rlim_max && lim == rl.rlim_cur) {
        return 0;
    }
    rl.rlim_max = lim;
    rl.rlim_cur = lim;
    EXPECT_EQ(0, setrlimit(r, &rl)) << "setrlimit(" << r << "," << lim << "): " << strerror(errno) << endl;
    EXPECT_EQ(0, getrlimit(r, &rl)) << "getrlimit " << r << ": " << strerror(errno) << endl;
    return 0;
}

