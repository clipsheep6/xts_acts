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
#include "permission_kit.h"

#include "stress_test_api.h"
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::DistributedHardware;
using std::string;
namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, "DpmsDuidTransformMTBFCppTest"};
const int STRESS_TEST_TIME = 60 * 60 * 6;
}  // namespace
class DpmsDuidTransformMTBFCppTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void StressFountion();
    static void TestFountion(std::string deviceId, int32_t ruid);
    static void ExeAPI(std::string &deviceId, int32_t ruid);
};

void DpmsDuidTransformMTBFCppTest::SetUpTestCase(void)
{
    STDistibutePermissionUtil::Install(THIRD_INCLUDE_USE_BY_lOCAL_HAP_NAME_ADD_V1);
}

void DpmsDuidTransformMTBFCppTest::TearDownTestCase(void)
{
    STDistibutePermissionUtil::Uninstall(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
}

void DpmsDuidTransformMTBFCppTest::SetUp(void)
{}

void DpmsDuidTransformMTBFCppTest::TearDown(void)
{}

void DpmsDuidTransformMTBFCppTest::TestFountion(std::string deviceId, int32_t ruid)
{
    std::string str = "test  thread deviceId:" + deviceId;
    PERMISSION_LOG_INFO(LABEL, "%{public}s", str.c_str());

    auto starTime = std::chrono::system_clock::now();
    // 43200 second equals 12 hours
    while (int(std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - starTime).count()) <=
           STRESS_TEST_TIME) {
        ExeAPI(deviceId, ruid);
    }
}

void DpmsDuidTransformMTBFCppTest::ExeAPI(std::string &deviceId, int32_t ruid)
{
    std::vector<FnPtr> vec;
    DistibutePermissionStressTest::GetDpmsDuidTranstormTestFunction_01(vec);
    for (auto fn : vec) {
        bool result = fn(deviceId, ruid);
        ASSERT_TRUE(result);
    }
}

void DpmsDuidTransformMTBFCppTest::StressFountion()
{
    std::string packageName = THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1;
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    std::cout << "deviceId ：" << deviceId << std::endl;
    int32_t ruid = STDistibutePermissionUtil::GetUidByBundleName(packageName);
    int threadCount = 15;
    for (int i = 0; i < threadCount; i++) {
        std::thread newThread(TestFountion, deviceId, ruid);
        newThread.detach();
    }
    sleep(STRESS_TEST_TIME);
}

/**
 * @tc.name : stress test
 * @tc.number : DPMS_DpmsDuidTransform_0100
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(DpmsDuidTransformMTBFCppTest, DPMS_DpmsDuidTransform_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DPMS_DpmsDuidTransform_0100  start";
    auto starTime = std::chrono::system_clock::now();
    DpmsDuidTransformMTBFCppTest::StressFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    EXPECT_LE(STRESS_TEST_TIME, realTestTime);
    GTEST_LOG_(INFO) << "DPMS_DpmsDuidTransform_0100  end";
}
