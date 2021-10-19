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
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"

#include "if_system_ability_manager.h"
#include "iservice_registry.h"
#include "ability_manager_interface.h"
#include "i_distributed_permission.h"
#include "distributed_permission_manager_service.h"
#include "permission_kit.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using std::string;

namespace {
static const std::string permission_wifi = "ohos.permission.GET_WIFI_INFO";
static const std::string permission_network = "ohos.permission.GET_NETWORK_INFO";
static const std::string permission_location = "ohos.permission.LOCATION_IN_BACKGROUND";
static const std::string permission_camera = "ohos.permission.CAMERA";
static const std::string permission_microphone = "ohos.permission.MICROPHONE";
static const std::string permission_myself1 = "ohos.permission.MYPERMISSION_1";
static const std::string permission_myself2 = "ohos.permission.MYPERMISSION_2";
static const std::string permission_buletooth = "ohos.permission.DISCOVER_BULETOOTH";
}  // namespace

class NotifySyncPermissionTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
};

void NotifySyncPermissionTest::SetUpTestCase(void)
{}

void NotifySyncPermissionTest::TearDownTestCase(void)
{}

void NotifySyncPermissionTest::SetUp(void)
{}

void NotifySyncPermissionTest::TearDown(void)
{}

/**
 * @tc.name      Invalid nodeid nodeid is empty returns - 3
 * @tc.number    DPMS_GetUidPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level4
 */
HWTEST_F(NotifySyncPermissionTest, DPMS_GetUidPermission_0100, TestSize.Level1)
{
    // DPMS_GetUidPermission_0100
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0100 start";
    int uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_BUNDLE_NAME);
    std::string nodeId = "";  // nodeId is null
    std::string packageName = "packageName";
    int result = DelayedSingleton<DistributedPermissionManagerService>::GetInstance()->NotifySyncPermission(
        nodeId, uid, packageName);
    EXPECT_EQ(result, -3);
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0100 end";
}

/**
 * @tc.name      Invalid nodeid nodeid length greater than 64 returns - 3: illegal device identifier
 * @tc.number    DPMS_GetUidPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level4
 */
HWTEST_F(NotifySyncPermissionTest, DPMS_GetUidPermission_0200, TestSize.Level1)
{
    // DPMS_GetUidPermission_0200
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0200 start";
    int uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_BUNDLE_NAME);
    std::string nodeId = "12345678901234567890123456789012345678901234567890123456789012345";
    std::string packageName = "packageName";
    int result = DelayedSingleton<DistributedPermissionManagerService>::GetInstance()->NotifySyncPermission(
        nodeId, uid, packageName);
    EXPECT_EQ(result, -3);
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0200 end";
}

/**
 * @tc.name      Invalid uid uid less than 0 The principal returns - 1
 * @tc.number    DPMS_GetUidPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level4
 */
HWTEST_F(NotifySyncPermissionTest, DPMS_GetUidPermission_0300, TestSize.Level1)
{
    // DPMS_GetUidPermission_0300
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0300 start";
    DeviceInfoRepository::GetInstance().SaveDeviceInfo(
        "networkId", "universallyUniqueId", "uniqueDisabilityIdSuccess", "deviceName", "deviceType");
    int uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_BUNDLE_NAME);
    std::string nodeId = "networkId";
    std::string packageName = "packageName";
    uid = -100;
    int result = DelayedSingleton<DistributedPermissionManagerService>::GetInstance()->NotifySyncPermission(
        nodeId, uid, packageName);
    EXPECT_EQ(result, -1);
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0300 end";
}

/**
 * @tc.name      Empty packagename The principal returns - 1
 * @tc.number    DPMS_GetUidPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level4
 */
HWTEST_F(NotifySyncPermissionTest, DPMS_GetUidPermission_0400, TestSize.Level1)
{
    // DPMS_GetUidPermission_0400
    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0400 start";
    DeviceInfoRepository::GetInstance().SaveDeviceInfo(
        "networkId", "universallyUniqueId", "uniqueDisabilityIdSuccess", "deviceName", "deviceType");

    int uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_BUNDLE_NAME);
    std::string nodeId = "networkId";
    std::string packageName = "";

    int result = DelayedSingleton<DistributedPermissionManagerService>::GetInstance()->NotifySyncPermission(
        nodeId, uid, packageName);

    EXPECT_EQ(result, -1);

    GTEST_LOG_(INFO) << "NotifySyncPermissionTest DPMS_GetUidPermission_0400 end";
}