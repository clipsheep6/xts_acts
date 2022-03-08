#define _XOPEN_SOURCE 700
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
// #include "test.h"
#include "gtest/gtest.h"

/**  
* @brief  register a test suit named "TimeSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  TimeSuite
*/

using namespace std;
using namespace testing::ext;
class TimeSuite: public testing::Test {
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
 * @tc.name      : TimeSuite001
 * @tc.desc      : Test TimeSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */

/* We use this instead of memcmp because some broken C libraries
 * add additional nonstandard fields to struct tm... */

int tm_cmp(struct tm tm1, struct tm tm2)
{
	return  tm1.tm_sec  != tm2.tm_sec  ||
		tm1.tm_min  != tm2.tm_min  ||
		tm1.tm_hour != tm2.tm_hour ||
		tm1.tm_mday != tm2.tm_mday ||
		tm1.tm_mon  != tm2.tm_mon  ||
		tm1.tm_year != tm2.tm_year ||
		tm1.tm_wday != tm2.tm_wday ||
		tm1.tm_yday != tm2.tm_yday ||
		tm1.tm_isdst!= tm2.tm_isdst;
}

char *tm_str(struct tm tm)
{
	static int i;
	static char b[4][64];
	i = (i+1)%4;
	snprintf(b[i], sizeof b[i],
		"s=%02d m=%02d h=%02d mday=%02d mon=%02d year=%04d wday=%d yday=%d isdst=%d",
		tm.tm_sec, tm.tm_min, tm.tm_hour,
		tm.tm_mday, tm.tm_mon, tm.tm_year,
		tm.tm_wday, tm.tm_yday, tm.tm_isdst);
	return b[i];
}
struct tm tmmy;
void TM(int ss,int mm,int hh,int md,int mo,int yr,
		int wd,int yd,int dst)
{
	tmmy.tm_sec = ss;
	tmmy.tm_min = mm;
	tmmy.tm_hour = hh,
	tmmy.tm_mday = md;
	tmmy.tm_mon = mo;
	tmmy.tm_year = yr,
	tmmy.tm_wday = wd;
	tmmy.tm_yday = yd;
	tmmy.tm_isdst = dst;
}

static void sec2tm(time_t t, char *m)
{
	struct tm *tm;
	time_t r;

	errno = 0;
	tm = gmtime(&t);
	EXPECT_EQ(errno , 0) << m << ": gmtime((time_t)" << (long long)t << ") should not set errno, got " << strerror(errno);
	errno = 0;
	r = mktime(tm);
	EXPECT_EQ(errno , 0) <<  m << ": mktime(" << tm_str(*tm) << ") should not set errno, got " << strerror(errno);;
	EXPECT_EQ(t , r) << m << ": mktime(gmtime(" << (long long)t << ")) roundtrip failed: got " << (long long)r << " (gmtime is " << tm_str(*tm) << ")" << endl;
}

static void tm2sec(struct tm *tm, int big, char *m)
{
	struct tm *r;
	time_t t;
	int overflow = big && (time_t)LLONG_MAX!=LLONG_MAX;

	errno = 0;
	t = mktime(tm);
	EXPECT_FALSE(overflow && t != -1) << m << ": mktime(" << tm_str(*tm) << ") expected -1, got (time_t)" << (long)t << endl;
	EXPECT_FALSE(overflow && errno != EOVERFLOW) << m << ": mktime(" << tm_str(*tm) << ") expected EOVERFLOW (" 
	<< strerror(EOVERFLOW) << "), got (" << strerror(errno) << ")" << endl;;
	EXPECT_FALSE(!overflow && t == -1) << m << ": mktime(" << tm_str(*tm) << ") expected success, got (time_t)-1" << endl;
	EXPECT_FALSE(!overflow && errno) <<  m << ": mktime(" << tm_str(*tm) << ") expected no error, got (" << strerror(errno) << ")" << endl;
	r = gmtime(&t);
	EXPECT_FALSE(!overflow && tm_cmp(*r, *tm)) <<  m << ": gmtime(mktime(" << tm_str(*tm) << ")) roundtrip failed: got " << tm_str(*r) << endl;
}

HWTEST_F(TimeSuite, TimeTest, Function | MediumTest | Level2)
{
    time_t t;

	putenv((char *)"TZ=GMT");
	tzset();
	TM(0,0,0,1,0,70,4,0,0);
	tm2sec(&tmmy, 0, (char *)"gmtime(0)");
	TM(7,14,3,19,0,138,2,18,0);
	tm2sec(&tmmy, 0, (char *)"2038-1s");
	TM(8,14,3,19,0,138,2,18,0);
	tm2sec(&tmmy, 1, (char *)"2038");
	
	sec2tm(0, (char *)"EPOCH");
	for (t = 1; t < 1000; t++)
		sec2tm(t*100003, (char *)"EPOCH+eps");

	/* FIXME: set a TZ var and check DST boundary conditions */
}
