#include <stdint.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include "test.h"
#ifndef PAGE_SIZE
	#define PAGE_SIZE sysconf(_SC_PAGE_SIZE) //long sysconf(int);获取一页存放的字节数
#endif
#ifndef MAP_ANONYMOUS
	#define MAP_ANONYMOUS 0
#endif

/* max mmap size, *start is the largest power-of-2 size considered */
static size_t mmax(int fd, size_t *start) //得到最大映射的空间
{
	size_t i, n;
	void *p;
//i = n = *start = 2,147,483,648
	for (i=n=*start; i>=PAGE_SIZE; i/=2) {
		//				  页不可访问	私有且匿名映射	
		if ((p=mmap(0, n, PROT_NONE, MAP_PRIVATE|MAP_ANONYMOUS, fd, 0)) == MAP_FAILED) {
			n -= i/2;
		} else {
			munmap(p, n);
			if (n == i)
				*start = n;
			n += i/2;
		}
	}
	return n & -PAGE_SIZE;
}

/*
fills the virtual memory with anonymous PROT_NONE mmaps,
returns the mappings in *p and *n in decreasing size order,
the return value is the number of mappings or -1 on failure.
*/
/*
//#define UINT32_MAX		((u32)~0U) 无符号0按位取反再强转成无符号32位数
//# define UINT32_MAX		(4294967295U)
//#define UINT32_MAX (0xffffffffu) (4294967295u)
//#define SIZE_MAX        	UINT32_MAX
//size_t是标准C库中定义的，在64位系统中为long long unsigned int，非64位系统中为long unsigned int。
*/
int t_vmfill(void **p, size_t *n, int len)//t_vmfill(&p, &n, 1) len = 1
{
	int fd = MAP_ANONYMOUS ? -1 : open("/dev/zero", O_RDWR);//打卡字符设备文件zero
	size_t start = SIZE_MAX/2 + 1;//2,147,483,647+1 = 2,147,483,648
	size_t m; //映射空间大小
	void *q; //映射空间地址
	int i;

	for (i=0;;i++) {
		m = mmax(fd, &start);
		if (!m)
			break;
		q = mmap(0, m, PROT_NONE, MAP_PRIVATE|MAP_ANONYMOUS, fd, 0);
		if (q == MAP_FAILED)
			return -1;
		if (i < len) {
			p[i] = q;
			n[i] = m;
		}
	}
	return i;
}
