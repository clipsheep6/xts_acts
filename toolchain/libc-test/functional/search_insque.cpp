#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <stdlib.h>
#include <search.h>
#include "gtest/gtest.h"

using namespace std;
using namespace testing::ext;
class SearchInsqueSuite : public testing::Test {};

struct q {
	struct q *n;
	struct q *p;
	int i;
};

static struct q *new_data(int i)
{
    struct q *q = (struct q *)malloc(sizeof *q);
    q->i = i;
    return q;
}

/**
 * @tc.name      : SearchInsqueTest
 * @tc.desc      :
 * @tc.level     : Level 2
 */
HWTEST_F(SearchInsqueSuite, SearchInsqueTest, Function | MediumTest | Level2)
{
    struct q *q = (struct q *)new_data(0);
    struct q *p;
    int i;

    insque(q, 0);
    for (i = 1; i < 10; i++) {
        insque((void *)new_data(i), q);
        q = q->n;
    }
    p = q;
    while (q) {
        EXPECT_EQ(q->i, --i) << "walking queue: got " << q->i << ", wanted " << i << endl;
        q = q->p;
    }
    remque(p->p);
    EXPECT_EQ(p->p->i, p->i - 2) << "remque: got " << p->p->i << ", wanted " << p->i - 2 << endl;
    EXPECT_EQ(p->p->n->i, p->i) << "remque: got " << p->p->n->i << ", wanted " << p->i << endl;
}
