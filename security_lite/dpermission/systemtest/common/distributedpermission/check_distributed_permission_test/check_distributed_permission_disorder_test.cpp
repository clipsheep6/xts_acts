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
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION, "StressTest"};
const int STRESS_TEST_TIME = 60 * 60 * 6;
const int THREAD_COUNT = 15;
const int32_t LABEL_ID = 9527;
const int32_t DESCRIPTION_ID = 9528;
const string PERMISSION_LABEL = "test Label";
const string DESCRIPTION = "test description";
}  // namespace
class CheckDistributedPermissionDisorderTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void StressFountion();
    static void TestFountion(std::string deviceId, int32_t ruid, int32_t duid);
    static void ExeAPI(std::string &deviceId, int32_t ruid, int32_t duid);
};

void CheckDistributedPermissionDisorderTest::SetUpTestCase(void)
{
    STDistibutePermissionUtil::Install(THIRD_INCLUDE_USE_BY_lOCAL_HAP_NAME_ADD_V1);
    string restrictedPermission = "ohos.permission.READ_CONTACTS";
    STDistibutePermissionUtil::Install(THIRD_HAP_NAME2);
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_restricted = {.permissionName = restrictedPermission,
        .bundleName = THIRD_BUNDLE_NAME2,
        .grantMode = 0,
        .availableScope = 1 << 2,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_restricted);
    PermissionKit::AddDefPermissions(permDefList);
}

void CheckDistributedPermissionDisorderTest::TearDownTestCase(void)
{
    STDistibutePermissionUtil::Uninstall(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
    PermissionKit::RemoveDefPermissions(THIRD_BUNDLE_NAME2);
    STDistibutePermissionUtil::Uninstall(THIRD_BUNDLE_NAME2);
}

void CheckDistributedPermissionDisorderTest::SetUp(void)
{}

void CheckDistributedPermissionDisorderTest::TearDown(void)
{}

void CheckDistributedPermissionDisorderTest::TestFountion(std::string deviceId, int32_t ruid, int32_t duid)
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

void CheckDistributedPermissionDisorderTest::ExeAPI(std::string &deviceId, int32_t ruid, int32_t duid)
{
    std::vector<FnPtr> vec;
    StressTestApi::GetCheckDistributedTestFunction_02(vec);
    int tar = std::rand() % vec.size();
    std::cout << "rand()  ：" << tar << std::endl;
    EXPECT_TRUE(vec[tar](deviceId, ruid, duid));
}

void CheckDistributedPermissionDisorderTest::StressFountion()
{
    std::string packageName = THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1;
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    std::cout << "deviceId ：" << deviceId << std::endl;
    int32_t ruid = STDistibutePermissionUtil::GetUidByBundleName(packageName);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, ruid);
    for (int i = 0; i < THREAD_COUNT; i++) {
        std::thread newThread(TestFountion, deviceId, ruid, duid);
        newThread.detach();
    }
    sleep(STRESS_TEST_TIME);
}

/**
 * @tc.name : CheckDistributedPermission stress test
 * @tc.number : DPMS_CheckDistributedPermissionMTBFTest_0200
 * @tc.size : MEDIUM
 * @tc.type : Reliability
 * @tc.level : Level 3
 */
HWTEST_F(CheckDistributedPermissionDisorderTest, DPMS_CheckDistributedPermissionMTBFTest_0300, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "StressTestTest  start";
    auto starTime = std::chrono::system_clock::now();
    CheckDistributedPermissionDisorderTest::StressFountion();
    auto endTime = std::chrono::system_clock::now();
    int realTestTime = int(std::chrono::duration_cast<std::chrono::seconds>(endTime - starTime).count());
    EXPECT_LE(STRESS_TEST_TIME, realTestTime);
    GTEST_LOG_(INFO) << "StressTestTest  end";
}
