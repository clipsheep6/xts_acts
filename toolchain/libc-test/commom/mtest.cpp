#include <cstdio>
#include <cstdint>
#include <securec.h>

#include "gtest/gtest.h"

#include "mtest.h"

int eulpf(float x)
{
    union { float f; uint32_t i; } u = { x };
    int move = 23;
    int e = (u.i >> move) & 0xff;
    
    if (!e) {
        e++;
    }
    return e - 0x7f - move; // e - 0x7f - move : 计算值
}

int eulp(double x)
{
    union { double f; uint64_t i; } u = { x };
    int move = 52;
    int e = (u.i >> move) & 0x7ff;
    
    if (!e) {
        e++;
    }
    return e - 0x3ff - move; // e - 0x3ff - move : 计算值
}

int eulpl(long double x)
{
#if LDBL_MANT_DIG == 53
    return eulp(x);
#elif LDBL_MANT_DIG == 64
    union { long double f; struct {uint64_t m; uint16_t e; uint16_t pad;} i; } u = { x };
    int move = 63;
    int e = u.i.e & 0x7fff;
    
    if (!e) {
        e++;
    }
    return e - 0x3fff - move; // e - 0x3fff - move : 计算值
#else
    return 0;
#endif
}

float ulperrf(float got, float want, float dwant)
{
    float calu = 0.5;
    if (isnan(got) && isnan(want)) {
        return 0;
    }
    if (got == want) {
        if (signbit(got) == signbit(want)) {
            return dwant;
        }
        return inf;
    }
    if (isinf(got)) {
        got = copysignf(0x1p127, got);
        want *= calu;
    }
    return scalbn(got - want, -eulpf(want)) + dwant;
}

float ulperr(double got, double want, float dwant)
{
    float calu = 0.5;
    if (isnan(got) && isnan(want)) {
        return 0;
    }
    if (got == want) {
        if (signbit(got) == signbit(want)) {
            return dwant;
        }
        return inf; // treat 0 sign errors badly
    }
    if (isinf(got)) {
        got = copysign(0x1p1023, got);
        want *= calu;
    }
    return scalbn(got - want, -eulp(want)) + dwant;
}

float ulperrl(long double got, long double want, float dwant)
{
#if LDBL_MANT_DIG == 53
    return ulperr(got, want, dwant);
#elif LDBL_MANT_DIG == 64
    if (isnan(got) && isnan(want)) {
        return 0;
    }
    if (got == want) {
        if (signbit(got) == signbit(want)) {
            return dwant;
        }
        return inf;
    }
    float calu = 0.5;
    if (isinf(got)) {
        got = copysignl(0x1p16383L, got);
        want *= calu;
    }
    return scalbnl(got - want, -eulpl(want)) + dwant;
#else
    
    return inf;
#endif
}

#define length(a) (sizeof(a)/sizeof*(a))
#define flag(x) {x, (char *)#x}
static struct {
    int flag;
    char *s;
} eflags[] = {
    flag(INEXACT),
    flag(INVALID),
    flag(DIVBYZERO),
    flag(UNDERFLOW),
    flag(OVERFLOW)
};

char *estr(int f)
{
    static char buf[256];
    char *p = buf;
    int i, ret, all = 0;
    
    for (i = 0; i < length(eflags); i++) {
        if (f & eflags[i].flag) {
            p += sprintf_s(p, sizeof p, "%s%s", all ? "|" : "", eflags[i].s);
            all |= eflags[i].flag;  
        }
    }
    if (all != f) {
        p += sprintf_s(p, sizeof p, "%s%d", all ? "|" : "", f & ~all);
        all = f;
    }
    EXPECT_TRUE((ret = sprintf_s(p, sizeof p, "%s", all ? "" : "0") != -1));
    p += ret;
    return buf;
}

char *rstr(int r)
{
    switch (r) {
        case RN: return const_cast<char*>("RN");
#ifdef FE_TOWARDZERO
        case RZ: return const_cast<char*>("RZ");
#endif
#ifdef FE_UPWARD
        case RU: return const_cast<char*>("RU");
#endif
#ifdef FE_DOWNWARD
        case RD: return const_cast<char*>("RD");
#endif
    }
    return const_cast<char*>("R?");
}

int checkexcept(int got, int want, int r)
{
    if (r == RN) {
#if defined CHECK_INEXACT
        return got == want;
#elif defined CHECK_INEXACT_OMISSION
        return got == want || got == (want|INEXACT);
#else
        return (got|INEXACT) == (want|INEXACT);
#endif
    }
    return (got|INEXACT|UNDERFLOW) == (want|INEXACT|UNDERFLOW);

}

int checkulp(float d, int r)
{
    float cmp1 = 1.5, cmp2 = 3.0;
    if (r == RN) {
        return fabsf(d) < cmp1;
    }
    return fabsf(d) < cmp2;
}

int checkexceptall(int got, int want, int r)
{
    return got == want;
}

int checkcr(long double y, long double ywant, int r)
{
    if (isnan(ywant)) {
        return isnan(y);
    }
    return (y == ywant) && (signbit(y) == signbit(ywant));
}
