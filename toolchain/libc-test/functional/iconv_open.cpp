#include <cstring>
#include <cerrno>
#include <iconv.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class IconvOpen : public testing::Test {};

/**
 * @tc.name      : IconvOpenTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(IconvOpen, IconvOpenTest, Function | MediumTest | Level2)
{
    iconv_t cd;
    char buf[100];
    char *inbuf = (char *)"test";
    char *outbuf = buf;
    size_t inlen = strlen(inbuf);
    size_t outlen;
    size_t r;
    const char *bad = "bad-codeset";

    cd = iconv_open(bad, bad);
    EXPECT_EQ(cd, (iconv_t)-1) << "iconv_open(\"" << bad << "\",\"" << bad << "\") didn't fail" << endl;
    EXPECT_EQ(EINVAL, errno) << "iconv_open(\"" << bad << "\",\"" << bad << "\") did not fail with EINVAL, got " << strerror(errno) << endl;
    errno = 0;
    cd = iconv_open("UTF-8", "UTF-8");
    EXPECT_NE(cd, (iconv_t)-1) << "iconv_open(\"\",\"\") failed: " << strerror(errno) << endl;

    errno = 0;
    outlen = 0;
    r = iconv(cd, &inbuf, &inlen, &outbuf, &outlen);
    EXPECT_EQ(-1, r) << "iconv() did not fail with 0 output length" << endl;
    EXPECT_EQ(E2BIG, errno) << "iconv() did not fail with 0 output length" << endl;

    errno = 0;
    outlen = sizeof buf;
    r = iconv(cd, &inbuf, &inlen, &outbuf, &outlen);
    EXPECT_FALSE(r) << "iconv() did not return 0 when converting utf8 to utf8, got " << r << endl;
    EXPECT_FALSE(errno) << "iconv() failed: " << strerror(errno) << endl;

    r = iconv_close(cd);
    EXPECT_NE(1, r) << "iconv_close failed: " << strerror(errno) << endl;
}
