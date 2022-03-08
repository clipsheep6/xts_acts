// commit 5446303328adf4b4e36d9fba21848e6feb55fab4 2014-04-02
// malloc should not fail if brk fails but mmap can still allocate
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "MallocBrkFailSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  MallocBrkFailSuite
*/

using namespace std;
using namespace testing::ext;
class MallocBrkFailSuite: public testing::Test {
protected:
// Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void){
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void){
    }
    // Preset action of the test case
    virtual void SetUp()
    {
    }
    // Cleanup action of the test case
    virtual void TearDown()
    {
    }
};

/**
 * @tc.name      : MallocBrkFailSuite001
 * @tc.desc      : Test MallocBrkFailSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define T(f) ((f)==0 || (t_error(#f " failed: %s\n", strerror(errno)), 0))

HWTEST_F(MallocBrkFailSuite, MallocBrkFail0Test, Function | MediumTest | Level2)
{
    void *p;
	void *q;
	size_t n;
	//int r;

	// fill memory, largest mmaped area is [p,p+n)
	ASSERT_FALSE(t_vmfill(&p, &n, 1) < 1 || n < 2*65536) << "vmfill failed" << endl;
	// fill memory, largest mmaped are
	errno = 0;
	T(t_setrlim(RLIMIT_DATA, 0));
	// malloc should fail here
	errno = 0;
	q = malloc(10000);
	EXPECT_FALSE(q) << "malloc(10000) succeeded after memory is filled" << endl;
	EXPECT_EQ(ENOMEM , errno) << "malloc did not fail with ENOMEM, got " << strerror(errno) << endl;
	// fill memory, largest mmaped are
	// make some space available for mmap
	T(munmap((char*)p+65536, 65536));
	// fill memory, largest mmaped are
	// malloc should succeed now
	q = malloc(10000);
	// fill memory, largest mmaped are
	EXPECT_FALSE(!q) << "malloc(10000) failed (eventhough 64k is available to mmap): " << strerror(errno) << endl;
}
