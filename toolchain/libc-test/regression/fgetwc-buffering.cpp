#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "test.h"
#include "gtest/gtest.h"

#define A(c) EXPECT_FALSE(!(c)) << #c << " failed" << endl;

using namespace std;
using namespace testing::ext;
class FgetwcBufferingSuite : public testing::Test {};

/**
 * @tc.name      : FgetwcBufferingTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(FgetwcBufferingSuite, FgetwcBufferingTest, Function | MediumTest | Level2)
{
    t_setutf8();

    int p[2];
    A(pipe(p) == 0);
    A(write(p[1], "x\340\240", 3) == 3);
    A(dup2(p[0], 0) == 0);
    wint_t wc;
    wc = fgetwc(stdin);
    A(wc == 'x');
    A(write(p[1], "\200", 1) == 1);
    close(p[1]);

    wc = fgetwc(stdin);
    EXPECT_EQ(wc, 0x800) << "wanted 0x800, got 0x" << (unsigned)wc << endl;
                        
    errno = 0;
    wc = fgetwc(stdin);
    EXPECT_EQ(wc, WEOF) << "wanted WEOF, got 0x" << (unsigned)wc << endl;
                        
    EXPECT_EQ(errno, 0) << "wanted errno==0, got " << errno << " (" << strerror(errno) << endl;
                        
    A(feof(stdin) != 0);
    A(ferror(stdin) == 0);
}
