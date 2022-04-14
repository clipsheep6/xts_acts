#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <cstdio>
#include <unistd.h>

#include <sys/resource.h>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
int t_memfill()
{
    int r = 0;
    /* alloc mmap space with PROT_NONE */
    if (t_vmfill(0,0,0) < 0) {
        EXPECT_GE(t_vmfill(0,0,0) , 0) << "vmfill failed: " << strerror(errno) << endl;
        r = -1;
    }
    /* limit brk space */
    if (t_setrlim(RLIMIT_DATA, 0) < 0)
        r = -1;
    if (!r) {	/* use up libc reserves if any */
        while (malloc(1))
            sleep(1);
    }
    return r;
}
