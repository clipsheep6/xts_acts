#include <search.h>
#include <cstdlib>
#include <cstring>

#include "gtest/gtest.h"

#include "test.h"

using namespace std;
using namespace testing::ext;
class SearchTsearch : public testing::Test {};

struct e {
    const char *k;
    int v;
};

static int countt;
static void *root;
static struct e tab[100];
static struct e *cur = tab;

static int cmp(const void *a, const void *b)
{
    return strcmp(((struct e*)a)->k, ((struct e*)b)->k);
}

static int wantc = 'a';
static void act(const void *node, VISIT v, int d)
{
    struct e *e = (struct e *)(*(void**)(node));
    if (v == preorder) {
        EXPECT_GE(e->k[0], wantc) << "preorder visited node \"" << e->k << "\" before \"" << wantc << "\"\n" << endl;
    }
    if (v == endorder) {
        EXPECT_LT(e->k[0], wantc) << "endorder visited node \"" << e->k << "\" after \"" << wantc << "\"\n" << endl;
    }
    if (v == postorder) {
        EXPECT_EQ(wantc, e->k[0]) << "postorder visited node \"" << e->k << "\", wanted \"" << wantc << "\"\n" << endl;
    }
    if (v == leaf) {
        EXPECT_EQ(wantc, e->k[0]) << "visited leaf node \"" << e->k << "\", wanted \"" << wantc << "\"\n" << endl;
    }
    if (v == postorder || v == leaf) {
        wantc++;
    }
}

static const void *parent;
static const char *searchkey;
static void getparent(const void *node, VISIT v, int d)
{
    static const void *p;
    struct e *e = (struct e *)(*(void**)(node));
    if (v == preorder || v == leaf) {
        if (strcmp(searchkey, e->k) == 0) {
            parent = p;
        }
    }
    if (v == preorder || v == postorder) {
        p = node;
    }
}

static struct e *get(const char *k)
{
    struct e et;
    et.k = k;
    void **p = reinterpret_cast<void **>(tfind(&et, &root, cmp));
    if (!p) {
        return nullptr;
    }
    return (struct e *)(*p);
}

static struct e *set_kv(const char *k, int v)
{
    void **p;
    cur->k = k;
    cur->v = v;
    if (!get(k)) {
        countt++;
    }
    p = reinterpret_cast<void **>(tsearch(cur++, &root, cmp));
    EXPECT_FALSE(!p || strcmp(((struct e*)*p)->k, k) != 0) << "tsearch " << k << " " << v << " failed" << endl;
    if (!p) {
        countt--;
        return nullptr;
    }
    return (struct e *)(*p);
}

static void *del(const char *k)
{
    struct e et;
    et.k = k;
    void *p = tdelete(&et, &root, cmp);
    if (p) {
        countt--;
    }
    return p;
}

/**
 * @tc.name      : SearchTsearchSuite001
 * @tc.desc      :
 * @tc.level     : Level 1
 */
HWTEST_F(SearchTsearch, SearchTsearcTest, Function | MediumTest | Level2)
{
    struct e *e;
    void *p;

    set_kv("f", 6);
    set_kv("b", 2);
    set_kv("c", 3);
    set_kv("e", 5);
    set_kv("h", 8);
    set_kv("g", 7);
    set_kv("a", 1);
    set_kv("d", 4);

    e = get("a");
    EXPECT_FALSE((!e) || (e->v != 1)) << "tfind a failed" << endl;
    EXPECT_FALSE(get("z")) << "tfind z should fail" << endl;
    e = set_kv("g", 9);
    EXPECT_FALSE(e && e->v != 7) << "tsearch g 9 returned data " << e->v << ", wanted 7" << endl;
    e = set_kv("g", 9);
    EXPECT_FALSE(e && e->v != 7) << "tsearch g 9 returned data " << e->v << ", wanted 7" << endl;
    e = set_kv("i", 9);
    EXPECT_FALSE(e && e->v != 9) << "tsearch i 9 returned data " << e->v << ", wanted 9" << endl;

    EXPECT_FALSE(del("foobar")) << "tdelete foobar should fail" << endl;

    twalk(root, act);
    EXPECT_EQ(wantc, 'j') << "twalk did not visit all nodes (wanted 'j' got '" << wantc << "')" << endl;
    searchkey = "h";
    twalk(root, getparent);
    EXPECT_NE((void *)0, parent) << "twalk search for key \"" << searchkey << "\" failed" << endl;
    p = del("h");
    EXPECT_EQ(p, parent) << "tdelete h failed to return parent (got " << p << " wanted " << parent << ")" << endl;

    e = (struct e *)(*(void**)root);
    EXPECT_TRUE(del(e->k)) << "tdelete root \"" << e->k << "\" failed (returned 0)" << endl;

    for (; countt; countt--) {
        e = (struct e *)(*(void**)root);
        EXPECT_TRUE(tdelete(e, &root, cmp)) << "tdelete k=" << e->k << " failed during destruction" << endl;
    }
    EXPECT_FALSE(root) << "tree destruction failed: root is nonzero" << root << endl;
}
