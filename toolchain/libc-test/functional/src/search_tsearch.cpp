#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 700
#endif
#include <stdlib.h>
#include <string.h>
#include <search.h>
#include "test.h"
#include "gtest/gtest.h"
/**  
* @brief  register a test suit named "SearchTsearchSuite"  
* @param  test subsystem name is libc 
* @param  example module name is  Functional
* @param  test suit name is  SearchTsearchSuite
*/

using namespace std;
using namespace testing::ext;
class SearchTsearchSuite: public testing::Test {
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
 * @tc.name      : SearchTsearchSuite001
 * @tc.desc      : Test SearchTsearchSuite001 3 items whth async flush
 * @tc.level     : Level 1
 */
struct e {
	char *k;
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
	struct e *e = (struct e *)(*(void**)node);

	if (v == preorder)
		EXPECT_GE(e->k[0] , wantc) << "preorder visited node \"" << e->k << "\" before \"" << wantc << "\"\n" << endl;
	if (v == endorder)
		EXPECT_LT(e->k[0] , wantc) << "endorder visited node \"" << e->k << "\" after \"" << wantc << "\"\n" << endl;
	if (v == postorder)
		EXPECT_EQ(wantc , e->k[0]) << "postorder visited node \"" << e->k << "\", wanted \"" << wantc << "\"\n" << endl;
	if (v == leaf)
		EXPECT_EQ(wantc , e->k[0]) << "visited leaf node \"" << e->k << "\", wanted \"" << wantc << "\"\n" << endl;
	if (v == postorder || v == leaf)
		wantc++;
}

static const void *parent;
static char *searchkey;
static void getparent(const void *node, VISIT v, int d)
{
	static const void *p;
	struct e *e = (struct e *)(*(void**)node);

	if (v == preorder || v == leaf)
		if (strcmp(searchkey, e->k) == 0)
			parent = p;
	if (v == preorder || v == postorder)
		p = node;
}

struct e *get(char *k)
{
	struct e et;
	et.k = k;
	void **p = (void **)tfind(&et, &root, cmp);
	if (!p) return 0;
	return (struct e *)p;
}

struct e *set_kv(char *k, int v)
{
	void **p;
	cur->k = k;
	cur->v = v;
	if (!get(k))
		countt++;
	p = (void **)tsearch(cur++, &root, cmp);

	EXPECT_FALSE(!p || strcmp(((struct e*)*p)->k, k) != 0) << "tsearch " << k << " " << v << " failed" << endl;
	if (!p) {
		countt--;
		return 0;
	}
	return (struct e *)p;
}

void *del(char *k)
{
	struct e et;
	et.k = k;
	void *p = tdelete(&et, &root, cmp);
	if (p)
		countt--;
	return p;
}

HWTEST_F(SearchTsearchSuite, SearchTsearcTest, Function | MediumTest | Level2)
{
    struct e *e;
	void *p;

	set_kv((char *)"f", 6);
	set_kv((char *)"b", 2);
	set_kv((char *)"c", 3);
	set_kv((char *)"e", 5);
	set_kv((char *)"h", 8);
	set_kv((char *)"g", 7);
	set_kv((char *)"a", 1);
	set_kv((char *)"d", 4);

	e = get((char *)"a");
	EXPECT_FALSE((!e) || (e->v != 1)) << "tfind a failed" << endl;
	EXPECT_FALSE(get((char *)"z")) << "tfind z should fail" << endl;
	e = set_kv((char *)"g", 9);
	EXPECT_FALSE(e && e->v != 7) << "tsearch g 9 returned data " << e->v << ", wanted 7" << endl;
	e = set_kv((char *)"g", 9);
	EXPECT_FALSE(e && e->v != 7) << "tsearch g 9 returned data " << e->v << ", wanted 7" << endl;
	e = set_kv((char *)"i", 9);
	EXPECT_FALSE(e && e->v != 9) << "tsearch i 9 returned data " << e->v << ", wanted 9" << endl;

	EXPECT_FALSE(del((char *)"foobar")) << "tdelete foobar should fail" << endl;

	twalk(root, act);
	EXPECT_EQ(wantc,'j') << "twalk did not visit all nodes (wanted 'j' got '" << wantc << "')" << endl;
	searchkey = (char *)"h";
	twalk(root, getparent);
	EXPECT_NE((void *)0,parent) << "twalk search for key \"" << searchkey << "\" failed" << endl;
	p = del((char *)"h");
	EXPECT_EQ(p , parent) << "tdelete h failed to return parent (got " << p << " wanted " << parent << ")" << endl;

	e = (struct e *)(*(void**)root);
	EXPECT_TRUE(del(e->k)) << "tdelete root \"" << e->k << "\" failed (returned 0)" << endl;

	for (; countt; countt--) {
		e = (struct e *)(*(void**)root);
		EXPECT_TRUE(tdelete(e, &root, cmp)) << "tdelete k=" << e->k << " failed during destruction" << endl;
	}
	EXPECT_FALSE(root) << "tree destruction failed: root is nonzero" << root << endl;

}
