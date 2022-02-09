#include "gtest/gtest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sched.h>
#include "test.h"

/**  
* @brief  register a test suit named "LibcTestSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  LibcTestSuite
*/
//LITE_TEST_SUIT(libc, hello_world, LibcTestSuite);

using namespace std;
using namespace testing::ext;
namespace {
class TestSuite: public testing::Test {
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
 * @tc.name      : LibcTestCase001
 * @tc.desc      : Test LibcTestCase001 3 items whth async flush
 * @tc.level     : Level 1
 */

HWTEST_F(TestSuite, TestSuite001, TestSize.Level1) 
{
    printf("************** Hello World Test ***************\n");
    cout << "-----------------HELLO WORLD---------------" << endl;
    printf("************** HWTEST_F(TestSuite, TestSuite001, TestSize.Level1)  ***************\n");
}

HWTEST_F(TestSuite, TestSuite002, TestSize.Level1) 
{  
    printf("************** HWTEST_F(TestSuite, TestSuite002, TestSize.Level1)  ***************\n");
    setenv("A", "1", 1);
	setenv("A", "2", 1);
	char *c = strdup("A=3");
	putenv(c);
	setenv("A", "4", 1);
	free(c);
}
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
HWTEST_F(TestSuite, TestSuite003, TestSize.Level1)
{
    printf("************** HWTEST_F(TestSuite, TestSuite003, TestSize.Level1)  ***************\n");
    char *p = (char *)memmem("abcde", 4, "cde", 3);
	if (p){
        t_error("memmem(abcde,4,cde,3) returned %s, want NULL\n", p);
    }
}

#define TEST2(c) do { \
	errno = 0; \
	if (!(c)) \
		t_error("%s failed (errno = %d)\n", #c, errno); \
} while(0)

HWTEST_F(TestSuite, TestSuite004, TestSize.Level1)
{
    char tmp[] = "/tmp/testsuite-XXXXXX";
	char foo[6];
	int fd;
	FILE *f;
printf("************** HWTEST_F(TestSuite, TestSuite004, TestSize.Level1)  ***************\n");
	TEST2((fd = mkstemp(tmp)) > 2);
	TEST2(write(fd, "hello", 6)==6);
	TEST2(f = fdopen(fd, "rb"));
	if (f) {
		TEST2(ftello(f)==6);
		TEST2(fseeko(f, 0, SEEK_SET)==0);
		TEST2(fgets(foo, sizeof foo, f));
		if (strcmp(foo,"hello") != 0)
			t_error("fgets read back: \"%s\"; wanted: \"hello\"\n", foo);
		fclose(f);
	}
	if (fd > 2)
		TEST2(unlink(tmp) != -1);
}

#define TEST3(c) ((!c) ? 1 : (t_error(#c" failed: %s" ,strerror(errno)),0))
HWTEST_F(TestSuite, TestSuite005, TestSize.Level1)
{
    struct sched_param param;
    int maxpri,minpri;
    int sched;
    pid_t pid;
printf("************** HWTEST_F(TestSuite, TestSuite005, TestSize.Level1)  ***************\n");   
    sched = SCHED_FIFO;
    pid = getpid();
    maxpri = sched_get_priority_max(sched);
    minpri = sched_get_priority_min(sched);
    printf("maxpri:%d minpri:%d\n",maxpri, minpri);
    ASSERT_TRUE(maxpri == 99 || minpri == 1);
    printf("============0000000=============\n"); 
    //{
        //perror("get maxpriority or minpriority failed");
        //return -1;
    //}
    param.sched_priority = 23;//取值范围:minpri~maxpri
    TEST3(sched_setscheduler(pid, sched, &param));
    TEST3(!(sched_getscheduler(pid) == sched));
    TEST3(sched_getparam(pid, &param));
}

}
