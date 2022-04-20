#include <cstdio>
#include <cstring>
#include <cwchar>
#include <cstdlib>
#include <clocale>
#include <langinfo.h>
#include <securec.h>

#include "gtest/gtest.h"

static mbstate_t st, st2;

#define T(f, x, m) do {                                                                            \
    memset_s(&st, sizeof st - 1, 0, sizeof st);                                                                     \
    EXPECT_EQ((i = (f)), (x)) << #f << " failed (" << m << ") got " << i << " want " << x << endl; \
} while (0)

#define TCHAR(f, x, m) do {                                                                            \
    memset_s(&st, sizeof st - 1, 0, sizeof st);                                                                         \
    EXPECT_EQ((i = (f)), (x)) << #f << " failed (" << m << ") got 0x" << i << " want 0x" << x << endl; \
} while (0)

using namespace std;
using namespace testing::ext;
class Mbc : public testing::Test {};

/**
 * @tc.name      : MbcTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Mbc, MbcTest, Function | MediumTest | Level2)
{
    const char *cs;
    int i;
    wchar_t wc, wcs[32];

    (void)(setlocale(LC_CTYPE, "en_US.UTF-8") ||
           setlocale(LC_CTYPE, "en_GB.UTF-8") ||
           setlocale(LC_CTYPE, "en.UTF-8") ||
           setlocale(LC_CTYPE, "POSIX.UTF-8") ||
           setlocale(LC_CTYPE, "C.UTF-8") ||
           setlocale(LC_CTYPE, "UTF-8") ||
           setlocale(LC_CTYPE, ""));

    T(mbsrtowcs(wcs, (cs = "abcdef", &cs), 3, &st), 3, "wrong semantics for wcs buf len");
    T(mbsrtowcs(wcs, (cs = "abcdef", &cs), 8, &st), 6, "wrong semantics for wcs buf len");
    T(mbsrtowcs(nullptr, (cs = "abcdef", &cs), 2, &st), 6, "wrong semantics for NULL wcs");

    ASSERT_FALSE(strcmp(nl_langinfo(CODESET), "UTF-8"));

    T(mbrtowc(&wc, "\x80", 1, &st), -1, "failed to catch error");
    T(mbrtowc(&wc, "\xc0", 1, &st), -1, "failed to catch illegal initial");

    T(mbrtowc(&wc, "\xc0\x80", 2, &st), -1, "aliasing nul");
    T(mbrtowc(&wc, "\xc0\xaf", 2, &st), -1, "aliasing slash");
    T(mbrtowc(&wc, "\xe0\x80\xaf", 3, &st), -1, "aliasing slash");
    T(mbrtowc(&wc, "\xf0\x80\x80\xaf", 4, &st), -1, "aliasing slash");
    T(mbrtowc(&wc, "\xf8\x80\x80\x80\xaf", 5, &st), -1, "aliasing slash");
    T(mbrtowc(&wc, "\xfc\x80\x80\x80\x80\xaf", 6, &st), -1, "aliasing slash");
    T(mbrtowc(&wc, "\xe0\x82\x80", 3, &st), -1, "aliasing U+0080");
    T(mbrtowc(&wc, "\xe0\x9f\xbf", 3, &st), -1, "aliasing U+07FF");
    T(mbrtowc(&wc, "\xf0\x80\xa0\x80", 4, &st), -1, "aliasing U+0800");
    T(mbrtowc(&wc, "\xf0\x8f\xbf\xbd", 4, &st), -1, "aliasing U+FFFD");

    T(mbrtowc(&wc, "\xed\xa0\x80", 3, &st), -1, "failed to catch surrogate");
    T(mbrtowc(&wc, "\xef\xbf\xbe", 3, &st), 3, "failed to accept U+FFFE");
    T(mbrtowc(&wc, "\xef\xbf\xbf", 3, &st), 3, "failed to accept U+FFFF");
    T(mbrtowc(&wc, "\xf4\x8f\xbf\xbe", 4, &st), 4, "failed to accept U+10FFFE");
    T(mbrtowc(&wc, "\xf4\x8f\xbf\xbf", 4, &st), 4, "failed to accept U+10FFFF");

    T(mbrtowc(&wc, "\xc2\x80", 2, &st), 2, "wrong length");
    TCHAR((mbrtowc(&wc, "\xc2\x80", 2, &st), wc), 0x80, "wrong char");
    T(mbrtowc(&wc, "\xe0\xa0\x80", 3, &st), 3, "wrong length");
    TCHAR((mbrtowc(&wc, "\xe0\xa0\x80", 3, &st), wc), 0x800, "wrong char");
    T(mbrtowc(&wc, "\xf0\x90\x80\x80", 4, &st), 4, "wrong length");
    TCHAR((mbrtowc(&wc, "\xf0\x90\x80\x80", 4, &st), wc), 0x10000, "wrong char");

    memset(&st2, 0, sizeof st2);
    T(mbrtowc(&wc, "\xc2", 1, &st2), -2, "failed to accept initial byte");
    T(mbrtowc(&wc, "\x80", 1, &st2), 1, "failed to resume");
    TCHAR(wc, 0x80, "wrong char");

    memset(&st2, 0, sizeof st2);
    T(mbrtowc(&wc, "\xc2", 1, &st2), -2, "failed to accept initial byte");
    T(mbsrtowcs(wcs, (cs = "\xa0""abc",&cs),32, &st2), 4, "failed to resume");
    TCHAR(wcs[0], 0xa0, "wrong char");
    TCHAR(wcs[1], 'a', "wrong char");
    T(!cs, 1, "wrong final position");
}
