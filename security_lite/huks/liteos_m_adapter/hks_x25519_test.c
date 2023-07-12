#include "hctest.h"

#include "hks_api.h"
#include "hks_type.h"

#define TEST_X25519_KEY_ALIAS "TEST_X25519_KEY_ALIAS"

/*
 * @tc.register: register a test suit named "HksX25519Test"
 * @param: test subsystem name
 * @param: c_example module name
 * @param: HksX25519Test test suit name
 */
LITE_TEST_SUIT(security, securityData, HksX25519Test);

/**
 * @tc.setup: define a setup for test suit, format:"HksX25519Test + SetUp"
 * @return: true——setup success
 */
static BOOL HksX25519TestSetUp()
{
    LiteTestPrint("HksInitialize Begin!");
    TEST_ASSERT_EQUAL(HKS_SUCCESS, HksInitialize());
    LiteTestPrint("HksInitialize End!");
    return TRUE;
}

/**
 * @tc.teardown: define a setup for test suit, format:"HksX25519Test + TearDown"
 * @return: true——teardown success
 */
static BOOL HksX25519TestTearDown()
{
    return TRUE;
}

/**
 * @tc.name: HksX25519Test.HksX25519Test001
 * @tc.desc: The static function will return true;
 * @tc.type: FUNC
 */
LITE_TEST_CASE(HksX25519Test, HksX25519Test001, Level1)
{
}

RUN_TEST_SUITE(HksX25519Test);
