#ifndef ACTSAUDIODECODER_NDK_FUNC_TEST_H
#define ACTSAUDIODECODER_NDK_FUNC_TEST_H

#include "gtest/gtest.h"
#include "ADecEncNdkSample.h"

namespace OHOS {
namespace Media {
class ActsAudioDecEncNdkTest : public testing::Test {
public:
    // Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void)
    {
        printf("ActsAudioDecEncNdkTest::SetUpTestCase");
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void)
    {
        printf("ActsAudioDecEncNdkTest::TearDownTestCase");
    }
    // Preset action of the test case
    void SetUp(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsAudioDecEncNdkTest::SetUp");
    }
    // Cleanup action of the test case
    virtual void TearDown(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsAudioDecEncNdkTest::TearDown");
    }
    // const ::testing::TestInfo *testInfo_ = nullptr;
};
}
}
#endif