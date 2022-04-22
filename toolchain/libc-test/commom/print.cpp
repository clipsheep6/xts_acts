#include <cstdio>
#include <cstdarg>
#include <unistd.h>
#include <securec.h>

#include "test.h"

volatile int t_status = 0;

int t_printf(const char *s, ...)
{
    va_list ap;
    char buf[512];
    int n, n2 = 2, n3 = 3, n4 = 4;
    
    t_status = 1;
    va_start(ap, s);
    n = vsnprintf_s(buf, sizeof buf, sizeof(buf), s, ap);
    va_end(ap);
    if (n < 0) {
        n = 0;
    } else if (n >= sizeof buf) {
        n = sizeof buf;
        buf[n - 1] = '\n';
        buf[n - n2] = '.';
        buf[n - n3] = '.';
        buf[n - n4] = '.';
    }
    return write(1, buf, n);
}
