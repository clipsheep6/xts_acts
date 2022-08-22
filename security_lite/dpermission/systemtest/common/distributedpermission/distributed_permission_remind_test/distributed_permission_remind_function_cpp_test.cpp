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
#include <securec.h>
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
using namespace OHOS::STtools;
using namespace OHOS::STABUtil;

using std::string;

namespace {
std::recursive_mutex statckLock_;
int32_t hapRet = 0;
string permName_ = "DistributedPermissionName";
string test_lable_ = "test lable";
string test_description_ = "test description";
string appInfo_ = "";
OHOS::AppExecFwk::BundleInfo bundleInfo_;
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION,
    "DistributedPermissionRemindFunctionCPPTest"};
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const int32_t sleep_time_3000_ms = 3000;
static const int32_t sleep_time_5000_ms = 5000;
static const int32_t cmd_result_buf_size = 1024 * 4;
static const int32_t device_uuid_length = 65;

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
static const string PERMISSION_READ_HEALTH_DATA = "ohos.permission.READ_HEALTH_DATA";
static const string PERMISSION_TEST = "ohos.permission.TEST";

static std::vector<string> eventList_ = {"resp_com_ohos_dpmsst_service_app_a1"};
static std::vector<string> bundle_name_list_ = {SYSTEM_TEST_BUNDLE_NAME_DPMS, SYSTEM_TEST_BUNDLE_NAME_DPMS_S,
    THIRD_TEST_BUNDLE_NAME, SYSTEM_TEST_BUNDLE_NAME_SETTINGS, SYSTEM_TEST_BUNDLE_NAME_LAUNCHER};
static STtools::Event event_ = STtools::Event();
static sptr<OHOS::AppExecFwk::IAppMgr> appMs_ = nullptr;
static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_ = nullptr;
} // namespace

class DistributedPermissionRemindFunctionCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp();
    void TearDown();
    static void RemoveStorage();
    string GetAppIdInfo(const uid_t uid, const string deviceId);
    int32_t CheckDpsServiceAndStart();
    void DeleteAllRemind();
    void InstallBundel();
    void UnInstallBundel();
    void InitPermissionList();
    static bool SubscribeEvent();
    void CheckRemind(string &result_str);
    void CheckServiceNotStarted(string &result_str);
    void StopPermissionRemind(const string appInfo);
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };
};
static std::shared_ptr<DistributedPermissionRemindFunctionCPPTest::AppEventSubscriber> subscriber_ = nullptr;
// Register listening events and listen for messages sent by C + + app.
bool DistributedPermissionRemindFunctionCPPTest::SubscribeEvent()
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
void DistributedPermissionRemindFunctionCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
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

void DistributedPermissionRemindFunctionCPPTest::SetUpTestCase(void)
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

void DistributedPermissionRemindFunctionCPPTest::TearDownTestCase(void)
{
    FILE *ptr = popen("ps -ef|grep checkresult|cut -c 14-18|xargs kill -9", "r");
    pclose(ptr);
    ptr = popen("ps -ef|grep SendRequest.result|cut -c 14-18|xargs kill -9", "r");
    pclose(ptr);
}

// Prepare before testing, install HAP package and authorize HAP package
void DistributedPermissionRemindFunctionCPPTest::SetUp(void)
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
void DistributedPermissionRemindFunctionCPPTest::InitPermissionList()
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
void DistributedPermissionRemindFunctionCPPTest::TearDown(void)
{
    GTEST_LOG_(INFO) << "void DistributedPermissionRemindFunctionCPPTest::TearDown(void)";
    PermissionKit::RemoveDefPermissions(SYSTEM_TEST_BUNDLE_NAME_DPMS_S);
    PermissionKit::RemoveDefPermissions(THIRD_TEST_BUNDLE_NAME);
    PermissionKit::RemoveDefPermissions(THIRD_SERVICE_APP_BUNDLE_NAME);

    UnInstallBundel();
}

// Install HAP package
void DistributedPermissionRemindFunctionCPPTest::InstallBundel()
{
    STDistibutePermissionUtil::Install(THIRD_TEST_HAP_NAME);
    STDistibutePermissionUtil::Install(THIRD_SERVICE_APP_HAP_NAME);
    abilityMs_ = STAbilityUtil::GetAbilityManagerService();
    appMs_ = STAbilityUtil::GetAppMgrService();
    usleep(sleep_time_5000_ms);
}

// Uninstall HAP package
void DistributedPermissionRemindFunctionCPPTest::UnInstallBundel()
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
void DistributedPermissionRemindFunctionCPPTest::RemoveStorage()
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
string DistributedPermissionRemindFunctionCPPTest::GetAppIdInfo(const uid_t uid, const string deviceId)
{
    int32_t pid = 0;
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid, deviceId);
}

// Find the result after the permission reminder is completed from the log for assertion
void DistributedPermissionRemindFunctionCPPTest::CheckRemind(string &result_str)
{
    PERMISSION_LOG_DEBUG(LABEL, "CheckRemind called");
    int sleep_time_milliseconds = 10000;
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_milliseconds));
    string cmd_1 = "hilog | grep checkresult > result.log";
    string cmd_2 = "grep -a checkresult result.log | tail -n 1";
    FILE *ptr;
    char result[cmd_result_buf_size] = {0};
    char buf_ps[cmd_result_buf_size];
    ptr = popen(cmd_1.c_str(), "w");
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_milliseconds));
    if ((ptr = popen(cmd_2.c_str(), "r")) != nullptr) {
        while (fgets(buf_ps, sizeof(buf_ps), ptr) != nullptr) {
            if (strncat_s(result, sizeof(result), buf_ps, sizeof(result) - 1) != EOK) {
                break;
            }
        }
        pclose(ptr);
        ptr = nullptr;
    }
    string sCmdResult = string(result);
    int find_deviation = 2;

    if (sCmdResult.length() > 0) {
        result_str = sCmdResult.substr(sCmdResult.rfind(":") + find_deviation);
        result_str.erase(result_str.end() - 1);
    } else {
        PERMISSION_LOG_DEBUG(LABEL, "CheckRemind get log error ");
        result_str = "error";
    }
    ptr = popen("rm result.log", "w");
    pclose(ptr);
    PERMISSION_LOG_DEBUG(LABEL, "CheckRemind result_str:%{public}s ", result_str.c_str());
}

// Find the log in which the DPMS service is not turned on for assertion
void DistributedPermissionRemindFunctionCPPTest::CheckServiceNotStarted(string &result_str)
{
    PERMISSION_LOG_DEBUG(LABEL, "CheckServiceNotStarted called");
    int sleep_time_milliseconds = 10000;
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_milliseconds));
    FILE *ptr;
    string cmd_1 = "hilog | grep SendRequest.result > result.log";
    string cmd_2 = "grep -a SendRequest.result result.log | tail -n 1";
    char result[cmd_result_buf_size] = {0};
    char buf_ps[cmd_result_buf_size];
    ptr = popen(cmd_1.c_str(), "w");
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_milliseconds));
    if ((ptr = popen(cmd_2.c_str(), "r")) != nullptr) {
        while (fgets(buf_ps, sizeof(buf_ps), ptr) != nullptr) {
            if (strncat_s(result, sizeof(result), buf_ps, sizeof(result) - 1) != EOK) {
                break;
            }
        }
        pclose(ptr);
        ptr = nullptr;
    }
    string sCmdResult = string(result);
    int find_deviation = 2;
    if (sCmdResult.length() > 0) {
        result_str = sCmdResult.substr(sCmdResult.rfind("=") + find_deviation);
        result_str.erase(result_str.end() - 1);
    } else {
        PERMISSION_LOG_DEBUG(LABEL, "CheckServiceNotStarted get log error ");
        result_str = "error";
    }
    ptr = popen("rm result.log", "w");
    pclose(ptr);
    PERMISSION_LOG_DEBUG(LABEL, "CheckServiceNotStarted result_str:%{public}s ", result_str.c_str());
}

// Clear the sensitive permission reminder of the used app
void DistributedPermissionRemindFunctionCPPTest::DeleteAllRemind()
{
    uid_t uid;
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);

    for (auto bundleName : bundle_name_list_) {
        uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
        appInfo_ = GetAppIdInfo(uid, deviceId);
        StopPermissionRemind(appInfo_);
    }

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    for (auto deviceinfo : deviceList) {
        uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        StopPermissionRemind(appInfo_);
    }
}

// Clear sensitive permission reminder
void DistributedPermissionRemindFunctionCPPTest::StopPermissionRemind(const string appInfo)
{
    string permName = "";
    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo);
    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo);
    permName = PERMISSION_MICROPHONE;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo);
}

/**
 * @tc.name      RegisterUsingPermissionReminder the callback does not set and returns - 1
 * @tc.number    DPMS_RegisterUsingPermissionReminder_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_RegisterUsingPermissionReminder_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_RegisterUsingPermissionReminder_0200 start";

    OHOS::sptr<TestCallback> callback = nullptr;
    int32_t ret = -1;

    ret = DistributedPermissionKit::RegisterUsingPermissionReminder(callback);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_RegisterUsingPermissionReminder_0200 end";
}

/**
 * @tc.name      UnregisterUsingPermissionReminder the callback does not set and returns - 1
 * @tc.number    DPMS_UnregisterUsingPermissionReminder_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_UnregisterUsingPermissionReminder_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_UnregisterUsingPermissionReminder_0200 start";

    OHOS::sptr<TestCallback> callback;
    int32_t ret = -1;

    ret = DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_UnregisterUsingPermissionReminder_0200 end";
}

/**
 * @tc.name      CheckPermissionAndStartUsing permissionname is empty and - 1 is returned
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0100 start";
    int32_t ret = -1;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DPMS_S);
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0100 end";
}

/**
 * @tc.name      CheckPermissionAndStartUsing the appidinfo structure is illegal, and - 1 is returned
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0200 start";
    int32_t ret = -1;

    appInfo_ = "";
    string permName = "DPMS_CheckPermissionAndStartUsing_0200";

    ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0200 end";
}

/**
 * @tc.name      System uid permissions do not require sensitive permission usage reminders
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0500, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0500 start";

    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_ACTIVITY_MOTION;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DPMS_S);

    appInfo_ = GetAppIdInfo(uid, deviceId);

    int ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0500 end";
}

/**
 * @tc.name      Sensitive permissions are required when using authorized sensitive permissions
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0600 start";
    GenericValues null;
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_VISITOR, null);
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_RECORD, null);
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    string permName = PERMISSION_CAMERA;
    int ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(0, ret);

    permName = PERMISSION_LOCATION;
    ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(0, ret);

    permName = PERMISSION_MICROPHONE;
    ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(0, ret);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    SqliteStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_VISITOR, visitorAfter);
    SqliteStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_RECORD, recordAfter);
    EXPECT_STREQ(THIRD_TEST_BUNDLE_NAME.c_str(), visitorAfter[0].GetString(FIELD_BUNDLE_NAME).c_str());
    string newPermName;
    int32_t opcode = recordAfter[0].GetInt(FIELD_OP_CODE);
    Constant::PermissionNameToOrFromOpCode(newPermName, opcode);
    EXPECT_STREQ(newPermName.c_str(), PERMISSION_CAMERA.c_str());
    string newPermName1;
    opcode = recordAfter[1].GetInt(FIELD_OP_CODE);
    Constant::PermissionNameToOrFromOpCode(newPermName1, opcode);
    EXPECT_STREQ(newPermName1.c_str(), PERMISSION_LOCATION.c_str());
    string newPermName2;
    opcode = recordAfter[2].GetInt(FIELD_OP_CODE);
    Constant::PermissionNameToOrFromOpCode(newPermName2, opcode);
    EXPECT_STREQ(newPermName2.c_str(), PERMISSION_MICROPHONE.c_str());
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0600 end";
}

/**
 * @tc.name      Is not sensitive permissions it does not need to use sensitive permissions
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0700, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0700 start";
    GenericValues null;
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_VISITOR, null);
    DataStorage::GetRealDataStorage().Remove(DataStorage::PERMISSION_RECORD, null);
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_READ_HEALTH_DATA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    int ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(-1, ret);

    std::vector<GenericValues> visitorAfter;
    std::vector<GenericValues> recordAfter;
    SqliteStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_VISITOR, visitorAfter);
    SqliteStorage::GetRealDataStorage().Find(DataStorage::PERMISSION_RECORD, recordAfter);

    EXPECT_STREQ(THIRD_TEST_BUNDLE_NAME.c_str(), visitorAfter[0].GetString(FIELD_BUNDLE_NAME).c_str());

    string newPermName;
    int32_t opcode = recordAfter[0].GetInt(FIELD_OP_CODE);
    Constant::PermissionNameToOrFromOpCode(newPermName, opcode);
    EXPECT_STREQ(newPermName.c_str(), PERMISSION_READ_HEALTH_DATA.c_str());

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0700 end";
}

/**
 * @tc.name      Sensitive permission is not required when the application does not use sensitive permission
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0800, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0800 start";

    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_TEST;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    int ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0800 end";
}

/**
 * @tc.name      CheckCallerPermissionAndStartUsing permissionname is empty and - 1 is returned
 * @tc.number    DPMS_CheckCallerPermissionAndStartUsing_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckCallerPermissionAndStartUsing_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckCallerPermissionAndStartUsing_0100 start";

    // usd the THIRD_TEST_HAP_NAME
    string permName = "";
    int ret = DistributedPermissionKit::CheckCallerPermissionAndStartUsing(permName);
    EXPECT_EQ(-1, ret);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckCallerPermissionAndStartUsing_0100 end";
}

/**
 * @tc.name      StartUsingPermission the permissionname is empty, output the log and exit the processing
 * @tc.number    DPMS_StartUsingPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0100 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);

    // usd the THIRD_TEST_HAP_NAME
    string permName = "";
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    string result_srt = "";
    string expect_str = "Param Empty";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0100 end";
}

/**
 * @tc.name      StartUsingPermission appidinfo is illegal output log and exit processing
 * @tc.number    DPMS_StartUsingPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0200 start";
    appInfo_ = "";
    string permName = PERMISSION_CAMERA;

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    string result_srt = "";
    string expect_str = "Param Empty";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0200 end";
}

/**
 * @tc.name      Premise: no sensitive permissions are used.The local application uses 1 sensitive permission
 * @tc.number    DPMS_StartUsingPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0400 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0400 end";
}

/**
 * @tc.name      Add 1 sensitive permission for local application
 * @tc.number    DPMS_StartUsingPermission_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0500 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0500 end";
}

/**
 * @tc.name      Local application 2 uses 1 sensitive permission
 * @tc.number    DPMS_StartUsingPermission_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0600 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_LAUNCHER);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_MICROPHONE;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0600 end";
}

/**
 * @tc.name      The subject device uses 1 sensitive permission of the object device
 * @tc.number    DPMS_StartUsingPermission_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0700 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    }

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0700 end";
}

/**
 * @tc.name      The subject device adds 1 sensitive permission to use the object device
 * @tc.number    DPMS_StartUsingPermission_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0800 start";

    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = "";
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        permName = PERMISSION_CAMERA;
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

        permName = PERMISSION_LOCATION;
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    }

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0800 end";
}

/**
 * @tc.name      StopUsingPermission the permissionname is empty, the log is output,and the processing is exited.
 * @tc.number    DPMS_StopUsingPermission_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0100 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "Param Empty";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0100 end";
}

/**
 * @tc.name      StopUsingPermission appidinfo is illegal. Output log and exit the processing.
 * @tc.number    DPMS_StopUsingPermission_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0200 start";
    appInfo_ = "";
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "Param Empty";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0200 end";
}

/**
 * @tc.name      When the device is disconnected.
 * @tc.number    DPMS_StopUsingPermission_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0400, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0400 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = "";
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        permName = PERMISSION_LOCATION;
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    }
    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0400 end";
}

/**
 * @tc.name      Enable 1 sensitive permission and disable 1 sensitive permission
 * @tc.number    DPMS_StopUsingPermission_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0500, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0500 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = PERMISSION_CAMERA;

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0500 end";
}

/**
 * @tc.name      Enable 2 sensitive permission and disable 1 sensitive permission
 * @tc.number    DPMS_StopUsingPermission_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0600 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0600 end";
}

/**
 * @tc.name      Disable sensitive permissions for local application 2
 * @tc.number    DPMS_StopUsingPermission_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0700 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_LAUNCHER);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_MICROPHONE;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0700 end";
}

/**
 * @tc.name      Subject device deactivation object device sensitive permission
 * @tc.number    DPMS_StopUsingPermission_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0800 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    }

    appInfo_ = GetAppIdInfo(uid, deviceId);
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        DistributedPermissionKit::StopUsingPermission(permName, appInfo_);
    }
    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0800 end";
}

/**
 * @tc.name      The main equipment stops enabling the object equipment with 1 sensitive permission
 * @tc.number    DPMS_StopUsingPermission_0900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0900, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0900 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = "";
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    std::vector<OHOS::DistributedHardware::DmDeviceInfo> deviceList;
    string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        permName = PERMISSION_CAMERA;
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

        permName = PERMISSION_LOCATION;
        DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    }

    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);

    for (auto deviceinfo : deviceList) {
        appInfo_ = GetAppIdInfo(uid, deviceinfo.deviceId);
        DistributedPermissionKit::StopUsingPermission(permName, appInfo_);
    }
    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0900 end";
}

/**
 * @tc.name      Interface combination test 1
 * @tc.number    DPMS_StopUsingPermission_1300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_1300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1300 start";

    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_StopUsingPermission_1300";
    int32_t ret = -1;

    ret = DistributedPermissionKit::RegisterUsingPermissionReminder(callback);
    EXPECT_EQ(0, ret);

    appInfo_ = "";
    string permName = "";

    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    permName = PERMISSION_LOCATION;
    ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    EXPECT_EQ(0, ret);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    ret = DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
    EXPECT_EQ(0, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1300 end";
}

/**
 * @tc.name      Interface combination test 2
 * @tc.number    DPMS_StopUsingPermission_1400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_1400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1400 start";
    string bundleName = THIRD_SERVICE_APP_BUNDLE_NAME;
    string abilityName = "DpmsStServiceAbilityA1";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_StopUsingPermission_1400";
    int32_t ret = -1;

    ret = DistributedPermissionKit::RegisterUsingPermissionReminder(callback);
    EXPECT_EQ(0, ret);

    appInfo_ = "";
    string permName = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(bundleName);
    appInfo_ = GetAppIdInfo(uid, deviceId);

    MAP_STR_STR params;
    params["permName"] = PERMISSION_LOCATION;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_);

    STAbilityUtil::WaitCompleted(event_, "OnStart",
        OHOS::AppExecFwk::AbilityLifecycleExecutor::LifecycleState::INACTIVE, sleep_time_3000_ms);
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_3000_ms));
    EXPECT_EQ(0, hapRet);

    // stop ability
    STAbilityUtil::StopAbility("req_com_ohos_dpmsst_service_app_a1", 0, "StopSelfAbility");

    STAbilityUtil::WaitCompleted(event_, "OnStop", OHOS::AppExecFwk::AbilityLifecycleExecutor::LifecycleState::INITIAL,
        sleep_time_3000_ms);
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_3000_ms));

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    ret = DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
    EXPECT_EQ(0, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1400 end";
}

/**
 * @tc.name      Confirm StartUsingPermission the log of permission notification
 * @tc.number    DPMS_StopUsingPermission_1500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_1500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1500 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    DeleteAllRemind();
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1500 end";
}

/**
 * @tc.name      Confirm StopUsingPermission the log of permission notification,
 * @tc.number    DPMS_StopUsingPermission_1600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_1600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1600 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);

    permName = PERMISSION_CAMERA;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    permName = PERMISSION_LOCATION;
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "CreatAns Success";
    CheckRemind(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_1600 end";
}

/**
 * @tc.name      RegisterUsingPermissionReminder the DPMS service does not start returns - 1
 * @tc.number    DPMS_RegisterUsingPermissionReminder_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_RegisterUsingPermissionReminder_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_RegisterUsingPermissionReminder_0100 start";
    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_RegisterUsingPermissionReminder_0100";
    int32_t ret = 0;
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    ret = DistributedPermissionKit::RegisterUsingPermissionReminder(callback);
    GTEST_LOG_(INFO) << "result : " << ret;
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_RegisterUsingPermissionReminder_0100 end";

    DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
}

/**
 * @tc.name      UnregisterUsingPermissionReminder the DPMS service does not start returns - 1
 * @tc.number    DPMS_UnregisterUsingPermissionReminder_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_UnregisterUsingPermissionReminder_0100, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_UnregisterUsingPermissionReminder_0100 start";

    OHOS::sptr<TestCallback> callback(new TestCallback());
    callback->permName = "DPMS_UnregisterUsingPermissionReminder_0100";
    int32_t ret = 0;
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    ret = DistributedPermissionKit::UnregisterUsingPermissionReminder(callback);
    GTEST_LOG_(INFO) << "result : " << ret;
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_UnregisterUsingPermissionReminder_0100 end";
}

/**
 * @tc.name      CheckPermissionAndStartUsing the DPMS service does not start returns - 1
 * @tc.number    DPMS_CheckPermissionAndStartUsing_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckPermissionAndStartUsing_0300, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0300 start";

    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(THIRD_TEST_BUNDLE_NAME);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    int ret = DistributedPermissionKit::CheckPermissionAndStartUsing(permName, appInfo_);
    GTEST_LOG_(INFO) << "result : " << ret;
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckPermissionAndStartUsing_0300 end";
}

/**
 * @tc.name      CheckCallerPermissionAndStartUsing DPMS service does not start returns - 1
 * @tc.number    DPMS_CheckCallerPermissionAndStartUsing_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_CheckCallerPermissionAndStartUsing_0200, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckCallerPermissionAndStartUsing_0200 start";
    string permName = PERMISSION_CAMERA;
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    int ret = DistributedPermissionKit::CheckCallerPermissionAndStartUsing(permName);
    GTEST_LOG_(INFO) << "result : " << ret;
    EXPECT_EQ(-1, ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_CheckCallerPermissionAndStartUsing_0200 end";
}

/**
 * @tc.name      StartUsingPermission DPMS service does not start, check failed log
 * @tc.number    DPMS_StartUsingPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StartUsingPermission_0300, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0300 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    string permName = PERMISSION_CAMERA;
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    DistributedPermissionKit::StartUsingPermission(permName, appInfo_);
    string result_srt = "";
    string expect_str = "32";
    CheckServiceNotStarted(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StartUsingPermission_0300 end";
}

/**
 * @tc.name      StopUsingPermission DPMS service does not start, check failed log.
 * @tc.number    DPMS_StopUsingPermission_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedPermissionRemindFunctionCPPTest, DPMS_StopUsingPermission_0300, TestSize.Level4)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0300 start";
    appInfo_ = "";
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    uid_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_SETTINGS);
    appInfo_ = GetAppIdInfo(uid, deviceId);
    string permName = "";

    permName = PERMISSION_CAMERA;
    FILE *ptr;
    ptr = popen("kill -9 $(pidof dps_service)", "r");
    pclose(ptr);
    DistributedPermissionKit::StopUsingPermission(permName, appInfo_);

    string result_srt = "";
    string expect_str = "32";
    CheckServiceNotStarted(result_srt);
    int compare_result = expect_str.compare(result_srt);
    EXPECT_EQ(0, compare_result);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindFunctionCPPTest DPMS_StopUsingPermission_0300 end";
}