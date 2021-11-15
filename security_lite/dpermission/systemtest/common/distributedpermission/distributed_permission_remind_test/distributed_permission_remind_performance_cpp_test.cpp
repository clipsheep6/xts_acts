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
#include "permission_log.h"
#include "system_test_distributed_permission_util.h"
#include "ipc_skeleton.h"
#include "time_util.h"
#include "distributed_permission_kit.h"
#include "sqlite_storage.h"
#include "bundle_info.h"
#include "permission_definition.h"
#include "parameter.h"
#include "permission_kit.h"
#include "ability_manager_service.h"
#include "ability_manager_errors.h"
#include "app_mgr_service.h"
#include "module_test_dump_util.h"
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "ability_lifecycle_executor.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::EventFwk;
using namespace OHOS::MTUtil;
using namespace OHOS::STtools;
using namespace OHOS::STABUtil;

using std::string;

namespace {
std::recursive_mutex statckLock_;
int32_t hapRet = 0;
string permName_ = "DistributedPermissionName";
string test_lable_ = "test lable";
string test_description_ = "test description";
OHOS::AppExecFwk::BundleInfo bundleInfo_;
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION,
    "DistributedPermissionRemindPerformanceCPPTest"};
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const int32_t sleep_time_3000_ms = 3000;
static const int32_t sleep_time_5000_ms = 5000;
static const int32_t device_uuid_length = 65;
static const int32_t performance_test_times = 1000;

static const string SYSTEM_TEST_HAP_NAME_DPMS = "dpmsSystemBundleOnlySystemGrant";
static const string SYSTEM_TEST_HAP_NAME_DPMS_S = "dpmsSystemBundle";
static const string THIRD_TEST_HAP_NAME = "dpmsThirdBundle";
static const string THIRD_SERVICE_APP_HAP_NAME = "dpmsDataSystemTestA";

static const string SYSTEM_TEST_BUNDLE_NAME_DPMS = "com.system.hiworld.dpms_system_grant";
static const string SYSTEM_TEST_BUNDLE_NAME_DPMS_S = "com.system.hiworld.dpms_system_bundle";
static const string THIRD_TEST_BUNDLE_NAME = "com.third.hiworld.dpmsExample";
static const string THIRD_SERVICE_APP_BUNDLE_NAME = "com.ohos.dpmsst.service.appA";

static const string SYSTEM_TEST_BUNDLE_NAME_SETTINGS = "com.ohos.settings";
static const string SYSTEM_TEST_BUNDLE_NAME_LAUNCHER = "com.ohos.launcher";

static const string PERMISSION_CAMERA = "ohos.permission.CAMERA";
static const string PERMISSION_LOCATION = "ohos.permission.LOCATION";
static const string PERMISSION_MICROPHONE = "ohos.permission.MICROPHONE";
static const string PERMISSION_ACTIVITY_MOTION = "ohos.permission.ACTIVITY_MOTION";
static const string PERMISSION_DISTRIBUTED_DATASYNC = "ohos.permission.DISTRIBUTED_DATASYNC";

static std::vector<string> eventList_ = {"resp_com_ohos_dpmsst_service_app_a1"};
static std::vector<string> bundle_name_list_ = {SYSTEM_TEST_BUNDLE_NAME_DPMS, SYSTEM_TEST_BUNDLE_NAME_DPMS_S,
    THIRD_TEST_BUNDLE_NAME, SYSTEM_TEST_BUNDLE_NAME_SETTINGS, SYSTEM_TEST_BUNDLE_NAME_LAUNCHER};
static STtools::Event event_ = STtools::Event();
static sptr<OHOS::AppExecFwk::IAppMgr> appMs_ = nullptr;
static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_ = nullptr;
} // namespace

class DistributedPermissionRemindPerformanceCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void) {};
    void SetUp();
    void TearDown();
    static void RemoveStorage();
    string GetAppIdInfo(const uid_t uid, const string deviceId);
    void InstallBundel();
    void UnInstallBundel();
    void InitPermissionList();
    static bool SubscribeEvent();
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };
};
static std::shared_ptr<DistributedPermissionRemindPerformanceCPPTest::AppEventSubscriber> subscriber_ = nullptr;
// Register listening events and listen for messages sent by C + + app.
bool DistributedPermissionRemindPerformanceCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}

// Receive messages sent by C + + app.
void DistributedPermissionRemindPerformanceCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();
    GTEST_LOG_(INFO) << "OnReceiveEvent: ret=" << data.GetWant().GetIntParam("ret", hapRet);
    GTEST_LOG_(INFO) << "OnReceiveEvent: hapRet=" << hapRet;

    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(eventList_.begin(), eventList_.end(), eventName);
    if (iter != eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

class TestCallback : public IRemoteStub<OnUsingPermissionReminder> {
public:
    TestCallback() = default;
    virtual ~TestCallback() = default;

    string permName = "";
    void StartUsingPermission(const PermissionReminderInfo &permReminderInfo)
    {
        EXPECT_EQ(permName, OHOS::Str16ToStr8(permReminderInfo.permName));
    }

    void StopUsingPermission(const PermissionReminderInfo &permReminderInfo)
    {
        EXPECT_EQ(permName, OHOS::Str16ToStr8(permReminderInfo.permName));
    }
};

void DistributedPermissionRemindPerformanceCPPTest::SetUpTestCase(void)
{
    RemoveStorage();

    SubscribeEvent();
    int AppFreezingTime = 60;
    appMs_ = STAbilityUtil::GetAppMgrService();
    abilityMs_ = STAbilityUtil::GetAbilityManagerService();
    if (appMs_) {
        appMs_->SetAppFreezingTime(AppFreezingTime);
        int time = 0;
        appMs_->GetAppFreezingTime(time);
        std::cout << "appMs_->GetAppFreezingTime();" << time << std::endl;
    }
}

// Prepare before testing, install HAP package and authorize HAP package
void DistributedPermissionRemindPerformanceCPPTest::SetUp(void)
{
    InstallBundel();
    InitPermissionList();
    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_CAMERA);
    permList_user.push_back(PERMISSION_LOCATION);
    permList_user.push_back(PERMISSION_MICROPHONE);

    PermissionKit::AddUserGrantedReqPermissions(THIRD_TEST_BUNDLE_NAME, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(THIRD_TEST_BUNDLE_NAME, PERMISSION_CAMERA, 0);
    PermissionKit::GrantUserGrantedPermission(THIRD_TEST_BUNDLE_NAME, PERMISSION_LOCATION, 0);
    PermissionKit::GrantUserGrantedPermission(THIRD_TEST_BUNDLE_NAME, PERMISSION_MICROPHONE, 0);

    std::vector<string> permList_sytem;
    permList_sytem.push_back(PERMISSION_ACTIVITY_MOTION);
    PermissionKit::AddSystemGrantedReqPermissions(SYSTEM_TEST_BUNDLE_NAME_DPMS_S, permList_sytem);
    PermissionKit::GrantSystemGrantedPermission(SYSTEM_TEST_BUNDLE_NAME_DPMS_S, PERMISSION_ACTIVITY_MOTION);
}

// Local sensitive permission authorization for HAP package
void DistributedPermissionRemindPerformanceCPPTest::InitPermissionList()
{
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_Camera = {.permissionName = PERMISSION_CAMERA,
        .bundleName = THIRD_TEST_BUNDLE_NAME,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Location = {.permissionName = PERMISSION_LOCATION,
        .bundleName = THIRD_TEST_BUNDLE_NAME,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Microphone = {.permissionName = PERMISSION_MICROPHONE,
        .bundleName = THIRD_TEST_BUNDLE_NAME,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_Activity = {.permissionName = PERMISSION_ACTIVITY_MOTION,
        .bundleName = SYSTEM_TEST_BUNDLE_NAME_DPMS_S,
        .grantMode = GrantMode::SYSTEM_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    permDefList.emplace_back(permissionDef_Camera);
    permDefList.emplace_back(permissionDef_Location);
    permDefList.emplace_back(permissionDef_Microphone);
    permDefList.emplace_back(permissionDef_Activity);
    PermissionKit::AddDefPermissions(permDefList);
}

// After the test is completed, cancel the authorized permissions of the HAP package and uninstall the HAP package
void DistributedPermissionRemindPerformanceCPPTest::TearDown(void)
{
    GTEST_LOG_(INFO) << "void DistributedPermissionRemindPerformanceCPPTest::TearDown(void)";
    PermissionKit::RemoveDefPermissions(SYSTEM_TEST_BUNDLE_NAME_DPMS_S);
    PermissionKit::RemoveDefPermissions(THIRD_TEST_BUNDLE_NAME);
    PermissionKit::RemoveDefPermissions(THIRD_SERVICE_APP_BUNDLE_NAME);

    UnInstallBundel();
}

// Install HAP package
void DistributedPermissionRemindPerformanceCPPTest::InstallBundel()
{
    STDistibutePermissionUtil::Install(THIRD_TEST_HAP_NAME);
    STDistibutePermissionUtil::Install(THIRD_SERVICE_APP_HAP_NAME);
    abilityMs_ = STAbilityUtil::GetAbilityManagerService();
    appMs_ = STAbilityUtil::GetAppMgrService();
    usleep(sleep_time_5000_ms);
}

// Uninstall HAP package
void DistributedPermissionRemindPerformanceCPPTest::UnInstallBundel()
{
    {
        STDistibutePermissionUtil::Uninstall(THIRD_TEST_BUNDLE_NAME);
        STDistibutePermissionUtil::Uninstall(THIRD_SERVICE_APP_BUNDLE_NAME);
    }
    STAbilityUtil::RemoveStack(1, abilityMs_, sleep_time_3000_ms, sleep_time_5000_ms);
    std::vector<string> vecBundleName;
    vecBundleName.push_back(THIRD_SERVICE_APP_BUNDLE_NAME);
    STAbilityUtil::KillBundleProcess(vecBundleName);
    STAbilityUtil::CleanMsg(event_);
}

// Clear database
void DistributedPermissionRemindPerformanceCPPTest::RemoveStorage()
{
    std::vector<GenericValues> visitorResults;
    DataStorage::DataType dataTypes[] = {DataStorage::DataType::PERMISSION_VISITOR,
        DataStorage::DataType::PERMISSION_RECORD};
    for (auto dataType : dataTypes) {
        SqliteStorage::GetRealDataStorage().Find(dataType, visitorResults);
        if (visitorResults.size() == 0) {
            continue;
        }
        GenericValues conditions;
        for (auto visitorResult : visitorResults) {
            conditions.Put(FIELD_ID, visitorResult.Get(FIELD_ID));
        }
        bool rmResult = SqliteStorage::GetRealDataStorage().Remove(dataType, conditions);
        PERMISSION_LOG_DEBUG(LABEL, "init rmResult = %{public}d", rmResult);
    }
}

// Get AppIdInfo
string DistributedPermissionRemindPerformanceCPPTest::GetAppIdInfo(const uid_t uid, const string deviceId)
{
    int32_t pid = 0;
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid, deviceId);
}

/**
 * @tc.name      Registerusingpermissionreminder interface performance
 * @tc.number    DPMS_RegisterUsingPermissionReminder_0300
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_RegisterUsingPermissionReminder_0300, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_RegisterUsingPermissionReminder_0300 start";

    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_RegisterUsingPermissionReminder_0300";
    int32_t ret = -1;
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int run_times = 0; run_times < performance_test_times; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        ret = DistributedPermissionKit::RegisterUsingPermissionReminder(callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        EXPECT_EQ(0, ret);
        totalTime += endTime - startTime;
    }
    averageTime = totalTime / performance_test_times;
    GTEST_LOG_(INFO) << averageTime.count();
    PERMISSION_LOG_DEBUG(LABEL, "DPMS_RegisterUsingPermissionReminder_0300  avg = %{public}f(ms)", averageTime.count());
    EXPECT_LT(averageTime.count(), STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_RegisterUsingPermissionReminder_0300 end";
}

/**
 * @tc.name      Registerusingpermissionreminder interface performance
 * @tc.number    DPMS_UnregisterUsingPermissionReminder_0300
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_UnregisterUsingPermissionReminder_0300, TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedPermissionRemindPerformanceCPPTest DPMS_UnregisterUsingPermissionReminder_0300 start";
    int32_t ret = -1;
    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_UnregisterUsingPermissionReminder_0300";
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int run_times = 0; run_times < performance_test_times; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        ret = DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
        auto endTime = std::chrono::high_resolution_clock::now();
        EXPECT_EQ(0, ret);
        totalTime += endTime - startTime;
    }

    averageTime = totalTime / performance_test_times;
    GTEST_LOG_(INFO) << averageTime.count();
    EXPECT_LT(averageTime.count(), STDistibutePermissionUtil::MAX_ELAPSED);
    PERMISSION_LOG_DEBUG(LABEL, "DPMS_UnregisterUsingPermissionReminder_0300  avg = %{public}f(ms)",
        averageTime.count());
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_UnregisterUsingPermissionReminder_0300 end";
}

/**
 * @tc.name      Checkpermissionandstartusing interface performance
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0900
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_CheckPermissionAndStartUsing_0900, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_CheckPermissionAndStartUsing_0900 start";

    string appInfo = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo = GetAppIdInfo(uid, deviceId);
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int run_times = 0; run_times < performance_test_times; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        DistributedPermissionKit::StopUsingPermission(permName, appInfo);
    }

    averageTime = totalTime / performance_test_times;
    GTEST_LOG_(INFO) << averageTime.count();
    EXPECT_LT(averageTime.count(), STDistibutePermissionUtil::MAX_ELAPSED);
    PERMISSION_LOG_DEBUG(LABEL, "DPMS_CheckPermissionAndStartUsing_0900  avg = %{public}f(ms)", averageTime.count());
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_CheckPermissionAndStartUsing_0900 end";
}

/**
 * @tc.name      CheckCallerPermissionAndStartUsing interface performance
 * @tc.number    DPMS_CheckCallerPermissionAndStartUsing_0300
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_CheckCallerPermissionAndStartUsing_0300, TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedPermissionRemindPerformanceCPPTest DPMS_CheckCallerPermissionAndStartUsing_0300 start";
    string bundleName = "com.ohos.dpmsst.service.appA";
    string abilityName = "DpmsStServiceAbilityA1";
    int wait_ability_timeout = 5;
    int wait_start_ability_timeout_ms = 1000;
    std::vector<OHOS::Security::Permission::PermissionDef> permHap;
    OHOS::Security::Permission::PermissionDef permissionHap_Camera = {.permissionName = PERMISSION_CAMERA,
        .bundleName = THIRD_TEST_BUNDLE_NAME,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    permHap.emplace_back(permissionHap_Camera);
    PermissionKit::AddDefPermissions(permHap);

    std::vector<string> permHap_user;
    permHap_user.push_back(PERMISSION_CAMERA);

    PermissionKit::AddUserGrantedReqPermissions(bundleName, permHap_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName, PERMISSION_CAMERA, 0);

    MAP_STR_STR params;
    params["permName"] = PERMISSION_CAMERA;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);

    STAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart",
        OHOS::AppExecFwk::AbilityLifecycleExecutor::LifecycleState::INACTIVE, sleep_time_3000_ms);

    STAbilityUtil::PublishEvent("req_com_ohos_dpmsst_service_app_a1",
        OHOS::AppExecFwk::AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "DPMS_CheckCallerPermissionAndStartUsing_0300");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CheckCallerPermissionAndStartUsing_0300", 0, wait_ability_timeout),
        0);

    // stop ability
    STAbilityUtil::StopAbility("req_com_ohos_dpmsst_service_app_a1", 0, "StopSelfAbility");
    STAbilityUtil::WaitCompleted(event_, "OnStop", OHOS::AppExecFwk::AbilityLifecycleExecutor::LifecycleState::INITIAL,
        wait_ability_timeout);

    GTEST_LOG_(INFO)
        << "DistributedPermissionRemindPerformanceCPPTest DPMS_CheckCallerPermissionAndStartUsing_0300 end";
}

/**
 * @tc.name      Startusingpermission interface performance
 * @tc.number    DPMS_StartUsingPermission_0900
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_StartUsingPermission_0900, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_StartUsingPermission_0900 start";
    string appInfo = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo = GetAppIdInfo(uid, deviceId);
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;

    for (int run_times = 0; run_times < performance_test_times; run_times++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::StartUsingPermission(permName, appInfo);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        DistributedPermissionKit::StopUsingPermission(permName, appInfo);
    }

    averageTime = totalTime / performance_test_times;
    GTEST_LOG_(INFO) << averageTime.count();
    EXPECT_LT(averageTime.count(), STDistibutePermissionUtil::MAX_ELAPSED);
    PERMISSION_LOG_DEBUG(LABEL, "DPMS_StartUsingPermission_0900  avg = %{public}f(ms)", averageTime.count());
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_StartUsingPermission_0900 end";
}

/**
 * @tc.name      Stopusingpermission interface performance
 * @tc.number    DPMS_StopUsingPermission_1000
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindPerformanceCPPTest, DPMS_StopUsingPermission_1000, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_StopUsingPermission_1000 start";

    string appInfo = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo = GetAppIdInfo(uid, deviceId);
    string permName = PERMISSION_CAMERA;
    std::chrono::duration<double, std::milli> totalTime;
    std::chrono::duration<double, std::milli> averageTime;
    for (int run_times = 0; run_times < performance_test_times; run_times++) {
        DistributedPermissionKit::StartUsingPermission(permName, appInfo);
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::StopUsingPermission(permName, appInfo);
        auto endTime = std::chrono::high_resolution_clock::now();
        totalTime += endTime - startTime;
        DistributedPermissionKit::StopUsingPermission(permName, appInfo);
    }
    averageTime = totalTime / performance_test_times;
    GTEST_LOG_(INFO) << averageTime.count();
    EXPECT_LT(averageTime.count(), STDistibutePermissionUtil::MAX_ELAPSED);
    PERMISSION_LOG_DEBUG(LABEL, "DPMS_StopUsingPermission_1000  avg = %{public}f(ms)", averageTime.count());
    GTEST_LOG_(INFO) << "DistributedPermissionRemindPerformanceCPPTest DPMS_StopUsingPermission_1000 end";
}
