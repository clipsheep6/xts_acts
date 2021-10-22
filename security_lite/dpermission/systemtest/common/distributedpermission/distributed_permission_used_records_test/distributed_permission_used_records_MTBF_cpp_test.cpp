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
using namespace OHOS::STPermissionUtil;
using namespace OHOS::DistributedHardware;
using std::string;
namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, "DistributedPermissionUsedRecordsMTBFCppTest"};
const int STRESS_TEST_TIME = 60 * 60 * 6;
const int THREAD_COUNT = 15;
}  // namespace
class DistributedPermissionUsedRecordsMTBFCppTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void StressFountion();
    static void TestFountion(std::string deviceId, int32_t ruid, int32_t duid);
    static void ExeAPI(std::string &deviceId, int32_t ruid, int32_t duid);
};

void DistributedPermissionUsedRecordsMTBFCppTest::SetUpTestCase(void)
{
    STDistibutePermissionUtil::Install(DPMS_THIRD_HAP_NAME);
}

void DistributedPermissionUsedRecordsMTBFCppTest::TearDownTestCase(void)
{
    STDistibutePermissionUtil::Uninstall(DPMS_THIRD_BUNDLE_NAME);
}

void DistributedPermissionUsedRecordsMTBFCppTest::SetUp(void)
{}

void DistributedPermissionUsedRecordsMTBFCppTest::TearDown(void)
{}

void DistributedPermissionUsedRecordsMTBFCppTest::TestFountion(std::string deviceId, int32_t ruid, int32_t duid)
{
    std::string str = "test  thread deviceId:" + deviceId;
    PERMISSION_LOG_INFO(LABEL, "%{public}s", str.c_str());

    auto starTime = std::chrono::system_clock::now();
    // 43200 second equals 12 hours
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
           STRESS_TEST_TIME) {
        ExeAPI(deviceId, ruid, duid);
    }
}

void DistributedPermissionUsedRecordsMTBFCppTest::ExeAPI(std::string &deviceId, int32_t ruid, int32_t duid)
{
    std::vector<FnPtr> vec;
    StressTestApi::GetPermissionUsedRecordTestFunction_01(vec);
    for (auto fn : vec) {
        bool result = fn(deviceId, ruid, duid);
        ASSERT_TRUE(result);
    }
}

void DistributedPermissionUsedRecordsMTBFCppTest::StressFountion()
{
    std::string packageName = DPMS_THIRD_BUNDLE_NAME;
    std::string deviceId = Constant::GetLocalDeviceId();
    std::cout << "deviceId ：" << deviceId << std::endl;
    int32_t ruid = STDistibutePermissionUtil::GetUidByBundleName(packageName);
    int32_t duid = 0;
    for (int i = 0; i < THREAD_COUNT; i++) {
        std::thread newThread(TestFountion, deviceId, ruid, duid);
        newThread.detach();
    }
    sleep(STRESS_TEST_TIME);
}

/**
 * @tc.name : stress test
 * @tc.number : DPMS_PermissionUsedRecord_0100
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(DistributedPermissionUsedRecordsMTBFCppTest, DPMS_PermissionUsedRecord_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DPMS_PermissionUsedRecord_0100  start";
    auto starTime = std::chrono::system_clock::now();
    DistributedPermissionUsedRecordsMTBFCppTest::StressFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    EXPECT_LE(STRESS_TEST_TIME, realTestTime);
    GTEST_LOG_(INFO) << "DPMS_PermissionUsedRecord_0100  end";
}
