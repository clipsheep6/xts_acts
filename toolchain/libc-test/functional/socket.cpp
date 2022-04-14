#include <cstdio>
#include <cerrno>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>
#include <fcntl.h>

#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class Socket : public testing::Test {};

/**
 * @tc.name      : SocketTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(Socket, SocketfTest, Function | MediumTest | Level2)
{
    struct sockaddr_in sa = {.sin_family = AF_INET};
    int s, c, t;
    char buf[100];

    EXPECT_GE((s = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)), 0);
    EXPECT_EQ(bind(s, (const struct sockaddr *)&sa, sizeof(sa)), 0);
    EXPECT_EQ(getsockname(s, (struct sockaddr *)&sa, (socklen_t[]){sizeof sa}), 0);
    struct timeval tv;
    tv.tv_usec = 1;
    EXPECT_EQ(setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(struct timeval)), 0);
    EXPECT_GE((c = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)), 0);
    sa.sin_addr.s_addr = htonl(0x7f000001);
    EXPECT_EQ(sendto(c, (const void *)"x", 1, 0, (const struct sockaddr *)&sa, sizeof sa), 1);
    EXPECT_EQ(recvfrom(s, buf, sizeof buf, 0, (struct sockaddr *)&sa, (socklen_t[]){sizeof sa}), 1);
    EXPECT_EQ(buf[0], 'x');
    close(c);
    close(s);

    memset(&sa, 0, sizeof sa);
    sa.sin_family = AF_INET;
    EXPECT_GE((s = socket(PF_INET, SOCK_STREAM | SOCK_CLOEXEC, IPPROTO_TCP)), 0);
    EXPECT_TRUE(fcntl(s, F_GETFD) & FD_CLOEXEC) << "SOCK_CLOEXEC did not work" << endl;
    EXPECT_EQ(bind(s, (const struct sockaddr *)&sa, sizeof sa), 0);
    EXPECT_EQ(getsockname(s, (struct sockaddr *)&sa, (socklen_t[]){sizeof sa}), 0);
    sa.sin_addr.s_addr = htonl(0x7f000001);

    EXPECT_EQ(listen(s, 1), 0);

    EXPECT_GE((c = socket(PF_INET, SOCK_STREAM | SOCK_NONBLOCK, IPPROTO_TCP)), 0);
    EXPECT_TRUE(fcntl(c, F_GETFL) & O_NONBLOCK) << "SOCK_NONBLOCK did not work" << endl;
    EXPECT_TRUE(connect(c, (const struct sockaddr *)&sa, sizeof sa) == 0 || errno == EINPROGRESS);

    socklen_t addrlenn = (socklen_t){sizeof sa};
    EXPECT_GE((t = accept(s, (struct sockaddr *)&sa, &addrlenn)), 0);

    close(t);
    close(c);
    close(s);
}
