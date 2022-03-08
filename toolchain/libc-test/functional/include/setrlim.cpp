#include <string.h>
#include <errno.h>
#include <sys/resource.h>
#include "test.h"
#include <stdio.h>

int t_setrlim(int r, long lim)
{
	struct rlimit rl;

	if (getrlimit(r, &rl)) {
		t_error("getrlimit %d: %s\n", r, strerror(errno));
		return -1;
	}

	//printf("rl.rlim_cur1:%d rl.rlim_max:%d\n",rl.rlim_cur,rl.rlim_max);
	
	if (lim > rl.rlim_max)
		return -1;
	if (lim == rl.rlim_max && lim == rl.rlim_cur)
		return 0;
	rl.rlim_max = lim;
	rl.rlim_cur = lim;

	//printf("rl.rlim_cur2:%d rl.rlim_max:%d\n",rl.rlim_cur,rl.rlim_max);

	if (setrlimit(r, &rl)) {
		t_error("setrlimit(%d, %ld): %s\n", r, lim, strerror(errno));
		return -1;
	}

	//printf("rl.rlim_cur3:%d rl.rlim_max:%d\n",rl.rlim_cur,rl.rlim_max);

	if (getrlimit(r, &rl)) {
		t_error("getrlimit %d: %s\n", r, strerror(errno));
		return -1;
	}

	//printf("rl.rlim_cur4:%d rl.rlim_max:%d\n",rl.rlim_cur,rl.rlim_max);	
	return 0;
}

