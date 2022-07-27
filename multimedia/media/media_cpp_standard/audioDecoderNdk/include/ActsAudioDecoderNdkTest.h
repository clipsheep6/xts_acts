#ifndef ACTSAUDIODECODER_NDK_FUNC_TEST_H
#define ACTSAUDIODECODER_NDK_FUNC_TEST_H

#include "gtest/gtest.h"
#include "ADecNdkSample.h"

namespace OHOS {
namespace Media {
class ActsAudioDecoderNdkTest : public testing::Test {
public:
    // Preset action of the test suite, which is executed before the first test case
    static void SetUpTestCase(void)
    {
        printf("ActsAudioDecoderNdkTest::SetUpTestCase");
    }
    // Test suite cleanup action, which is executed after the last test case
    static void TearDownTestCase(void)
    {
        printf("ActsAudioDecoderNdkTest::TearDownTestCase");
    }
    // Preset action of the test case
    void SetUp(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsAudioDecoderNdkTest::SetUp");
    }
    // Cleanup action of the test case
    virtual void TearDown(void)
    {
        // testInfo_ = ::testing::UnitTest::GetInstance()->current_test_info();
        printf("ActsAudioDecoderNdkTest::TearDown");
    }
    // const ::testing::TestInfo *testInfo_ = nullptr;
};
}
}
#endif