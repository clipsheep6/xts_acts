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
#include <chrono>
#include <gtest/gtest.h>
#include <mutex>
#include <cstring>
#include <iostream>
#include <thread>
#include "system_test_distributed_permission_util.h"
#include "distributed_permission_kit.h"
#include "bundle_info.h"
#include "permission_definition.h"
#include "parameter.h"
#include "permission_kit.h"
#include "distributed_permission_manager_service.h"
#include "on_request_permissions_result_stub.h"
#include "system_test_distributed_permission_util.h"
#include "ability_manager_service.h"
#include "ability_manager_errors.h"
#include "app_mgr_service.h"
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "ability_lifecycle_executor.h"
#include "device_info_repository.h"
#include "device_info_repository.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace testing::ext;
using namespace OHOS::AppExecFwk;
using namespace OHOS::STABUtil;
using namespace OHOS::EventFwk;
using namespace OHOS::STtools;
using std::string;
using MAP_STR_STR = std::map<std::string, std::string>;
using std::string;
namespace {
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_GROUP_THIRD_A =
    "com.ohos.dpmsst.service.distributed.third.group";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A = "com.ohos.dpmsst.service.distributed.third.a";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_B = "com.ohos.dpmsst.service.distributed.third.b";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_C = "com.ohos.dpmsst.service.distributed.third.c";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_D = "com.ohos.dpmsst.service.distributed.third.d";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_E = "com.ohos.dpmsst.service.distributed.third.e";
static const int32_t labelId = 9527;
static const int32_t descriptionId = 9528;
} // namespace
class DistributedRequestPermissionFromRemotePrepareCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void GrantSystemGrantedPermissionHap(std::string bundleName);
};

void DistributedRequestPermissionFromRemotePrepareCPPTest::SetUpTestCase(void)
{}

void DistributedRequestPermissionFromRemotePrepareCPPTest::TearDownTestCase(void)
{}

void DistributedRequestPermissionFromRemotePrepareCPPTest::SetUp(void)
{}

void DistributedRequestPermissionFromRemotePrepareCPPTest::TearDown(void)
{}
void DistributedRequestPermissionFromRemotePrepareCPPTest::GrantSystemGrantedPermissionHap(std::string bundleName)
{
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    // system grant
    OHOS::Security::Permission::PermissionDef permissionDef_Camera = {.permissionName = Constant::CAMERA,
        .bundleName = bundleName,
        .grantMode = 1,
        .availableScope = 1 << 0,
        .label = "test label",
        .labelId = labelId,
        .description = "test description",
        .descriptionId = descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Readhealthdata = {
        .permissionName = Constant::READ_HEALTH_DATA,
        .bundleName = bundleName,
        .grantMode = 1,
        .availableScope = 1 << 0,
        .label = "test label",
        .labelId = labelId,
        .description = "test description",
        .descriptionId = descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Location = {.permissionName = Constant::LOCATION,
        .bundleName = bundleName,
        .grantMode = 1,
        .availableScope = 1 << 0,
        .label = "test label",
        .labelId = labelId,
        .description = "test description",
        .descriptionId = descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Microphone = {.permissionName = Constant::MICROPHONE,
        .bundleName = bundleName,
        .grantMode = 1,
        .availableScope = 1 << 0,
        .label = "test label",
        .labelId = labelId,
        .description = "test description",
        .descriptionId = descriptionId};
    permDefList.emplace_back(permissionDef_Camera);
    permDefList.emplace_back(permissionDef_Readhealthdata);
    permDefList.emplace_back(permissionDef_Location);
    permDefList.emplace_back(permissionDef_Microphone);
    PermissionKit::AddDefPermissions(permDefList);
    // system grant
    std::vector<std::string> permList_system;
    permList_system.push_back(Constant::CAMERA);
    permList_system.push_back(Constant::READ_HEALTH_DATA);
    permList_system.push_back(Constant::LOCATION);
    permList_system.push_back(Constant::MICROPHONE);
    PermissionKit::AddSystemGrantedReqPermissions(bundleName, permList_system);
    PermissionKit::GrantSystemGrantedPermission(bundleName, Constant::CAMERA);
    PermissionKit::GrantSystemGrantedPermission(bundleName, Constant::READ_HEALTH_DATA);
    PermissionKit::GrantSystemGrantedPermission(bundleName, Constant::LOCATION);
    PermissionKit::GrantSystemGrantedPermission(bundleName, Constant::MICROPHONE);
}
/**
 * @tc.name      : DistributedRequestPermissionFromRemoteFunctionCPPTest 's Prepare
 * @tc.number    : DPMS_RequestPermissions_9900
 * @tc.size      :MEDIUM
 * @tc.type      : Prepare
 * @tc.level     : Level3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePrepareCPPTest, DPMS_RequestPermissions_9900, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePrepareCPPTest DPMS_RequestPermissions_9900 start";
    std::string bundleNameA = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string bundleNameB = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_B;
    std::string bundleNameC = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_C;
    std::string bundleNameD = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_D;
    std::string bundleNameE = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_E;
    std::string bundleNameGroup = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_GROUP_THIRD_A;
    GrantSystemGrantedPermissionHap(bundleNameA);
    GrantSystemGrantedPermissionHap(bundleNameB);
    GrantSystemGrantedPermissionHap(bundleNameC);
    GrantSystemGrantedPermissionHap(bundleNameD);
    GrantSystemGrantedPermissionHap(bundleNameE);
    GrantSystemGrantedPermissionHap(bundleNameGroup);
    GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePrepareCPPTest getDeviceId start";
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePrepareCPPTest ListDeviceInfo";
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    std::string deviceId_ = deviceList[0].deviceId;
    int32_t result = 0;
    GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePrepareCPPTest getDeviceId end";
    int32_t rUidThird_A = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_A);
    EXPECT_LE(result, 0);
    int32_t rUidThird_B = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_B);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_B);
    EXPECT_LE(result, 0);
    int32_t rUidThird_C = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_C);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_C);
    EXPECT_LE(result, 0);
    int32_t rUidThird_D = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_D);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_D);
    EXPECT_LE(result, 0);
    int32_t rUidThird_E = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_E);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_E);
    EXPECT_LE(result, 0);
    int32_t rUidThirdGroup_ =
        STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_GROUP_THIRD_A);
    result = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThirdGroup_);
    EXPECT_LE(result, 0);
    GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePrepareCPPTest DPMS_RequestPermissions_9900 end";
}
