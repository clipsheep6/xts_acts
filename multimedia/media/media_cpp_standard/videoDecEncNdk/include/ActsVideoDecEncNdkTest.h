#ifndef ACTSVIDEODECENC_NDK_FUNC_TEST_H
#define ACTSVIDEODECENC_NDK_FUNC_TEST_H

#include "gtest/gtest.h"
#include "VDecEncNdkSample.h"

namespace OHOS {
namespace Media {
class ActsVideoDecEncNdkTest : public testing::Test {
public:
    // Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void)
    {
        printf("ActsVideoDecEncNdkTest::SetUpTestCase");
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void)
    {
        printf("ActsVideoDecEncNdkTest::TearDownTestCase");
    }
    // Preset action of the test case
    void SetUp(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsVideoDecEncNdkTest::SetUp");
    }
    // Cleanup action of the test case
    virtual void TearDown(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsVideoDecEncNdkTest::TearDown");
    }
    // const ::testing::TestInfo *testInfo_ = nullptr;
};
}
}
#endif
