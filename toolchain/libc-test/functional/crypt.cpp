#include <cstring>
#include <crypt.h>

#include "gtest/gtest.h"

#define T(h, s, k) do {                                                                \
    p = crypt(k, s);                                                                   \
    if (!p) {                                                                          \
        p = "*";                                                                       \
    }                                                                                  \
    EXPECT_FALSE((strcmp(p, h) != 0)) << "crypt(" << #k                                \
      << ", \"" << s << "\") failed: got \"" << p << "\" want \"" << h << "\"" << endl;\
} while (0)

using namespace std;
using namespace testing::ext;
class Crpyt : public testing::Test {};

static const char *p;

/**
 * @tc.name      : CrpytTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Crpyt, CrpytTest, Function | MediumTest | Level2)
{
    /* md5 */
    T("$1$abcd0123$9Qcg8DyviekV3tDGMZynJ1", "$1$abcd0123$", "Xy01@#\x01\x02\x80\x7f\xff\r\n\x81\t !");
    T("$1$$qRPK7m23GJusamGpoGLby/", "$1$$", "");
    T("$1$salt$UsdFqFVB.FsuinRDK5eE..", "$1$salt$", "");
    T("$1$salt1234$.pylIeU8A8nhxsVrZNOP..", "$1$salt1234$", "Aa@\xaa 0123456789");
    T("$1$aaaaaaaa$zqksdEYCs/p2VrrMTPU0x0", "$1$aaaaaaaaaaaaaaaaaaaa$", "aaaaaaaaaaaaaaaaaaaa");

    /* blowfish */
    T("*",
      "$2a$00$0123456789012345678901", "");
    T("*",
      "$2a$08$01234567890123456789", "");
    T("$2a$04$012345678901234567890u8auMTJmy9uQv1pCMPSGmRjXec5nzCf6",
      "$2a$04$0123456789012345678901", "");
    T("$2a$04$abcdefghijklmnopqrstuuEgxSMhZgdHqm5w1Iw6ZfXSn4If4J406",
      "$2a$04$abcdefghijklmnopqrstuv", "\xff\xff\xff\xa3\x33\x01\x40");
    T("$2a$04$abcdefghijklmnopqrstuu8J3SjO9LQpndv9O3HW/e0PB1xKk.PJu",
      "$2a$04$abcdefghijklmnopqrstuv", "Aa@\xaa 0123456789");
    T("$2x$04$abcdefghijklmnopqrstuubUAnPDiHn0JtKfNM4q6HN1ZsdaC1D8i",
      "$2x$04$abcdefghijklmnopqrstuv", "\xff\xff\xff\xa3\x33\x01\x40");
    T("$2x$04$abcdefghijklmnopqrstuuxYRr8W0rYwastFTc35iurVdXD9PtVhq",
      "$2x$04$abcdefghijklmnopqrstuv", "Aa@\xaa 0123456789");
    T("$2y$04$abcdefghijklmnopqrstuubUAnPDiHn0JtKfNM4q6HN1ZsdaC1D8i",
      "$2y$04$abcdefghijklmnopqrstuv", "\xff\xff\xff\xa3\x33\x01\x40");
    T("$2y$04$abcdefghijklmnopqrstuu8J3SjO9LQpndv9O3HW/e0PB1xKk.PJu",
      "$2y$04$abcdefghijklmnopqrstuv", "Aa@\xaa 0123456789");

    /* sha256 */
    T("$5$$3c2QQ0KjIU1OLtB29cl8Fplc2WN7X89bnoEjaR7tWu.", "$5$$", "");
    T("$5$rounds=1234$abc0123456789$3VfDjPt05VHFn47C/ojFZ6KRPYrOjj1lLbH.dkF3bZ6",
     "$5$rounds=1234$abc0123456789$", "Xy01@#\x01\x02\x80\x7f\xff\r\n\x81\t !");
    T("$5$salt1234$1145V3OxW91Wl.LSS3pmBHvb2jV3ujiUhD7DgpoJtw9", "$5$salt1234$", "Aa@\xaa 0123456789");
    T("$5$rounds=1000$$ZIwsx59lFMWVo3Yt6IxpZVn0IhpY8Yg4gxC21zUDBI4", "$5$rounds=1$", "a");
    T("$5$rounds=1234$$i.IiuqtWmTzupHAZtfV/PB33Usz.MwGHq9BKFAEj.B3", "$5$rounds=00001234$", "a");

    /* official tests */
    T("$5$saltstring$5B8vYYiY.CVt1RlTTf8KbXBH3hsxY/GNooZaBBGWEc5",
      "$5$saltstring", "Hello world!");
    T("$5$rounds=5000$toolongsaltstrin$Un/5jzAHMgOGZ5.mWJpuVolil07guHPvOW8mGRcvxa5",
      "$5$rounds=5000$toolongsaltstring", "This is just a test");
    T("$5$rounds=1400$anotherlongsalts$Rx.j8H.h8HjEDGomFU8bDkXm3XIUnzyxf12oP84Bnq1",
      "$5$rounds=1400$anotherlongsaltstring", 
      "a very much longer text to encrypt.  This one even stretches over morethan one line.");
    T("$5$rounds=1000$roundstoolow$yfvwcWrQ8l/K0DAWyuPMDNHpIVlTQebY9l/gL972bIC",
      "$5$rounds=10$roundstoolow", "the minimum number is still observed");

    /* sha512 */
    T("$6$$/chiBau24cE26QQVW3IfIe68Xu5.JQ4E8Ie7lcRLwqxO5cxGuBhqF2HmTL.zWJ9zjChg3yJYFXeGBQ2y3Ba1d1",
      "$6$$", "");
    T("$6$rounds=1234$abc0123456789$BCpt8zLrc"
      "/RcyuXmCDOE1ALqMXB2MH6n1g891HhFj8.w7LxGv.FTkqq6Vxc/km3Y0jE0j24jY5PIv/oOu6reg1",
        "$6$rounds=1234$abc0123456789$", "Xy01@#\x01\x02\x80\x7f\xff\r\n\x81\t !");
    T("$6$salt1234$44TYByJTJkEpcbmj8XzV6H7ltUN.7FUFFWKGeph85fMuAME8f1yQnXxqPbz6gfMq7tisOjTrxg3S2DDebWewt1",
      "$6$salt1234$", "Aa@\xaa 0123456789");
    T("$6$rounds=1000$$hETGMQQ5sXu1md3PrmRCM4AxTgbNpYQaIhk4xQzvCiNfeogfCR9PZGSRXghUOxMAPFU2wuz/ZLafIHrHopO.60",
      "$6$rounds=1$", "a");
    T("$6$rounds=1234$$.9spjeVb1fINMikxgAZEpur.ZQ/Gte./HuKWm2sAZ37eK3e1.ZdfRuatKdR/H..lKQfb2AB.RtHh7xKm.FE2J.",
      "$6$rounds=00001234$", "a");

    /* official tests */
    T("$6$saltstring$svn8UoSVapNtMuq1ukKS4tPQd8iKwSMHWjl/O817G3uBnIFNjnQJuesI68u4OTLiBFdcbYEdFCoEOfaS35inz1",
      "$6$saltstring", "Hello world!");
    T("$6$rounds=5000$toolongsaltstrin$lQ8jolhgVRVhY4b5pZKaysCLi0QBx"
      "GoNeKQzQ3glMhwllF7oGDZxUhx1yxdYcz/e1JSbq3y6JMxxl8audkUEm0",
      "$6$rounds=5000$toolongsaltstring", "This is just a test");
    T("$6$rounds=1400$anotherlongsalts$POfYwTEok97VWcjxIiSOjiykti.o"
      "/pQs.wPvMxQ6Fm7I6IoYN3CmLs66x9t0oSwbtEW7o7UmJEiDwGqd8p4ur1",
      "$6$rounds=1400$anotherlongsaltstring", 
      "a very much longer text to encrypt.  This one even stretches over morethan one line.");
    T("$6$rounds=1000$roundstoolow$kUMsbe306n21p9R.FRkW3IGn."
      "S9NPN0x50YhH1xhLsPuWGsUSklZt58jaTfF4ZEQpyUNGc0dqbpBYYBaHHrsX.",
      "$6$rounds=10$roundstoolow", "the minimum number is still observed");
}
