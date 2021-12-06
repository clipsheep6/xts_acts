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
#include "permission_log.h"
#include "fuzz_test_manager.h"
#include "test_config_parser.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using std::string;

class DPMSFuzzTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

void DPMSFuzzTest::SetUpTestCase(void)
{}

void DPMSFuzzTest::TearDownTestCase(void)
{}

void DPMSFuzzTest::SetUp(void)
{}

void DPMSFuzzTest::TearDown(void)
{}

/**
 * @tc.name :  Fuzz Test
 * @tc.number : DPMS_DFX_0600
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(DPMSFuzzTest, DPMS_DFX_0600, TestSize.Level3)
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
