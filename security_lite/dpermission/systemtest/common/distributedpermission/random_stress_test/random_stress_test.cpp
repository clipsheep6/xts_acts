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
#include <iostream>
#include <thread>
#include <chrono>
#include "permission_log.h"

#include "stress_test_api.h"
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using std::string;
namespace {
const int RANDOM_STRESS_TEST_TIME = 21600;
}
class RandomStressTest : public testing::Test {
public:
    static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION, "RandomStressTest"};
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void StressFountion();
    static void TestFountion(int i);
    static void RandomExeAPI();
};

void RandomStressTest::SetUpTestCase(void)
{}

void RandomStressTest::TearDownTestCase(void)
{}

void RandomStressTest::SetUp(void)
{}

void RandomStressTest::TearDown(void)
{}

void RandomStressTest::TestFountion(int i)
{
    std::string str = "test  thread" + std::to_string(i);
    PERMISSION_LOG_INFO(LABEL, "%{public}s", str.c_str());
    while (true) {
        RandomExeAPI();
        int sleepNum = 2;
        sleep(sleepNum);
    }
}

void RandomStressTest::RandomExeAPI()
{
    std::vector<FnPtr> vec;
    StressTestAPI::GetTestFunction(vec);
    int tar = std::rand() % vec.size();
    std::cout << tar << std::endl;
    EXPECT_TRUE(vec[0]());
}
void RandomStressTest::StressFountion()
{
    int threadCount = 15;
    for (int i = 0; i < threadCount; i++) {
        std::thread newThread(TestFountion, i);
        newThread.detach();
    }
    sleep(RANDOM_STRESS_TEST_TIME);
}

/**
 * @tc.name : api random stress test
 * @tc.number : DPMS_DFX_0500
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(RandomStressTest, DPMS_DFX_0500, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "RandomStressTest  start";
    auto starTime = std::chrono::system_clock::now();
    RandomStressTest::StressFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    EXPECT_LE(RANDOM_STRESS_TEST_TIME, realTestTime);
    GTEST_LOG_(INFO) << "RandomStressTest  end";
}
