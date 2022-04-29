#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <sys/wait.h>
#include <unistd.h>
#include "test.h"
#include <stdio.h>
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "IpcMsgSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  hello_world
* @param  test suit name is  IpcMsgSuite
*/

using namespace std;
using namespace testing::ext;
class IpcMsgSuite: public testing::Test {
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
 * @tc.name      : IpcMsgSuite001
 * @tc.desc      : Test IpcMsgSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

static const char path[] = ".";
static const int id = 'm';

#define T(f) do{ \
	EXPECT_NE(0 , (f)+1) << #f << " failed: " << strerror(errno) << endl; \
}while(0)

#define EQ(a,b,fmt) do{ \
	if ((a) != (b)) \
		t_error("%s == %s failed: " fmt "\n", #a, #b, a, b); \
	EXPECT_EQ((a) , (b)); \
}while(0)

static void snd()
{
	time_t t;
	key_t k;
	int qid;
	struct msqid_ds qid_ds;
	struct {
		long type;
		char data[20];
	} msg = {1, "test message"};
printf("line:%d\n",__LINE__);
	T(t = time(0));
	T(k = ftok(path, id));
printf("line:%d\n",__LINE__);
	/* make sure we get a clean message queue id */
	T(qid = msgget(k, IPC_CREAT|0666));
	T(msgctl(qid, IPC_RMID, 0));
	T(qid = msgget(k, IPC_CREAT|IPC_EXCL|0666));
printf("line:%d\n",__LINE__);
	// if (t_status)
	// 	exit(t_status);

	/* check IPC_EXCL */
	errno = 0;
	if (msgget(k, IPC_CREAT|IPC_EXCL|0666) != -1 || errno != EEXIST)
		t_error("msgget(IPC_CREAT|IPC_EXCL) should have failed with EEXIST, got %s\n", strerror(errno));
printf("line:%d\n",__LINE__);
	/* check if msgget initilaized the msqid_ds structure correctly */
	T(msgctl(qid, IPC_STAT, &qid_ds));
	EQ(qid_ds.msg_perm.cuid, geteuid(), "got %d, want %d");
	EQ(qid_ds.msg_perm.uid, geteuid(), "got %d, want %d");
	EQ(qid_ds.msg_perm.cgid, getegid(), "got %d, want %d");
	EQ(qid_ds.msg_perm.gid, getegid(), "got %d, want %d");
	EQ(qid_ds.msg_perm.mode & 0x1ff, 0666, "got %o, want %o");
	EQ(qid_ds.msg_qnum, 0, "got %d, want %d");
printf("line:%d\n",__LINE__);
	EQ(qid_ds.msg_lspid, 0, "got %d, want %d");
	EQ(qid_ds.msg_lrpid, 0, "got %d, want %d");
	EQ((long long)qid_ds.msg_stime, 0, "got %lld, want %d");
	EQ((long long)qid_ds.msg_rtime, 0, "got %lld, want %d");
	if (qid_ds.msg_ctime < t)
		t_error("qid_ds.msg_ctime >= t failed: got %lld, want >= %lld\n", (long long)qid_ds.msg_ctime, (long long)t);
	if (qid_ds.msg_ctime > t+5)
		t_error("qid_ds.msg_ctime <= t+5 failed: got %lld, want <= %lld\n", (long long)qid_ds.msg_ctime, (long long)t+5);
	if (qid_ds.msg_qbytes <= 0)
		t_error("qid_ds.msg_qbytes > 0 failed: got %d, want > 0\n", qid_ds.msg_qbytes, t);
printf("line:%d\n",__LINE__);
	/* test send */
	T(msgsnd(qid, &msg, sizeof msg.data, IPC_NOWAIT));
	T(msgctl(qid, IPC_STAT, &qid_ds));
	EQ(qid_ds.msg_qnum, 1, "got %d, want %d");
	EQ(qid_ds.msg_lspid, getpid(), "got %d, want %d");
printf("line:%d\n",__LINE__);
	if (qid_ds.msg_stime < t)
		t_error("msg_stime is %lld want >= %lld\n", (long long)qid_ds.msg_stime, (long long)t);
	if (qid_ds.msg_stime > t+5)
		t_error("msg_stime is %lld want <= %lld\n", (long long)qid_ds.msg_stime, (long long)t+5);
}

static void rcv()
{printf("line:%d childpid:%d\n",__LINE__,getpid());
	key_t k;
	int qid;
	struct {
		long type;
		char data[20];
	} msg;
	long msgtyp = 0;
	T(k = ftok(path, id));
	T(qid = msgget(k, 0));
printf("line:%d\n",__LINE__);
	errno = 0;
	if (msgrcv(qid, &msg, 0, msgtyp, 0) != -1 || errno != E2BIG)
		t_error("msgrcv should have failed when msgsize==0 with E2BIG, got %s\n", strerror(errno));
printf("line:%d\n",__LINE__);
	/* test receive */
	T(msgrcv(qid, &msg, sizeof msg.data, msgtyp, IPC_NOWAIT));
	if (strcmp(msg.data,"test message") != 0)
		t_error("received \"%s\" instead of \"%s\"\n", msg.data, "test message");
printf("line:%d\n",__LINE__);
	errno = 0;
	if (msgrcv(qid, &msg, sizeof msg.data, msgtyp, MSG_NOERROR|IPC_NOWAIT) != -1 || errno != ENOMSG)
		t_error("msgrcv should have failed when ther is no msg with ENOMSG, got %s\n", strerror(errno));
printf("line:%d\n",__LINE__);
	/* cleanup */
	T(msgctl(qid, IPC_RMID, 0));
printf("line:%d\n",__LINE__);
}

HWTEST_F(IpcMsgSuite, IpcMsgSuite001, Function | MediumTest | Level2)
{
	
//printf("%ld\n",__STDC_VERSION__);
	int i = 0;
printf("%ld\n",__cplusplus);
    pid_t p;
	int status;
printf("parentpid:%d\n",getpid());
	snd();
printf("line:%d\n",__LINE__);
	p = fork();
printf("line:%d p:%d\n",__LINE__,p);

	if (p == -1)
		t_error("fork failed: %s\n", strerror(errno));
	else if (p == 0){
		rcv();
		printf("line:%d\n",__LINE__);
		exit(0);
	}
	else {
		usleep(200);
		printf("line:%d p:%d parentpid:%d\n",__LINE__,p,getpid());
		printf("line:%d i:%d\n",__LINE__,i);
		while ((i = waitpid(p, &status, 0))<0 && errno==EINTR);
		printf("line:%d i:%d\n",__LINE__,i);
		printf("line:%d \t status:%d\n",__LINE__, status);
		//T(i);
		printf("line:%d \t WIFEXITED(status):%d\n",__LINE__, WIFEXITED(status));
		if (!WIFEXITED(status) || WEXITSTATUS(status) != 0)
			t_error("child exit status: %d\n", status);
		printf("line:%d\n",__LINE__);
	}
}
