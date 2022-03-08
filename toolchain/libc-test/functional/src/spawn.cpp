#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <stdlib.h>
//#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <spawn.h>
#include <sys/wait.h>
#include "gtest/gtest.h"
#include "test.h"
/**  
* @brief  register a test suit named "SpawnSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SpawnSuite
*/

using namespace std;
using namespace testing::ext;
class SpawnSuite: public testing::Test {
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
 * @tc.name      : SpawnSuite001
 * @tc.desc      : Test SpawnSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
#define TEST_T(f, x) EXPECT_EQ((r = (f)) , (x)) << #f << " failed, got " << r << " want " << x << endl;

#define TEST_E(f) { \
	errno = 0; \
	EXPECT_TRUE(f) << #f << " failed (errno = " << errno << " \"" << strerror(errno) << "\")" << endl; \
}

HWTEST_F(SpawnSuite, SpawnTest, Function | MediumTest | Level2)
{
    int r;
	char foo[10];
	int p[2];
	pid_t pid;
	int status;
	posix_spawn_file_actions_t fa;

	TEST_E(!pipe(p));
	TEST_T(posix_spawn_file_actions_init(&fa), 0);
	TEST_T(posix_spawn_file_actions_addclose(&fa, p[0]), 0);
	TEST_T(posix_spawn_file_actions_adddup2(&fa, p[1], 1), 0);
	TEST_T(posix_spawn_file_actions_addclose(&fa, p[1]), 0);
	TEST_T(posix_spawnp(&pid, "echo", &fa, 0, (char *[]){(char *)"echo",(char *)"hello",0}, 0), 0);
	close(p[1]);
	TEST_T(waitpid(pid, &status, 0), pid);
	TEST_T(read(p[0], foo, sizeof foo), 6);
	close(p[0]);
	TEST_T(posix_spawn_file_actions_destroy(&fa), 0);
}
