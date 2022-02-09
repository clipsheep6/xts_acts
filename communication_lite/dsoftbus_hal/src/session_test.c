#include <string.h>
#include <unistd.h>

#include "hctest.h"
#include "securec.h"
#include "session.h"
#include "softbus_def.h"
#include "softbus_config_type.h"
#include "softbus_bus_center.h"
#include "softbus_errcode.h"

#define TEST_PKG_NAME "com.softbus.test"
#define DEFAULT_NODE_STATE_CB_NUM 9

const char *g_pkgName = "dms";
const char *g_sessionName = "ohos.distributedschedule.dms.test";
const char *g_networkid = "ABCDEF00ABCDEF00ABCDEF00ABCDEF00ABCDEF00ABCDEF00ABCDEF00ABCDEF00";
const char *g_groupid = "TEST_GROUP_ID";
static SessionAttribute g_sessionAttr = {
    .dataType = TYPE_BYTES,
};


static ISessionListener g_sessionlistener = {
    .OnSessionOpened = 1,
};

LITE_TEST_SUIT(dsoftbus, session, SessionTestSuite);

static BOOL SessionTestSuiteSetUp(void)
{
    printf("----------test case with SessionTestSuite start-------------\n");
    return TRUE;
}

static BOOL SessionTestSuiteTearDown(void)
{
    printf("----------test case with SessionTestSuite end-------------\n");
    return TRUE;
}

/**
 * @tc.name: CreateSessionServerTest001
 * @tc.desc: extern module active publish, use the wrong parameter.
 * @tc.type: FUNC99
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, CreateSessionServerTest001, Function | MediumTest | Level0)
{
    int ret;
    ret = CreateSessionServer(NULL, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = CreateSessionServer(g_pkgName, NULL, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = CreateSessionServer(g_pkgName, g_sessionName, NULL);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = CreateSessionServer(g_pkgName, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = RemoveSessionServer(g_pkgName, g_sessionName);
    TEST_ASSERT_EQUAL_INT(-1, ret);
}

/**
 * @tc.name: CreateSessionServerTest002
 * @tc.desc: extern module active publish, use the normal parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, CreateSessionServerTest002, Function | MediumTest | Level0)
{
    int ret;
    ret = CreateSessionServer(g_pkgName, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = RemoveSessionServer(g_pkgName, g_sessionName);
    TEST_ASSERT_EQUAL_INT(-1, ret);
}

/**
 * @tc.name: CreateSessionServerTest003
 * @tc.desc: extern module active publish, use the same normal parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, CreateSessionServerTest003, Function | MediumTest | Level0)
{
    int ret;
    ret = CreateSessionServer(g_pkgName, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = CreateSessionServer(g_pkgName, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = RemoveSessionServer(g_pkgName, g_sessionName);
    TEST_ASSERT_EQUAL_INT(-1, ret);
}

/**
 * @tc.name: CreateSessionServerTest004
 * @tc.desc: extern module active publish, create 9 sessionServer, succ 8, failed at 9th.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, CreateSessionServerTest004, Function | MediumTest | Level0)
{
    int ret, i;
    char const *sessionName[MAX_SESSION_SERVER_NUMBER + 1] = {
        "ohos.distributedschedule.dms.test0",
        "ohos.distributedschedule.dms.test1",
        "ohos.distributedschedule.dms.test2",
        "ohos.distributedschedule.dms.test3",
        "ohos.distributedschedule.dms.test4",
        "ohos.distributedschedule.dms.test5",
        "ohos.distributedschedule.dms.test6",
        "ohos.distributedschedule.dms.test7",
        "ohos.distributedschedule.dms.test8"
    };

    for (i = 0; i < MAX_SESSION_SERVER_NUMBER; i++) {
        ret = CreateSessionServer(g_pkgName, sessionName[i], &g_sessionlistener);
        TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);
    }
    ret = CreateSessionServer(g_pkgName, sessionName[i], &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    for (i = 0; i < MAX_SESSION_SERVER_NUMBER; i++) {
        ret = RemoveSessionServer(g_pkgName, sessionName[i]);
        TEST_ASSERT_EQUAL_INT(-1, ret);
    }
}

/**
 * @tc.name: RemoveSessionServerTest001
 * @tc.desc: extern module active publish, use the wrong parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, RemoveSessionServerTest001, Function | MediumTest | Level0)
{
    int ret;
    ret = RemoveSessionServer(NULL, g_sessionName);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = RemoveSessionServer(g_pkgName, NULL);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);
}

/**
 * @tc.name: RemoveSessionServerTest002
 * @tc.desc: extern module active publish, use the same parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, RemoveSessionServerTest002, Function | MediumTest | Level0)
{
    int ret;
    ret = CreateSessionServer(g_pkgName, g_sessionName, &g_sessionlistener);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = RemoveSessionServer(g_pkgName, g_sessionName);
    TEST_ASSERT_EQUAL_INT(-1, ret);

    ret = RemoveSessionServer(g_pkgName, g_sessionName);
    TEST_ASSERT_EQUAL_INT(-1, ret);
}

/**
 * @tc.name: OpenSessionTest001
 * @tc.desc: extern module active publish, use the wrong parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, OpenSessionTest001, Function | MediumTest | Level0)
{
    int ret;
    g_sessionAttr.dataType = TYPE_BYTES;

    ret = OpenSession(NULL, g_sessionName, g_networkid, g_groupid, &g_sessionAttr);
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);

    ret = OpenSession(g_sessionName, NULL, g_networkid, g_groupid, &g_sessionAttr);
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);

    ret = OpenSession(g_sessionName, g_sessionName, NULL, g_groupid, &g_sessionAttr);
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);

    ret = OpenSession(g_sessionName, g_sessionName, g_networkid, NULL, &g_sessionAttr);
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);

    ret = OpenSession(g_sessionName, g_sessionName, g_networkid, g_groupid, NULL);
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);

    g_sessionAttr.dataType = TYPE_BUTT;
    ret = OpenSession(g_sessionName, g_sessionName, g_networkid, g_groupid, &g_sessionAttr);
    g_sessionAttr.dataType = TYPE_BYTES;
    TEST_ASSERT_EQUAL_INT(INVALID_SESSION_ID, ret);
}

/**
 * @tc.name: SendBytesTest001
 * @tc.desc: extern module active publish, use the wrong parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, SendBytesTest001, Function | MediumTest | Level0)
{
    int ret;
    int sessionId = 1;
    const char *data = "testdata";
    uint32_t len = strlen(data);
    uint32_t maxLen;

    ret = SendBytes(-1, data, len);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_TRANS_INVALID_SESSION_ID, ret);

    ret = SendBytes(sessionId, NULL, len);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = SendBytes(sessionId, data, 0);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = SoftbusGetConfig(SOFTBUS_INT_MAX_BYTES_LENGTH, (unsigned char *)&maxLen, sizeof(maxLen));
    TEST_ASSERT_EQUAL_INT(SOFTBUS_OK, ret);
    ret = SendMessage(sessionId, data, maxLen + 1);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);
}

/**
 * @tc.name: SendMessageTest001
 * @tc.desc: extern module active publish, use the wrong parameter.
 * @tc.type: FUNC
 * @tc.require:
 */
LITE_TEST_CASE( SessionTestSuite, SendMessageTest001, Function | MediumTest | Level0)
{
    int ret;
    int sessionId = 1;
    const char *data = "testdata";
    uint32_t len = strlen(data);
    uint32_t maxLen;

    ret = SendMessage(-1, data, len);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_TRANS_INVALID_SESSION_ID, ret);

    ret = SendMessage(sessionId, NULL, len);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = SendMessage(sessionId, data, 0);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);

    ret = SoftbusGetConfig(SOFTBUS_INT_MAX_MESSAGE_LENGTH, (unsigned char *)&maxLen, sizeof(maxLen));
    TEST_ASSERT_EQUAL_INT(SOFTBUS_OK, ret);
    ret = SendMessage(sessionId, data, maxLen + 1);
    TEST_ASSERT_EQUAL_INT(SOFTBUS_INVALID_PARAM, ret);
}

RUN_TEST_SUITE(SessionTestSuite);