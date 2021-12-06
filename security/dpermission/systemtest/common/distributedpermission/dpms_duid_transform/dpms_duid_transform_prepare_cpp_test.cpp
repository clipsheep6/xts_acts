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
#include <iostream>
#include <thread>
#include "system_test_distributed_permission_util.h"
#include "distributed_permission_kit.h"
#include "bundle_info.h"
#include "parameter.h"
#include "permission_kit.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;

using std::string;

namespace {
static const std::string permission_wifi = "ohos.permission.GET_WIFI_INFO";
static const std::string permission_network = "ohos.permission.GET_NETWORK_INFO";
static const std::string permission_location = "ohos.permission.LOCATION_IN_BACKGROUND";
static const std::string permission_camera = "ohos.permission.CAMERA";
static const std::string permission_microphone = "ohos.permission.MICROPHONE";
static const std::string permission_myself1 = "com.myability.permission.MYPERMISSION1";
static const std::string permission_myself2 = "com.myability.permission.MYPERMISSION2";
static const int32_t labelId = 9527;
static const int32_t descriptionId = 9528;
std::string bundleName_third = THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1;
std::string bundleName_system = SYSTEM_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1;
// system grant
OHOS::Security::Permission::PermissionDef permissionDef_network_third = {.permissionName = permission_network,
    .bundleName = bundleName_third,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_wifi_third = {.permissionName = permission_wifi,
    .bundleName = bundleName_third,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_location_third = {.permissionName = permission_location,
    .bundleName = bundleName_third,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
// user grant
OHOS::Security::Permission::PermissionDef permissionDef_camera_third = {.permissionName = permission_camera,
    .bundleName = bundleName_third,
    .grantMode = 0,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_microphone_third = {.permissionName = permission_microphone,
    .bundleName = bundleName_third,
    .grantMode = 0,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
// custom grant
OHOS::Security::Permission::PermissionDef permissionDef_myself1_third = {.permissionName = permission_myself1,
    .bundleName = bundleName_third,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_myself2_third = {.permissionName = permission_myself2,
    .bundleName = bundleName_third,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};

// system grant
OHOS::Security::Permission::PermissionDef permissionDef_network_system = {.permissionName = permission_network,
    .bundleName = bundleName_system,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_wifi_system = {.permissionName = permission_wifi,
    .bundleName = bundleName_system,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_location_system = {.permissionName = permission_location,
    .bundleName = bundleName_system,
    .grantMode = 1,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
// user grant
OHOS::Security::Permission::PermissionDef permissionDef_camera_system = {.permissionName = permission_camera,
    .bundleName = bundleName_system,
    .grantMode = 0,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
OHOS::Security::Permission::PermissionDef permissionDef_microphone_system = {.permissionName = permission_microphone,
    .bundleName = bundleName_system,
    .grantMode = 0,
    .availableScope = 1 << 0,
    .label = "test label",
    .labelId = labelId,
    .description = "test description",
    .descriptionId = descriptionId};
}  // namespace

class DpmsDuidTransformPrepareCppTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    void InstallAndGranteThirdHap();
    void GranteSystemHap();
    void InstallThirdMoreThanMaxpermissionHap();
    void InstallThirdEqMaxpermissionHap();
};

void DpmsDuidTransformPrepareCppTest::SetUpTestCase(void)
{}

void DpmsDuidTransformPrepareCppTest::TearDownTestCase(void)
{}

void DpmsDuidTransformPrepareCppTest::SetUp(void)
{}

void DpmsDuidTransformPrepareCppTest::TearDown(void)
{}

/**
 * @tc.name      Duid's Prepare
 * @tc.number    DPMS_Duid_9900
 * @tc.size      MEDIUM
 * @tc.type      Prepare
 * @tc.level     Level 3
 */
HWTEST_F(DpmsDuidTransformPrepareCppTest, DPMS_Duid_9900, TestSize.Level3)
{
    InstallAndGranteThirdHap();
    GranteSystemHap();
    InstallThirdMoreThanMaxpermissionHap();
    InstallThirdEqMaxpermissionHap();
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_INCLUDE_USE_BY_lOCAL_BUNDLE_NAME_ADD_V1);
    EXPECT_GT(uid, 0);
}

void DpmsDuidTransformPrepareCppTest::InstallAndGranteThirdHap()
{
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0100 start";
    STDistibutePermissionUtil::Install(THIRD_INCLUDE_USE_BY_lOCAL_HAP_NAME_ADD_V1);
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    permDefList.emplace_back(permissionDef_network_third);
    permDefList.emplace_back(permissionDef_wifi_third);
    permDefList.emplace_back(permissionDef_location_third);
    permDefList.emplace_back(permissionDef_camera_third);
    permDefList.emplace_back(permissionDef_microphone_third);
    permDefList.emplace_back(permissionDef_myself1_third);
    permDefList.emplace_back(permissionDef_myself2_third);
    PermissionKit::AddDefPermissions(permDefList);
    // system grant
    std::vector<std::string> permList_system;
    permList_system.push_back(permission_network);
    permList_system.push_back(permission_wifi);
    permList_system.push_back(permission_location);
    permList_system.push_back(permission_myself1);
    permList_system.push_back(permission_myself2);
    PermissionKit::AddSystemGrantedReqPermissions(bundleName_third, permList_system);
    PermissionKit::GrantSystemGrantedPermission(bundleName_third, permission_network);
    PermissionKit::GrantSystemGrantedPermission(bundleName_third, permission_wifi);
    PermissionKit::GrantSystemGrantedPermission(bundleName_third, permission_location);
    PermissionKit::GrantSystemGrantedPermission(bundleName_third, permission_myself1);
    PermissionKit::GrantSystemGrantedPermission(bundleName_third, permission_myself2);
    // user grant
    std::vector<std::string> permList_user;
    permList_user.push_back(permission_camera);
    permList_user.push_back(permission_microphone);
    PermissionKit::AddUserGrantedReqPermissions(bundleName_third, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName_third, permission_camera, 0);
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0100 end";
}

void DpmsDuidTransformPrepareCppTest::GranteSystemHap()
{
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0200 start";
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    permDefList.emplace_back(permissionDef_network_system);
    permDefList.emplace_back(permissionDef_wifi_system);
    permDefList.emplace_back(permissionDef_location_system);
    permDefList.emplace_back(permissionDef_camera_system);
    permDefList.emplace_back(permissionDef_microphone_system);
    PermissionKit::AddDefPermissions(permDefList);
    // system grant
    std::vector<std::string> permList_system;
    permList_system.push_back(permission_network);
    permList_system.push_back(permission_wifi);
    permList_system.push_back(permission_location);
    PermissionKit::AddSystemGrantedReqPermissions(bundleName_system, permList_system);
    PermissionKit::GrantSystemGrantedPermission(bundleName_system, permission_network);
    PermissionKit::GrantSystemGrantedPermission(bundleName_system, permission_wifi);
    PermissionKit::GrantSystemGrantedPermission(bundleName_system, permission_location);
    // user grant
    std::vector<std::string> permList_user;
    permList_user.push_back(permission_camera);
    permList_user.push_back(permission_microphone);
    PermissionKit::AddUserGrantedReqPermissions(bundleName_system, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName_system, permission_camera, 0);
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0200 end";
}

void DpmsDuidTransformPrepareCppTest::InstallThirdMoreThanMaxpermissionHap()
{
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0300 start";
    STDistibutePermissionUtil::Install(THIRD_MORETHAN_MAXPERMISSION_HAP_NAME);
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0300 end";
}

void DpmsDuidTransformPrepareCppTest::InstallThirdEqMaxpermissionHap()
{
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0400 start";
    STDistibutePermissionUtil::Install(THIRD_EQ_MAXPERMISSION_HAP_NAME);
    GTEST_LOG_(INFO) << "DpmsDuidTransformPrepareCppTest DPMS_DpmsDuidTransformPrepareCppTest_0400 end";
}
