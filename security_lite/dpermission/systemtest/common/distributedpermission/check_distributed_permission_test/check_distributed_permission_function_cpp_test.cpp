/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <unistd.h>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <gtest/gtest.h>
#include <mutex>
#include <iostream>
#include <sys/types.h>
#include <cstring>
#include <iostream>
#include <thread>
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"
#include "distributed_permission_kit.h"
#include "bundle_info.h"
#include "app_id_info.h"
#include "permission_definition.h"
#include "parameter.h"
#include "permission_kit.h"
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
#include "distributed_uid_allocator.h"

#define CMD_result_BUF_SIZE 1024

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using namespace OHOS::EventFwk;
using namespace OHOS::STtools;
using namespace OHOS::STABUtil;
using namespace OHOS::DistributedHardware;
using std::string;
namespace OHOS {
namespace Security {
namespace Permission {
namespace {
const string PERMISSION_NAME = "ohos.permission.GET_NETWORK_INFO";
const string NULL_PERMISSION_NAME = "";
string INVALID_PERMISSION_NAME = "";
const int32_t DUID = 12610000;
const string NODE_ID = "1001";
const string INVALID_NODE_ID = "12345678123456781234567812345678123456781234567812345678123456789";
const int32_t PID = getpid();
const std::string PERMISSION_WIFI = "ohos.permission.GET_WIFI_INFO";
const std::string PERMISSION_NETWORK = "ohos.permission.GET_NETWORK_INFO";
const int32_t LABEL_ID = 9527;
const int32_t DESCRIPTION_ID = 9528;
const string PERMISSION_LABEL = "test Label";
const string DESCRIPTION = "test description";
const int32_t GRANTED = 0;
const int32_t DENIED = -1;

std::recursive_mutex statckLock_;
int32_t hapRet = 0;
OHOS::AppExecFwk::BundleInfo bundleInfo_;
// Invalid permission name,the length of permission name > 256.
string GetInValidPermission()
{
    int permissionLength = 258;
    for (int i = 0; i < permissionLength; i++) {
        string str = "h";
        INVALID_PERMISSION_NAME = INVALID_PERMISSION_NAME + str;
    }
    return INVALID_PERMISSION_NAME;
}
}  // namespace
namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION, "MonitorManagerTest"};
}
class CheckDistributedPermissionFunctionCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();

    void GetIPCSkeleton();
    static bool SubscribeEvent();

    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp)
        {}
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };

    static std::vector<std::string> eventList_;
    static STtools::Event event_;
    static sptr<OHOS::AppExecFwk::IAppMgr> appMs_;
    static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_;
    static std::shared_ptr<AppEventSubscriber> subscriber_;
};
std::vector<std::string> CheckDistributedPermissionFunctionCPPTest::eventList_ = {
    "resp_com_ohos_check_self_permission_app_a1", "req_com_ohos_check_self_permission_app_a1"};
STtools::Event CheckDistributedPermissionFunctionCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> CheckDistributedPermissionFunctionCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> CheckDistributedPermissionFunctionCPPTest::abilityMs_ = nullptr;
std::shared_ptr<CheckDistributedPermissionFunctionCPPTest::AppEventSubscriber>
    CheckDistributedPermissionFunctionCPPTest::subscriber_ = nullptr;
bool CheckDistributedPermissionFunctionCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : CheckDistributedPermissionFunctionCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}

void CheckDistributedPermissionFunctionCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();
    GTEST_LOG_(INFO) << "OnReceiveEvent: ret=" << data.GetWant().GetIntParam("ret", hapRet);
    GTEST_LOG_(INFO) << "OnReceiveEvent: hapRet=" << hapRet;

    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(CheckDistributedPermissionFunctionCPPTest::eventList_.begin(),
        CheckDistributedPermissionFunctionCPPTest::eventList_.end(),
        eventName);
    if (iter != CheckDistributedPermissionFunctionCPPTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

void CheckDistributedPermissionFunctionCPPTest::SetUpTestCase(void)
{
    SubscribeEvent();
    appMs_ = STAbilityUtil::GetAppMgrService();
    abilityMs_ = STAbilityUtil::GetAbilityManagerService();
    if (appMs_) {
        int freezTime = 60;
        appMs_->SetAppFreezingTime(freezTime);
        int time = 0;
        appMs_->GetAppFreezingTime(time);
        std::cout << "appMs_->GetAppFreezingTime();" << time << std::endl;
    }
}

void CheckDistributedPermissionFunctionCPPTest::TearDownTestCase(void)
{}

void CheckDistributedPermissionFunctionCPPTest::SetUp(void)
{
    GetIPCSkeleton();
}

void CheckDistributedPermissionFunctionCPPTest::TearDown(void)
{}

void CheckDistributedPermissionFunctionCPPTest::GetIPCSkeleton()
{
    int32_t pid_ = 0;
    int32_t uid_ = IPCSkeleton::GetCallingUid();
    string deviceId_ = IPCSkeleton::GetLocalDeviceID();
    GTEST_LOG_(INFO) << "pid_ :" << pid_;
    GTEST_LOG_(INFO) << "uid_ :" << uid_;
}

/**
 * @tc.name      If the permissionName is null，return: -1.
 * @tc.number    DPMS_CheckPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0100 start";
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, DUID, NODE_ID);
    int32_t result = 1;
    result = DistributedPermissionKit::CheckPermission(NULL_PERMISSION_NAME, appIdInfo);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0100 end";
}

/**
 * @tc.name      If the length of permission name more than 256, return: -1.
 * @tc.number    DPMS_CheckPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0200 start";
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, DUID, NODE_ID);
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::CheckPermission(INVALID_PERMISSION_NAME, appIdInfo);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0200 end";
}

/**
 * @tc.name      The permission name is valid, the uid is valid duid, and the permission is granted,return:0
 * @tc.number    DPMS_CheckPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0300, TestSize.Level1)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0300 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, duid, deviceId);
    result = DistributedPermissionKit::CheckPermission(PERMISSION_WIFI, appIdInfo);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0300 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      Invalid nodeId,the length of nodeId more than 64, return: -1.
 * @tc.number    DPMS_CheckPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0400, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0400 start";
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, DUID, INVALID_NODE_ID);
    int32_t result = 1;
    result = DistributedPermissionKit::CheckPermission(PERMISSION_NAME, appIdInfo);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0400 end";
}

/**
 * @tc.name      If the nodeId is null, the permission name is valid, and the uid is not special duid, return: 0.
 * @tc.number    DPMS_CheckPermission_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0500, TestSize.Level1)
{
    STDistibutePermissionUtil::Install("dpmsThirdBundle");
    std::string bundleName = "com.third.hiworld.dpmsExample";
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_network = {.permissionName = PERMISSION_NETWORK,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    OHOS::Security::Permission::PermissionDef permissionDef_wifi = {.permissionName = PERMISSION_WIFI,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_network);
    permDefList.emplace_back(permissionDef_wifi);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<std::string> permList_user;
    permList_user.push_back(PERMISSION_NETWORK);
    permList_user.push_back(PERMISSION_WIFI);
    PermissionKit::AddUserGrantedReqPermissions(bundleName, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_NETWORK, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_WIFI, 0);
    int32_t UID = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, UID, "");
    int32_t result = 1;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0500 start";
    result = DistributedPermissionKit::CheckPermission(PERMISSION_NETWORK, appIdInfo);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0500 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      The local deviceId, the permission name is valid, and the uid is not special duid, return: 0.
 * @tc.number    DPMS_CheckPermission_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0600, TestSize.Level1)
{
    STDistibutePermissionUtil::Install("dpmsThirdBundle");
    std::string bundleName = "com.third.hiworld.dpmsExample";
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_network = {.permissionName = PERMISSION_NETWORK,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    OHOS::Security::Permission::PermissionDef permissionDef_wifi = {.permissionName = PERMISSION_WIFI,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_network);
    permDefList.emplace_back(permissionDef_wifi);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<std::string> permList_user;
    permList_user.push_back(PERMISSION_NETWORK);
    permList_user.push_back(PERMISSION_WIFI);
    PermissionKit::AddUserGrantedReqPermissions(bundleName, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_NETWORK, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_WIFI, 0);
    int32_t UID = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    char LOCAL_DEVICE_ID[Constant::DEVICE_UUID_LENGTH] = {0};
    GetDevUdid(LOCAL_DEVICE_ID, Constant::DEVICE_UUID_LENGTH);
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, UID, LOCAL_DEVICE_ID);
    int32_t result = 1;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0600 start";
    result = DistributedPermissionKit::CheckPermission(PERMISSION_NETWORK, appIdInfo);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0600 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      The remote deviceId, the non-special duid, cache is non-existent, granted permission, return: 0.
 * @tc.number    DPMS_CheckPermission_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0700, TestSize.Level1)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0700 start";
    int32_t result = 1;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, uid, deviceId);
    result = DistributedPermissionKit::CheckPermission(PERMISSION_WIFI, appIdInfo);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0700 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      The remote deviceId, the non-special duid, the permission is existent in the map, return: 0.
 * @tc.number    DPMS_CheckPermission_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckPermission_0800, TestSize.Level1)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0800 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, duid, deviceId);
    result = DistributedPermissionKit::CheckPermission(PERMISSION_WIFI, appIdInfo);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckPermission_0800 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      If the duid is invalid, return: -1.
 * @tc.number    DPMS_CheckDPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0100 start";
    int32_t result = 1;
    int32_t invalidDuid = 12600001;
    result = DistributedPermissionKit::CheckDPermission(invalidDuid, PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0100 end";
}

/**
 * @tc.name      If the duid is a root uid, return: 0.
 * @tc.number    DPMS_CheckDPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0200 start";
    int32_t result = 1;
    int32_t rootUid = 12600000;
    result = DistributedPermissionKit::CheckDPermission(rootUid, PERMISSION_NAME);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0200 end";
}

/**
 * @tc.name      If the dUid is a system uid, return: 0.
 * @tc.number    DPMS_CheckDPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0300 start";
    int32_t result = 1;
    int32_t systemUid = 12601000;
    result = DistributedPermissionKit::CheckDPermission(systemUid, PERMISSION_NAME);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0300 end";
}

/**
 * @tc.name      If the duid is valid, but the permissionName is null, return: -1.
 * @tc.number    DPMS_CheckDPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0400, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0400 start";
    int32_t result = 1;
    result = DistributedPermissionKit::CheckDPermission(DUID, NULL_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0400 end";
}

/**
 * @tc.name      If the duid is valid, but the length of permission more than 256, return: -1.
 * @tc.number    DPMS_CheckDPermission_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0500, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0500 start";
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::CheckDPermission(DUID, INVALID_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0500 end";
}

/**
 * @tc.name      The valid duid, the valid permission, the non-sensitive permission is non-existent, return: -1.
 * @tc.number    DPMS_CheckDPermission_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0600, TestSize.Level4)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    std::string permission_internet = "ohos.permission.INTERNET";
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0700 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    result = DistributedPermissionKit::CheckDPermission(duid, permission_internet);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0700 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      The valid duid, the valid permission, the non-sensitive permission is existent and granted, return: 0.
 * @tc.number    DPMS_CheckDPermission_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0700, TestSize.Level1)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0700 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    result = DistributedPermissionKit::CheckDPermission(duid, PERMISSION_WIFI);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0700 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      The valid duid, the valid permission, the sensitive permission is existent, return: 0.
 * @tc.number    DPMS_CheckDPermission_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0800, TestSize.Level1)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    std::string permission_camera = "ohos.permission.CAMERA";
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0800 start";
    int32_t result = 1;
    DistributedPermissionKit::GrantSensitivePermissionToRemoteApp(permission_camera, deviceId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    result = DistributedPermissionKit::CheckDPermission(duid, permission_camera);
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0800 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      The valid duid, the valid permission, the sensitive permission is non-existent, return: -1.
 * @tc.number    DPMS_CheckDPermission_0900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckDPermission_0900, TestSize.Level4)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    std::string permission_health = "ohos.permission.READ_HEALTH_DATA";
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionFunctionCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionFunctionCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0900 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    result = DistributedPermissionKit::CheckDPermission(duid, permission_health);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckDPermission_0900 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      If the length of permission name less than 256 or same as 256, the permission is granted, return:0.
 * @tc.number    DPMS_CheckSelfPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckSelfPermission_0100, TestSize.Level1)
{
    std::string hapName = "checkSelfPermissionBundle1";
    std::string abilityName = "CheckSelfPermissionAbilityA1";
    std::string bundleName = "com.third.checkSelfPermission";
    STDistibutePermissionUtil::Install(hapName);
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_network = {.permissionName = PERMISSION_NETWORK,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    OHOS::Security::Permission::PermissionDef permissionDef_wifi = {.permissionName = PERMISSION_WIFI,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_network);
    permDefList.emplace_back(permissionDef_wifi);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<std::string> permList_user;
    permList_user.push_back(PERMISSION_NETWORK);
    permList_user.push_back(PERMISSION_WIFI);
    PermissionKit::AddUserGrantedReqPermissions(bundleName, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_NETWORK, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_WIFI, 0);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0100 start";
    MAP_STR_STR params;
    params["permName"] = PERMISSION_NETWORK;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    STAbilityUtil::PublishEvent("req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckSelfPermission_0100");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckSelfPermission0100", GRANTED, 3), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0100 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      If the permission name is null, return: -1.
 * @tc.number    DPMS_CheckSelfPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckSelfPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0200 start";
    int32_t result = 1;
    result = DistributedPermissionKit::CheckSelfPermission(NULL_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0200 end";
}

/**
 * @tc.name      If the length of permission name more than 256, return: -1.
 * @tc.number    DPMS_CheckSelfPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckSelfPermission_0300, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0300 start";
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::CheckSelfPermission(INVALID_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckSelfPermission_0300 end";
}

/**
 * @tc.name      If the permission name is null, return: -1.
 * @tc.number    DPMS_CheckCallingPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckCallingPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingPermission_0100 start";
    int32_t result = 1;
    result = DistributedPermissionKit::CheckCallingPermission(NULL_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingPermission_0100 end";
}

/**
 * @tc.name      If the length of permission name more than 256, return: -1.
 * @tc.number    DPMS_CheckCallingPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckCallingPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingPermission_0200 start";
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::CheckCallingPermission(INVALID_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingPermission_0200 end";
}

/**
 * @tc.name      If the permission name is null, return: -1.
 * @tc.number    DPMS_CheckCallingOrSelfPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckCallingOrSelfPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0100 start";
    int32_t result = 1;
    result = DistributedPermissionKit::CheckCallingOrSelfPermission(NULL_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0100 end";
}

/**
 * @tc.name      If the length of permission name more than 256, return: -1.
 * @tc.number    DPMS_CheckCallingOrSelfPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckCallingOrSelfPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0200 start";
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::CheckCallingOrSelfPermission(INVALID_PERMISSION_NAME);
    EXPECT_EQ(result, DENIED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0200 end";
}

/**
 * @tc.name      If the length of permission name less than 256 or same as 256, the permission is granted, return: 0.
 * @tc.number    DPMS_CheckCallingOrSelfPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_CheckCallingOrSelfPermission_0300, TestSize.Level1)
{
    std::string hapName = "checkSelfPermissionBundle1";
    std::string abilityName = "CheckSelfPermissionAbilityA1";
    std::string bundleName = "com.third.checkSelfPermission";
    std::string permission_internet = "ohos.permission.INTERNET";
    STDistibutePermissionUtil::Install(hapName);
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_internet = {.permissionName = permission_internet,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_internet);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<std::string> permList_user;
    permList_user.push_back(permission_internet);
    PermissionKit::AddUserGrantedReqPermissions(bundleName, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, permission_internet, 0);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0300 start";
    MAP_STR_STR params;
    params["permName"] = permission_internet;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    STAbilityUtil::PublishEvent(
        "req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckCallingOrSelfPermission_0300");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckCallingOrSelfPermission0300", GRANTED, 2), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_CheckCallingOrSelfPermission_0300 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      If the permission name is null, return: false.
 * @tc.number    DPMS_IsRestrictedPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_IsRestrictedPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0100 start";
    int32_t result = 1;
    result = DistributedPermissionKit::IsRestrictedPermission(NULL_PERMISSION_NAME);
    EXPECT_FALSE(result);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0100 end";
}

/**
 * @tc.name      If the length of permission name more than 256, return: false.
 * @tc.number    DPMS_IsRestrictedPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_IsRestrictedPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0200 start";
    int32_t result = 1;
    string INVALID_PERMISSION_NAME = GetInValidPermission();
    result = DistributedPermissionKit::IsRestrictedPermission(INVALID_PERMISSION_NAME);
    EXPECT_FALSE(result);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0200 end";
}

/**
 * @tc.name      If the length of permission name less than 256 or same as 256, and it is restricted, return true.
 * @tc.number    DPMS_IsRestrictedPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_IsRestrictedPermission_0300, TestSize.Level1)
{
    string restrictedPermission = "ohos.permission.READ_CONTACTS";
    STDistibutePermissionUtil::Install("dpmsThirdBundle");
    std::string bundleName = "com.third.hiworld.dpmsExample";
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_restricted = {.permissionName = restrictedPermission,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 2,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_restricted);
    PermissionKit::AddDefPermissions(permDefList);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0300 start";
    int32_t result = 1;
    result = DistributedPermissionKit::IsRestrictedPermission(restrictedPermission);
    EXPECT_TRUE(result);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0300 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      If the permission name is valid, but it is not restricted, return false.
 * @tc.number    DPMS_IsRestrictedPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(CheckDistributedPermissionFunctionCPPTest, DPMS_IsRestrictedPermission_0400, TestSize.Level2)
{
    STDistibutePermissionUtil::Install("dpmsThirdBundle");
    std::string bundleName = "com.third.hiworld.dpmsExample";
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_network = {.permissionName = PERMISSION_NETWORK,
        .bundleName = bundleName,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = PERMISSION_LABEL,
        .labelId = LABEL_ID,
        .description = DESCRIPTION,
        .descriptionId = DESCRIPTION_ID};
    permDefList.emplace_back(permissionDef_network);
    PermissionKit::AddDefPermissions(permDefList);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0400 start";
    int32_t result = 1;
    result = DistributedPermissionKit::IsRestrictedPermission(PERMISSION_NETWORK);
    EXPECT_FALSE(result);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionFunctionCPPTest DPMS_IsRestrictedPermission_0400 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS