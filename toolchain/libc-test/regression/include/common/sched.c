#include <sched.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "syscall.h"

int sched_getscheduler(pid_t pid)
{
	printf("common/int sched_getscheduler(pid_t pid)\n");
	printf("SYS_sched_getscheduler:%d\n",SYS_sched_getscheduler);
	int r = __syscall(SYS_sched_getscheduler, pid);

	int ret = __syscall_ret(r);
	printf("r:%d ret:%d\n", r , ret );
	return ret;
}

