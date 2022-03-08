#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/resource.h>
#include "test.h"
#include <stdio.h>
#include <unistd.h>
int t_memfill()
{
	printf("func:%s  line:%d\n",__FUNCTION__,__LINE__);
	int r = 0;
	/* alloc mmap space with PROT_NONE */
	if (t_vmfill(0,0,0) < 0) {
		t_error("vmfill failed: %s\n", strerror(errno));
		r = -1;
	}
	printf("func:%s  line:%d\n",__FUNCTION__,__LINE__);
	/* limit brk space */
	if (t_setrlim(RLIMIT_DATA, 0) < 0)
		r = -1;
	printf("func:%s  line:%d r:%d\n",__FUNCTION__,__LINE__,r);
	if (!r)
	{	/* use up libc reserves if any */
	printf("func:%s  line:%d\n",__FUNCTION__,__LINE__);
		while (malloc(1)){
			sleep(1);
			printf("func:%s  line:%d \n",__FUNCTION__,__LINE__);	
		}
	printf("func:%s  line:%d\n",__FUNCTION__,__LINE__);
	}
	return r;
}
