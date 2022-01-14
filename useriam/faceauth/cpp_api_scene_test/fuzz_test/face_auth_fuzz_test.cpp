/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <cstdio>
#include <fstream>
#include <sstream>
#include <gtest/gtest.h>
#include <mutex>
#include "fuzz_test_manager.h"
#include "surface.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::UserIAM::FaceAuth;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FaceAuthFuzzTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

void FaceAuthFuzzTest::SetUpTestCase(void)
{}

void FaceAuthFuzzTest::TearDownTestCase(void)
{}

void FaceAuthFuzzTest::SetUp(void)
{}

void FaceAuthFuzzTest::TearDown(void)
{}

/**
 * @tc.name :  Fuzz Test
 * @tc.number : CPPAPI_FUZZ_0100
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(FaceAuthFuzzTest, CPPAPI_FUZZ_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "FuzzTest  start";
    auto starTime = std::chrono::system_clock::now();
    // 43200 second equals 12 hours
    int fuzzTestTime = 43200;
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
        fuzzTestTime) {
        FuzzTestManager::GetInstance()->StartFuzzTest();
    }
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    EXPECT_LE(fuzzTestTime, realTestTime);
    GTEST_LOG_(INFO) << "FuzzTest  end";
}
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
