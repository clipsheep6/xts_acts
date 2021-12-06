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

#define CMD_result _BUF_SIZE 1024

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
const int32_t ROOT_UID = 12600000;
const int32_t PID = getpid();
const string DEVICE_ID = "1001";
const std::string PERMISSION_WIFI = "ohos.permission.GET_WIFI_INFO";
const std::string PERMISSION_NETWORK = "ohos.permission.GET_NETWORK_INFO";
const int32_t LABEL_ID = 9527;
const int32_t DESCRIPTION_ID = 9528;
const string PERMISSION_LABEL = "test Label";
const string DESCRIPTION = "test description";
const int32_t TEST_COUNT = 1000;
std::recursive_mutex statckLock_;
int32_t hapRet = 0;
double avgTime = 0.0;
OHOS::AppExecFwk::BundleInfo bundleInfo_;
}  // namespace
namespace {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION, "MonitorManagerTest"};
}
class CheckDistributedPermissionPerformanceCPPTest : public testing::Test {
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
std::vector<std::string> CheckDistributedPermissionPerformanceCPPTest::eventList_ = {
    "resp_com_ohos_check_self_permission_app_a1", "req_com_ohos_check_self_permission_app_a1"};
STtools::Event CheckDistributedPermissionPerformanceCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> CheckDistributedPermissionPerformanceCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> CheckDistributedPermissionPerformanceCPPTest::abilityMs_ = nullptr;
std::shared_ptr<CheckDistributedPermissionPerformanceCPPTest::AppEventSubscriber>
    CheckDistributedPermissionPerformanceCPPTest::subscriber_ = nullptr;
bool CheckDistributedPermissionPerformanceCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : CheckDistributedPermissionPerformanceCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}

void CheckDistributedPermissionPerformanceCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event = " << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data = " << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code = " << data.GetCode();
    GTEST_LOG_(INFO) << "OnReceiveEvent: ret = " << data.GetWant().GetIntParam("ret", hapRet);
    GTEST_LOG_(INFO) << "OnReceiveEvent: hapRet = " << hapRet;
    GTEST_LOG_(INFO) << "OnReceiveEvent: avgTime = " << data.GetWant().GetDoubleParam("avgTime", avgTime) << "(ms)";
    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(CheckDistributedPermissionPerformanceCPPTest::eventList_.begin(),
        CheckDistributedPermissionPerformanceCPPTest::eventList_.end(),
        eventName);
    if (iter != CheckDistributedPermissionPerformanceCPPTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

void CheckDistributedPermissionPerformanceCPPTest::SetUpTestCase(void)
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

void CheckDistributedPermissionPerformanceCPPTest::TearDownTestCase(void)
{}

void CheckDistributedPermissionPerformanceCPPTest::SetUp(void)
{
    GetIPCSkeleton();
}

void CheckDistributedPermissionPerformanceCPPTest::TearDown(void)
{}

void CheckDistributedPermissionPerformanceCPPTest::GetIPCSkeleton()
{
    int32_t pid_ = 0;
    int32_t uid_ = IPCSkeleton::GetCallingUid();
    string deviceId_ = IPCSkeleton::GetLocalDeviceID();
    GTEST_LOG_(INFO) << "pid_ :" << pid_;
    GTEST_LOG_(INFO) << "uid_ :" << uid_;
}

/**
 * @tc.name      CheckPermission Interface performance.
 * @tc.number    DPMS_CheckPermission_0900
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckPermission_0900, TestSize.Level3)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckPermission_0900 start";
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, uid, deviceId);
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::CheckPermission(PERMISSION_WIFI, appIdInfo);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count();
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg << "(ms)";
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckPermission_0900 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      CheckPermissionCPU utilization
 * @tc.number    DPMS_CheckPermission_1200
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckPermission_1200, TestSize.Level3)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckPermission_0700 start";
    int32_t result = 1;
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, uid, deviceId);
    result = DistributedPermissionKit::CheckPermission(PERMISSION_WIFI, appIdInfo);
    int32_t GRANTED = 0;
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckPermission_0700 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      CheckDPermission interface performance
 * @tc.number    DPMS_CheckDPermission_1000
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckDPermission_1000, TestSize.Level3)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckDPermission_1000 start";
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::CheckDPermission(duid, PERMISSION_WIFI);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count();
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg << "(ms)";
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckDPermission_1000 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      CheckDPermissionCPU utilization
 * @tc.number    DPMS_CheckDPermission_1300
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckDPermission_1300, TestSize.Level3)
{
    std::string bundleName = "com.third.hiworld.include_use_by_local_app";
    STDistibutePermissionUtil::Install("dpmsThirdIncludeUseByLocalAppAddV1");
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device name: %{public}s", info.deviceName.c_str());
        PERMISSION_LOG_DEBUG(
            LABEL, ">>> CheckDistributedPermissionPerformanceCPPTest device type: %{public}s", info.deviceType.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device network id: %{public}s",
            info.deviceId.networkId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device udid: %{public}s",
            info.deviceId.uniqueDisabilityId.c_str());
        PERMISSION_LOG_DEBUG(LABEL,
            ">>> CheckDistributedPermissionPerformanceCPPTest device uuid: %{public}s",
            info.deviceId.universallyUniqueId.c_str());
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string musicPlayer = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(musicPlayer, deviceList);
    std::string deviceId = deviceList[0].deviceId;
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckDPermission_1300 start";
    int32_t result = 1;
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    result = DistributedPermissionKit::CheckDPermission(duid, PERMISSION_WIFI);
    int32_t GRANTED = 0;
    EXPECT_EQ(result, GRANTED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckDPermission_1300 end";
    STDistibutePermissionUtil::Uninstall("com.third.hiworld.include_use_by_local_app");
}

/**
 * @tc.name      CheckSelfPermission interface performance
 * @tc.number    DPMS_CheckSelfPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckSelfPermission_0400, TestSize.Level3)
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
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckSelfPermission_0400 start";
    MAP_STR_STR params;
    params["permName"] = PERMISSION_NETWORK;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    int32_t pass = 0;
    STAbilityUtil::PublishEvent("req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckSelfPermission_0400");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckSelfPermission0400", pass, 3), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckSelfPermission_0400 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      CheckCallingPermission interface performance
 * @tc.number    DPMS_CheckCallingPermission_0600
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckCallingPermission_0600, TestSize.Level3)
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
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallingPermission_0600 start";
    MAP_STR_STR params;
    params["permName"] = PERMISSION_NETWORK;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    STAbilityUtil::PublishEvent("req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckCallingPermission_0600");
    int pass = 0;
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckCallingPermission0600", pass, 3), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallingPermission_0600 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      CheckCallingOrSelfPermission interface performance
 * @tc.number    DPMS_CheckCallingOrSelfPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckCallingOrSelfPermission_0400, TestSize.Level3)
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
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallingOrSelfPermission_0400 start";
    MAP_STR_STR params;
    params["permName"] = PERMISSION_NETWORK;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    STAbilityUtil::PublishEvent(
        "req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckCallingOrSelfPermission_0400");
    int pass = 0;
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckCallingOrSelfPermission0400", pass, 3), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallingOrSelfPermission_0400 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      IsRestrictedPermission interface performance
 * @tc.number    DPMS_IsRestrictedPermission_0500
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_IsRestrictedPermission_0500, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_IsRestrictedPermission_0500 start";
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::IsRestrictedPermission(PERMISSION_NETWORK);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count();
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg << "(ms)";
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_IsRestrictedPermission_0500 end";
}

/**
 * @tc.name      CheckCallerPermission interface performance
 * @tc.number    DPMS_CheckCallerPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CheckCallerPermission_0100, TestSize.Level3)
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
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallerPermission_0100 start";
    MAP_STR_STR params;
    params["permName"] = permission_internet;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, 3000);
    EXPECT_EQ(ERR_OK, eCode);
    STAbilityUtil::PublishEvent("req_com_ohos_check_self_permission_app_a1", 100, "DPMS_CheckCallerPermission_0100");
    int pass = 0;
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckCallerPermission0100", pass, 3), 0);
    bool ret = STAbilityUtil::StopAbility("req_com_ohos_check_self_permission_app_a1", 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CheckCallerPermission_0100 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}
/**
 * @tc.name      CreateAppIdInfo_pid, uid interface performance
 * @tc.number    DPMS_CreateAppIdInfo_pid_uid_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CreateAppIdInfo_pid_uid_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_0100 start";
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ROOT_UID);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count();
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg << "(ms)";
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_0100 end";
}

/**
 * @tc.name      CreateAppIdInfo_pid, uid, deviceID interface performance
 * @tc.number    DPMS_CreateAppIdInfo_pid_uid_deviceID_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CreateAppIdInfo_pid_uid_deviceID_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_deviceID_0100 start";
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ROOT_UID, DEVICE_ID);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count() << "(ms)";
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg;
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_deviceID_0100 end";
}

/**
 * @tc.name      CreateAppIdInfo_pid, uid, deviceID, bundleName interface performance
 * @tc.number    DPMS_CreateAppIdInfo_pid_uid_deviceID_bundleName_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_CreateAppIdInfo_pid_uid_deviceID_bundleName_0100,
    TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_deviceID_bundleName_0100 start";
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(
            PID, ROOT_UID, DEVICE_ID, THIRD_MORETHAN_MAXPERMISSION_BUNDLE_NAME);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count();
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg << "(ms)";
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO)
        << "CheckDistributedPermissionPerformanceCPPTest DPMS_CreateAppIdInfo_pid_uid_deviceID_bundleName_0100 end";
}

/**
 * @tc.name      ParseAppIdInfo_appIdInfo, appIdInfoObj interface performance
 * @tc.number    DPMS_ParseAppIdInfo_appIdInfo_appIdInfoObj_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckDistributedPermissionPerformanceCPPTest, DPMS_ParseAppIdInfo_appIdInfo_appIdInfoObj_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "CheckDistributedPermissionPerformanceCPPTest DPMS_ParseAppIdInfo_appIdInfo_appIdInfoObj_0100 start";
    string appIdInfo = DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(PID, ROOT_UID, DEVICE_ID);
    AppIdInfo appIdInfoObj;
    double timeCounts = 0.0;
    for (int32_t i = 0; i < TEST_COUNT; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::AppIdInfoHelper::ParseAppIdInfo(appIdInfo, appIdInfoObj);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        GTEST_LOG_(INFO) << "runtime fp_ms =" << fp_ms.count() << "(ms)";
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / TEST_COUNT;
    GTEST_LOG_(INFO) << "avgTime = " << timeAvg;
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO)
        << "CheckDistributedPermissionPerformanceCPPTest DPMS_ParseAppIdInfo_appIdInfo_appIdInfoObj_0100 end";
}
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS