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
#include <vector>
#include <mutex>
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"
#include "distributed_permission_kit.h"
#include "sqlite_storage.h"
#include "bundle_info.h"

#include "device_info_repository.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using namespace OHOS::DistributedHardware;
using std::string;

namespace {
string deviceId_;
int32_t rUidThird_ = 0;
int32_t rUidSystem_ = 0;
int32_t rUidMorethanMaxPermission_ = 0;
int32_t rUidEQMaxPermission_ = 0;
int32_t resultCode_ = -2;
int32_t pid_ = getpid();
int32_t granted_ = 0;
int32_t denied_ = -1;
}  // namespace

namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {
    LOG_CORE, SECURITY_DOMAIN_PERMISSION, "DpmsDuidTransformFunctionCppTest"};
}
class DpmsDuidTransformFunctionCppTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void DpmsDuidTransformFunctionCppTest::SetUpTestCase()
{
    STDistibutePermissionUtil::Install(THIRD_INCLUDE_USE_BY_lOCAL_HAP_NAME_ADD_V1);
    STDistibutePermissionUtil::Install(THIRD_MORETHAN_MAXPERMISSION_HAP_NAME);
    STDistibutePermissionUtil::Install(THIRD_EQ_MAXPERMISSION_HAP_NAME);

    rUidSystem_ = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
    rUidThird_ = STDistibutePermissionUtil::GetUidByBundleName(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
    rUidMorethanMaxPermission_ =
        STDistibutePermissionUtil::GetUidByBundleName(THIRD_MORETHAN_MAXPERMISSION_BUNDLE_NAME);
    rUidEQMaxPermission_ = STDistibutePermissionUtil::GetUidByBundleName(THIRD_EQ_MAXPERMISSION_BUNDLE_NAME);

    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> DpmsDuidTransformFunctionCppTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> DpmsDuidTransformFunctionCppTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformFunctionCppTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformFunctionCppTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> DpmsDuidTransformFunctionCppTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    deviceId_ = deviceList[0].deviceId;
}

void DpmsDuidTransformFunctionCppTest::TearDownTestCase()
{
    STDistibutePermissionUtil::Uninstall(THIRD_MORETHAN_MAXPERMISSION_BUNDLE_NAME);
    STDistibutePermissionUtil::Uninstall(THIRD_EQ_MAXPERMISSION_BUNDLE_NAME);
    STDistibutePermissionUtil::Uninstall(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
}

void DpmsDuidTransformFunctionCppTest::SetUp()
{}

void DpmsDuidTransformFunctionCppTest::TearDown()
{}

/**
 * @tc.name      after AllocateDuid, QueryDuid.
 * @tc.number    DPMS_AllocateDuid_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0100, TestSize.Level1)
{
    int32_t allocateDuid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    int32_t queryDuid = DistributedPermissionKit::QueryDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << allocateDuid;
    GTEST_LOG_(INFO) << queryDuid;
    EXPECT_EQ(allocateDuid, queryDuid);
}

/**
 * @tc.name      after AllocateDuid, IsDuid.
 * @tc.number    DPMS_AllocateDuid_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0200, TestSize.Level1)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    bool result = DistributedPermissionKit::IsDuid(duid);
    EXPECT_TRUE(result);
}

/**
 * @tc.name      permissions > 1024, the synchronization fails.
 * @tc.number    DPMS_AllocateDuid_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0400, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidMorethanMaxPermission_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      permissions = 1024, the synchronization is successful.
 * @tc.number    DPMS_AllocateDuid_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0500, TestSize.Level3)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidEQMaxPermission_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_GT(duid, 0);
}

/**
 * @tc.name      systemApp's LOCATION_IN_BACKGROUND are not synchronized.
 * @tc.number    DPMS_AllocateDuid_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0600, TestSize.Level2)
{
    std::string permission_location = "ohos.permission.LOCATION_IN_BACKGROUND";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidSystem_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_location, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, denied_);
}

/**
 * @tc.name      thirdApp's LOCATION_IN_BACKGROUND are not synchronized.
 * @tc.number    DPMS_AllocateDuid_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0700, TestSize.Level2)
{
    std::string permission_location = "ohos.permission.LOCATION_IN_BACKGROUND";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_location, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, denied_);
}

/**
 * @tc.name      thirdApp's user_grant are not synchronized.
 * @tc.number    DPMS_AllocateDuid_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0800, TestSize.Level2)
{
    std::string permission_camera = "ohos.permission.CAMERA";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_camera, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, denied_);
}

/**
 * @tc.name      systemApp's system_grant are synchronized.
 * @tc.number    DPMS_AllocateDuid_0900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_0900, TestSize.Level1)
{
    std::string permission_network = "ohos.permission.GET_NETWORK_INFO";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidSystem_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_network, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, granted_);
}

/**
 * @tc.name      thirdApp's system_grant are synchronized.
 * @tc.number    DPMS_AllocateDuid_1000
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1000, TestSize.Level1)
{
    std::string permission_network = "ohos.permission.GET_NETWORK_INFO";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_network, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, granted_);
}
/**
 * @tc.name      systemApp's granted user_grant are synchronized.
 * @tc.number    DPMS_AllocateDuid_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1100, TestSize.Level1)
{
    std::string permission_camera = "ohos.permission.CAMERA";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidSystem_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_camera, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, granted_);
}

/**
 * @tc.name      thirdApp's defined and granted grant are synchronized.
 * @tc.number    DPMS_AllocateDuid_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1200, TestSize.Level2)
{
    static const std::string permission_myself1 = "com.myability.permission.MYPERMISSION1";
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid_, duid, deviceId_);
    int32_t result = DistributedPermissionKit::CheckPermission(permission_myself1, appIdInfo);
    GTEST_LOG_(INFO) << result;
    EXPECT_EQ(result, granted_);
}

/**
 * @tc.name      Invalid length>64 deviceId, AllocateDuid.
 * @tc.number    DPMS_AllocateDuid_1400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1400, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(
        "0123456789012345678901234567890123456789012345678901234567890123456789", rUidThird_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      Invalid rUid<0 rUid, AllocateDuid.
 * @tc.number    DPMS_AllocateDuid_1500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1500, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, -1);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      System rUid, AllocateDuid.
 * @tc.number    DPMS_AllocateDuid_1600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1600, TestSize.Level1)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, 1000);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, 12601000);
}

/**
 * @tc.name      Root rUid,AllocateDuid.
 * @tc.number    DPMS_AllocateDuid_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1700, TestSize.Level1)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, 0);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, 12600000);
}

/**
 * @tc.name      duid exists and allocate duid.
 * @tc.number    DPMS_AllocateDuid_1800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1800, TestSize.Level1)
{
    int32_t duid1 = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    int32_t duid2 = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    EXPECT_EQ(duid1, duid2);
}

/**
 * @tc.name      deviceId is null, QueryDuid.
 * @tc.number    DPMS_QueryDuid_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_QueryDuid_0100, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::QueryDuid("", rUidThird_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      Invalid length>64 deviceId, QueryDuid.
 * @tc.number    DPMS_QueryDuid_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_QueryDuid_0200, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::QueryDuid(
        "0123456789012345678901234567890123456789012345678901234567890123456789", rUidThird_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      Invalid rUid<0 rUid, QueryDuid.
 * @tc.number    DPMS_QueryDuid_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_QueryDuid_0300, TestSize.Level4)
{
    int32_t duid = DistributedPermissionKit::QueryDuid(deviceId_, -1);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      There is no corresponding DUID for deviceId and rUid, QueryDuid.
 * @tc.number    DPMS_QueryDuid_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_QueryDuid_0400, TestSize.Level2)
{
    int32_t duid = DistributedPermissionKit::QueryDuid(deviceId_, 1);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}

/**
 * @tc.name      12410000 is not duid.
 * @tc.number    DPMS_IsDuid_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_IsDuid_0100, TestSize.Level4)
{
    bool result = DistributedPermissionKit::IsDuid(12410000);
    GTEST_LOG_(INFO) << result;
    EXPECT_FALSE(result);
}

/**
 * @tc.name      12600001 is duid.
 * @tc.number    DPMS_IsDuid_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_IsDuid_0200, TestSize.Level4)
{
    bool result = DistributedPermissionKit::IsDuid(12600001);
    GTEST_LOG_(INFO) << result;
    EXPECT_TRUE(result);
}

/**
 * @tc.name      12610001 is duid.
 * @tc.number    DPMS_IsDuid_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_IsDuid_0300, TestSize.Level1)
{
    bool result = DistributedPermissionKit::IsDuid(12610001);
    GTEST_LOG_(INFO) << result;
    EXPECT_TRUE(result);
}

/**
 * @tc.name      uid is 12610000.
 * @tc.number    DPMS_IsDuid_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_IsDuid_0400, TestSize.Level2)
{
    bool result = DistributedPermissionKit::IsDuid(12610000);
    GTEST_LOG_(INFO) << result;
    EXPECT_TRUE(result);
}

/**
 * @tc.name      uid is 12619999.
 * @tc.number    DPMS_IsDuid_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_IsDuid_0500, TestSize.Level2)
{
    bool result = DistributedPermissionKit::IsDuid(12619999);
    GTEST_LOG_(INFO) << result;
    EXPECT_TRUE(result);
}

/**
 * @tc.name      duid does not exist. When the duid is allocated, the device goes offline.
 * @tc.number    DPMS_AllocateDuid_1300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformFunctionCppTest, DPMS_AllocateDuid_1300, TestSize.Level3)
{
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId_, rUidThird_);
    GTEST_LOG_(INFO) << duid;
    EXPECT_EQ(duid, resultCode_);
}
