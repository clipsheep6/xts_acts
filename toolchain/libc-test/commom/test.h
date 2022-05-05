#ifndef TOOLCHAIN_LIBC_TEST_COMMOM_TEST
#define TOOLCHAIN_LIBC_TEST_COMMOM_TEST

#include <unistd.h>
#include <cstdint>

#define t_error(...) t_printf( __VA_ARGS__)

extern char **environ;

int t_printf(const char *s, ...);
int t_vmfill(void **p, size_t *n, int len);
int t_memfill(void);
void t_fdfill(void);

void t_randseed(uint64_t s);
uint64_t t_randn(uint64_t n);
uint64_t t_randint(uint64_t a, uint64_t b);
void t_shuffle(uint64_t *p, size_t n);
void t_randrange(uint64_t *p, size_t n);
int t_choose(uint64_t n, size_t k, uint64_t *p);

char *t_pathrel(char *buf, size_t n, char *argv0, char *p);
int t_setrlim(int r, long lim);
int t_setutf8(void);

#endif  // TOOLCHAIN_LIBC_TEST_COMMOM_TEST_H_