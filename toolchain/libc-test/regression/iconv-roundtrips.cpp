#include <cstring>
#include <iconv.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class IconvRoundtrips : public testing::Test {};

/**
 * @tc.name      : iconvRoundtripsTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(IconvRoundtrips, IconvRoundtripsTest, Function | MediumTest | Level2)
{
    static char *test_charsets[] = {
        const_cast<char*>("iso-8859-1"),
        const_cast<char*>("iso-8859-2"),
        const_cast<char*>("iso-8859-4"),
        const_cast<char*>("iso-8859-5"),
        const_cast<char*>("iso-8859-9"),
        const_cast<char*>("iso-8859-10"),
        const_cast<char*>("iso-8859-13"),
        const_cast<char*>("iso-8859-14"),
        const_cast<char*>("iso-8859-15"),
        const_cast<char*>("iso-8859-16"),
        0};
    char all_codepoints[256];
    int i;

    for (i = 0; i < 256; i++)
        all_codepoints[i] = 255 - i;
    for (i = 0; test_charsets[i]; i++) {
        iconv_t there = iconv_open(const_cast<char*>("UTF-8"), test_charsets[i]);
        if (there == (iconv_t)-1)
            continue;
        iconv_t andback = iconv_open(test_charsets[i], const_cast<char*>("UTF-8"));
        if (andback == (iconv_t)-1) {
            iconv_close(there);
            continue;
        }
        char u8buf[1024];
        char buf[256];
        size_t u8rem = sizeof u8buf;
        char *tmp1 = (char*){all_codepoints};
        size_t tmp2 = (size_t){sizeof all_codepoints};
        char *tmp3 = (char*){u8buf};
        int r1 = (int)iconv(there, &tmp1, &tmp2, &tmp3, &u8rem);
        size_t u8len = sizeof u8buf - u8rem;
        tmp1 = (char*){u8buf};
        tmp2 = (size_t){u8len};
        tmp3 = (char*){buf};
        size_t tmp4 = (size_t){sizeof buf};
        int r2 = (int)iconv(andback, &tmp1, &tmp2, &tmp3, &tmp4);

        EXPECT_FALSE(r1) << "got " << r1 << " converting from " << test_charsets[i] << endl;
        EXPECT_FALSE(r2) << "got " << r2 << " converting back to " << test_charsets[i] << endl;

        EXPECT_FALSE(memcmp(all_codepoints, buf, sizeof buf)) << "round trip corrupted "
                                                              << test_charsets[i] << " characters" << endl;

        iconv_close(there);
        iconv_close(andback);
    }
}
