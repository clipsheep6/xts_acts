#include <stdio.h>
#include <stdint.h>
#include "mtest.h"

int eulpf(float x)
{
	union { float f; uint32_t i; } u = { x };
	int e = u.i>>23 & 0xff;

	if (!e)
		e++;
	return e - 0x7f - 23;
}

int eulp(double x)
{
	union { double f; uint64_t i; } u = { x };
	int e = u.i>>52 & 0x7ff;

	if (!e)
		e++;
	return e - 0x3ff - 52;
}

int eulpl(long double x)
{
#if LDBL_MANT_DIG == 53
	return eulp(x);
#elif LDBL_MANT_DIG == 64
	union { long double f; struct {uint64_t m; uint16_t e; uint16_t pad;} i; } u = { x };
	int e = u.i.e & 0x7fff;

	if (!e)
		e++;
	return e - 0x3fff - 63;
#else
	// TODO
	return 0;
#endif
}

float ulperrf(float got, float want, float dwant)
{
	if (isnan(got) && isnan(want))
		return 0;
	if (got == want) {
		if (signbit(got) == signbit(want))
			return dwant;
		return inf;
	}
	if (isinf(got)) {
		got = copysignf(0x1p127, got);
		want *= 0.5;
	}
	return scalbn(got - want, -eulpf(want)) + dwant;
}

float ulperr(double got, double want, float dwant)
{
	if (isnan(got) && isnan(want))
		return 0;
	if (got == want) {
		if (signbit(got) == signbit(want))
			return dwant;
		return inf; // treat 0 sign errors badly
	}
	if (isinf(got)) {
		got = copysign(0x1p1023, got);
		want *= 0.5;
	}
	return scalbn(got - want, -eulp(want)) + dwant;
}

float ulperrl(long double got, long double want, float dwant)
{
#if LDBL_MANT_DIG == 53
	return ulperr(got, want, dwant);
#elif LDBL_MANT_DIG == 64
	if (isnan(got) && isnan(want))
		return 0;
	if (got == want) {
		if (signbit(got) == signbit(want))
			return dwant;
		return inf;
	}
	if (isinf(got)) {
		got = copysignl(0x1p16383L, got);
		want *= 0.5;
	}
	return scalbnl(got - want, -eulpl(want)) + dwant;
#else
	// TODO
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
	int i, all = 0;

	for (i = 0; i < length(eflags); i++)
		if (f & eflags[i].flag) {
			p += sprintf(p, "%s%s", all ? "|" : "", eflags[i].s);
			all |= eflags[i].flag;
		}
	if (all != f) {
		p += sprintf(p, "%s%d", all ? "|" : "", f & ~all);
		all = f;
	}
	p += sprintf(p, "%s", all ? "" : "0");
	return buf;
}

char *rstr(int r)
{
	switch (r) {
	case RN: return (char *)"RN";
#ifdef FE_TOWARDZERO
	case RZ: return (char *)"RZ";
#endif
#ifdef FE_UPWARD
	case RU: return (char *)"RU";
#endif
#ifdef FE_DOWNWARD
	case RD: return (char *)"RD";
#endif
	}
	return (char *)"R?";
}

int checkexcept(int got, int want, int r)
{
	if (r == RN)
#if defined CHECK_INEXACT
		return got == want;
#elif defined CHECK_INEXACT_OMISSION
		return got == want || got == (want|INEXACT);
#else
		return (got|INEXACT) == (want|INEXACT);
#endif
	return (got|INEXACT|UNDERFLOW) == (want|INEXACT|UNDERFLOW);
}

int checkulp(float d, int r)
{
	// TODO: we only care about >=1.5 ulp errors for now, should be 1.0
	if (r == RN)
		return fabsf(d) < 1.5;
	// accept larger error in non-nearest rounding mode
	return fabsf(d) < 3.0;
}

int checkexceptall(int got, int want, int r)
{
	return got == want;
}

int checkcr(long double y, long double ywant, int r)
{
	if (isnan(ywant))
		return isnan(y);
	return y == ywant && signbit(y) == signbit(ywant);
}
