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
#include <gtest/gtest.h>
#define private public
#include "distributed_permission_manager_service.h"
#include "distributed_permission_kit.h"
#include "on_request_permissions_result_stub.h"
#include "system_test_distributed_permission_util.h"
#include "sensitive_resource_switch_setting.h"
#include "resource_switch_cache.h"
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
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::STPermissionUtil;
using namespace OHOS::AppExecFwk;
using namespace OHOS::STABUtil;
using namespace OHOS::EventFwk;
using namespace OHOS::STtools;
using std::string;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace Security {
namespace Permission {
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = {LOG_CORE, SECURITY_DOMAIN_PERMISSION, "PermissionBmsManager"};
namespace {
const string long_string_65 = "long_string_long_string_long_string_long_string_long_string_long_";
const string long_string_257 =
    "long_string_long_string_long_string_long_string_long_string_long_string_long_long_string_long_string_long_string_"
    "long_string_long_string_long_long_string_long_string_long_string_long_string_long_string_long_long_string_long_"
    "string_long_string_long_string_lo";
int32_t hapRet = 0;
int32_t nomalCode = 0;
int32_t waitTime3000Ms = 3000;
int32_t waitTime10s = 10;

static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED =
    "com.ohos.dpmsst.service.distributed.system.signed";
static const std::string SYSTEM_TEST_DISTRIBUTED_SYSTEM_SIGNED_ABILITY = "DpmsStServiceDistributedSystemSigned";
const std::string REQ_EVENT_NAME_SYSTEM_SIGNED = "req_com_ohos_dpmsst_service_distributed_system_signed";

static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A = "com.ohos.dpmsst.service.distributed.third.a";
static const std::string SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY = "DpmsStServiceDistributedThirdA";

const std::string REQ_EVENT_NAME_THIRD_A = "req_com_ohos_dpmsst_service_distributed_third_a";

const std::string SYSTEM_TEST_HAP_NAME_DISTRIBUTED_THIRD_A = "DpmsStServiceDistributedThirdA";
string deviceId_;
} // namespace
class DistributedRequestPermissionFromRemoteFunctionCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    static bool SubscribeEvent();
    bool CheckRequestPermissionsFromRemoteResult();
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };
    void SetUp()
    {
        auto timeFast = std::chrono::milliseconds(waitTime3000Ms);
        std::this_thread::sleep_for(timeFast);
    }
    void TearDown()
    {}

public:
    string GetAppIdInfo(int32_t pid, int32_t uid);
    void SetSystemBundlePermission();
    static std::vector<std::string> eventList_;
    static STtools::Event event_;
    static sptr<OHOS::AppExecFwk::IAppMgr> appMs_;
    static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_;
    static std::shared_ptr<AppEventSubscriber> subscriber_;
};
class TestCallback : public OnRequestPermissionsResultStub {
public:
    TestCallback() = default;
    virtual ~TestCallback() = default;
    int32_t result = -1;
    void OnResult(const std::string nodeId, std::vector<std::string> permissions, std::vector<int32_t> grantResults)
    {
        // Default only one permission, so only one grantResult
        if (grantResults[0] == Constant::PERMISSION_GRANTED) {
            result = 0;
        }
        PERMISSION_LOG_INFO(LABEL,
            "DistributedRequestPermissionFromRemoteFunctionCPPTest  TestCallback :OnResult  is run!!!");
    }
    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        PERMISSION_LOG_INFO(LABEL,
            "DistributedRequestPermissionFromRemoteFunctionCPPTest  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        PERMISSION_LOG_INFO(LABEL,
            "DistributedRequestPermissionFromRemoteFunctionCPPTest  TestCallback :OnTimeOut  is run!!! nodeId = "
            "%{public}s",
            nodeId.c_str());
    }
};
string DistributedRequestPermissionFromRemoteFunctionCPPTest::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}
std::vector<std::string> DistributedRequestPermissionFromRemoteFunctionCPPTest::eventList_ = {
    "resp_com_ohos_dpmsst_service_distributed_system_signed", "resp_com_ohos_dpmsst_service_distributed_third_a"};
STtools::Event DistributedRequestPermissionFromRemoteFunctionCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> DistributedRequestPermissionFromRemoteFunctionCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> DistributedRequestPermissionFromRemoteFunctionCPPTest::abilityMs_ = nullptr;
std::shared_ptr<DistributedRequestPermissionFromRemoteFunctionCPPTest::AppEventSubscriber>
    DistributedRequestPermissionFromRemoteFunctionCPPTest::subscriber_ = nullptr;
void DistributedRequestPermissionFromRemoteFunctionCPPTest::SetUpTestCase(void)
{
    system("hilog -r");
    SubscribeEvent();
    appMs_ = STAbilityUtil::GetAppMgrService();
    abilityMs_ = STAbilityUtil::GetAbilityManagerService();
    if (appMs_) {
        int32_t freezingTime = 60;
        appMs_->SetAppFreezingTime(freezingTime);
        int time = 0;
        appMs_->GetAppFreezingTime(time);
        std::cout << "appMs_->GetAppFreezingTime();" << time << std::endl;
    }
    GTEST_LOG_(INFO) << "getDeviceId start";
    auto list = DeviceInfoRepository::GetInstance().ListDeviceInfo();
    auto iter = list.begin();
    for (; iter != list.end(); iter++) {
        DeviceInfo info = (*iter);
        GTEST_LOG_(INFO) << " ListDeviceInfo  get";
    }
    std::vector<DmDeviceInfo> deviceList;
    std::string str = "com.ohos.distributedmusicplayer";
    STDistibutePermissionUtil::GetTrustedDeviceList(str, deviceList);
    deviceId_ = deviceList[0].deviceId;
}
void DistributedRequestPermissionFromRemoteFunctionCPPTest::TearDownTestCase(void)
{}
void DistributedRequestPermissionFromRemoteFunctionCPPTest::SetSystemBundlePermission()
{
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    int32_t labelIdInt = 9527;
    int32_t descriptionIdInt = 9528;
    OHOS::Security::Permission::PermissionDef permissionDef_Camera = {.permissionName = Constant::CAMERA,
        .bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED,
        .grantMode = 0,
        .availableScope = 1 << 0,
        .label = "test label",
        .labelId = labelIdInt,
        .description = "test description",
        .descriptionId = descriptionIdInt};
    permDefList.emplace_back(permissionDef_Camera);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<std::string> permList_user;
    permList_user.push_back(Constant::CAMERA);
    PermissionKit::AddUserGrantedReqPermissions(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED, Constant::CAMERA, 0);
}
bool DistributedRequestPermissionFromRemoteFunctionCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : DistributedRequestPermissionFromRemoteFunctionCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DistributedRequestPermissionFromRemoteFunctionCPPTest::AppEventSubscriber::OnReceiveEvent(
    const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();
    GTEST_LOG_(INFO) << "OnReceiveEvent: ret=" << data.GetWant().GetIntParam("ret", hapRet);
    GTEST_LOG_(INFO) << "OnReceiveEvent: hapRet=" << hapRet;
    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(DistributedRequestPermissionFromRemoteFunctionCPPTest::eventList_.begin(),
        DistributedRequestPermissionFromRemoteFunctionCPPTest::eventList_.end(), eventName);
    if (iter != DistributedRequestPermissionFromRemoteFunctionCPPTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

bool DistributedRequestPermissionFromRemoteFunctionCPPTest::CheckRequestPermissionsFromRemoteResult()
{
    PERMISSION_LOG_DEBUG(LABEL, "CheckRequestPermissionsFromRemoteResult called");
    static const int32_t cmd_result_buf_size = 1024;
    int sleep_time_milliseconds = 5000;
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_time_milliseconds));
    string cmd_1 = "hilog | grep \'RequestPermissionsFromRemote param callback is null\' > result.log";
    string cmd_2 = "grep -a \'RequestPermissionsFromRemote param callback is null\' result.log | tail -n 1";
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
    ptr = popen("rm result.log", "w");
    pclose(ptr);

    ptr = popen("ps -ef|grep \'RequestPermissionsFromRemote param callback is null\'|cut -c 14-18|xargs kill -9", "r");
    pclose(ptr);
    string sCmdResult = string(result);
    PERMISSION_LOG_DEBUG(LABEL, "CheckRequestPermissionsFromRemoteResult result_str:%{public}s ", sCmdResult.c_str());
    if (sCmdResult.length() > 0) {
        return true;
    } else {
        return false;
    }
}

/**
 * @tc.name      If the callback function is null, no result. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0200 start ";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    OHOS::sptr<TestCallback> callback = nullptr;
    string nodeId = deviceId_;
    string bundleName = "testBundle";
    int32_t reasonResId = 1;

    service->RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    bool result = CheckRequestPermissionsFromRemoteResult();
    EXPECT_TRUE(result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0200 end ";
}

/**
 * @tc.name       If the nodeId is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4"
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "";
    int32_t pid = 1;
    int32_t uid = 100001;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0100 end";
}
/**
 * @tc.name      If the nodeId length more than 64, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = long_string_65;
    int32_t pid = 1;
    int32_t uid = 100001;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0200 end";
}

/**
 * @tc.name      If the permissionName is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0300 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = "";
    string nodeId = deviceId_;
    int32_t pid = 1;
    int32_t uid = 100001;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0300 end";
}

/**
 * @tc.name      If the permissionName length more than 256, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0400 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = long_string_257;
    string nodeId = deviceId_;
    int32_t pid = 1;
    int32_t uid = 100001;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0400 end";
}

/**
 * @tc.name      If the permissionName is non-sensitive permission, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0500 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = "ohos.permission.GET_WIFI_INFO";
    string nodeId = deviceId_;
    int32_t pid = 1;
    int32_t uid = 100001;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0500 end";
}

/**
 * @tc.name      If the deviceId is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0600 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "nodeid";
    int32_t pid = 1;
    int32_t uid = 100001;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0600 end";
}

/**
 * @tc.name      If the deviceId length more than 64, verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    int32_t pid = 1;
    int32_t uid = 100001;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = long_string_65;
    DeviceInfoRepository::GetInstance().SaveDeviceInfo(nodeId, "universallyUniqueId", deviceId, "deviceName",
        "deviceType");

    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0700 end";
}

/**
 * @tc.name      If the uid is system signature id, verify result is 0. Has permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_1100, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1100 start";
    SetSystemBundlePermission();
    int32_t expectation = Constant::PERMISSION_GRANTED;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    string permission = Constant::CAMERA;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_SYSTEM_SIGNED_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_SYSTEM_SIGNED, 5, "VerifyPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_SYSTEM_SIGNED, 0, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1100 end";
}

/**
 * @tc.name      If the permissionName is other Sensitive permissions ,verify result is -1. No permission
 * @tc.number    DPMS_VerifyPermissionFromRemote_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_1200, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::READ_CALENDAR;
    string nodeId = deviceId_;
    int32_t pid = 1;
    int32_t uid = 10002;
    string appInfo = GetAppIdInfo(pid, uid);
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifyPermissionFromRemote(permission, nodeId, appInfo);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1200 end";
}

/**
 * @tc.name      If the permissionName is CAMERA and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifyPermissionFromRemote_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */

HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_1700, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1700 start";
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;

    int32_t expectation = Constant::PERMISSION_DENIED;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;
    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifyPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1700 end";
}

/**
 * @tc.name      If the permissionName is READ_HEALTH_DATA and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifyPermissionFromRemote_1800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_1800, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1800 start";
    string permission = Constant::READ_HEALTH_DATA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;

    int32_t expectation = Constant::PERMISSION_DENIED;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;
    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifyPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1800 end";
}

/**
 * @tc.name      If the permissionName is LOCATION and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifyPermissionFromRemote_1900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_1900, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1900 start";
    string permission = Constant::LOCATION;
    string nodeId = deviceId_;
    string deviceId = deviceId_;

    int32_t expectation = Constant::PERMISSION_DENIED;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;
    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifyPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_1900 end";
}

/**
 * @tc.name      If the permissionName is MICROPHONE and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifyPermissionFromRemote_2000
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifyPermissionFromRemote_2000, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_2000 start";
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;

    int32_t expectation = Constant::PERMISSION_DENIED;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;
    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifyPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_2000 end";
}

/**
 * @tc.name     If the self nodeId is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "";
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0100 end";
}

/**
 * @tc.name       If the self nodeId length more than 64, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0200,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = long_string_65;
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0200 end";
}

/**
 * @tc.name       If the self permissionName is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0300,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifyPermissionFromRemote_0300 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = "";
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0300 end";
}

/**
 * @tc.name      if  self permissionName length more than 256，return -1
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0400,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0400 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = long_string_257;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0400 end";
}

/**
 * @tc.name      If the self permissionName  is non-sensitive permission, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0500,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0500 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = "ohos.permission.GET_WIFI_INFO";
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;

    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);

    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0500 end";
}

/**
 * @tc.name       If the self deviceId is null, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0600,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0600 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "networkId";
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = "";
    DeviceInfoRepository::GetInstance().SaveDeviceInfo(nodeId, "universallyUniqueId", deviceId, "deviceName",
        "deviceType");

    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0600 end";
}

/**
 * @tc.name      If the self deviceId length more than 64, verify result is -1. No permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_0700,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "networkId";
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = long_string_65;
    DeviceInfoRepository::GetInstance().SaveDeviceInfo(nodeId, "universallyUniqueId", deviceId, "deviceName",
        "deviceType");

    int32_t result = service->VerifySelfPermissionFromRemote(permission, nodeId);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_0700 end";
}

/**
 * @tc.name      If the self uid is system signature id, verify result is 0. Has permission
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_1100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1100 start";
    SetSystemBundlePermission();
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_GRANTED;
    string deviceId = deviceId_;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_SYSTEM_SIGNED_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_SYSTEM_SIGNED, 6, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_SYSTEM_SIGNED, 0, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1100 end";
}

/**
 * @tc.name      If the self permissionName is other Sensitive permissions  , verify result is -1.
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_1200,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::READ_CALENDAR;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = deviceId_;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1200 end";
}

/**
 * @tc.name      If the self permissionName is CAMERA and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */

HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_1700,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = deviceId_;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1700 end";
}

/**
 * @tc.name     If the self permissionName is READ_HEALTH_DATA and was not authorized remote device, verify result is -1
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_1800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_1800,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1800 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::READ_HEALTH_DATA;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = deviceId_;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1800 end";
}

/**
 * @tc.name      If the self permissionName is LOCATION and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_1900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_1900,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1900 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::LOCATION;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = deviceId_;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_1900 end";
}

/**
 * @tc.name      If the self permissionName is MICROPHONE and was not authorized remote device, verify result is -1.
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_2000
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_VerifySelfPermissionFromRemote_2000,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_2000 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    string deviceId = deviceId_;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "VerifySelfPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_VerifySelfPermissionFromRemote_2000 end";
}

/**
 * @tc.name      If the  nodeId is null, result false. No permission
 * @tc.number    DPMS_CanRequestPermissionFromRemote_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_0100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "";
    bool expectation = false;

    bool result = service->CanRequestPermissionFromRemote(permission, nodeId);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0100 end";
}

/**
 * @tc.name       If the nodeId length more than 64, result false. No permission
 * @tc.number    DPMS_CanRequestPermissionFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_0200,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = long_string_65;
    bool expectation = false;

    bool result = service->CanRequestPermissionFromRemote(permission, nodeId);
    EXPECT_EQ(expectation, result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0200 end";
}

/**
 * @tc.name      If the permissionName is null, result false. No permission
 * @tc.number    DPMS_CanRequestPermissionFromRemote_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_0300,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0300 start";
    string permission = "";
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 0;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0300 end";
}

/**
 * @tc.name      If the permissionName length more than 256, result false. No permission
 * @tc.number    DPMS_CanRequestPermissionFromRemote_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_0400,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0400 start";
    string permission = long_string_257;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 0;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0400 end";
}

/**
 * @tc.name      If the uid is system signature id, result true. Has permission
 * @tc.number    DPMS_CanRequestPermissionFromRemote_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_0600,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0600 start";
    SetSystemBundlePermission();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    bool expectation = 1;
    string deviceId = deviceId_;

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_SYSTEM_SIGNED_ABILITY;

    MAP_STR_STR params;
    params["permission"] = permission;
    params["nodeId"] = nodeId;

    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_SYSTEM_SIGNED, nomalCode, "CanRequestPermissionFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_SYSTEM_SIGNED, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_0600 end";
}
/**
 * @tc.name      If the permissionName is other Sensitive permissions , result false.
 * @tc.number    DPMS_CanRequestPermissionFromRemote_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_1100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    string permission = Constant::READ_CALENDAR;

    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 0;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1100 end";
}

/**
 * @tc.name      If the permissionName is CAMERA and was not authorized remote device, result true.
 * @tc.number    DPMS_CanRequestPermissionFromRemote_1600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_1600,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1600 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    string permission = Constant::CAMERA;

    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1600 end";
}

/**
 * @tc.name     If the permissionName is READ_HEALTH_DATA and was not authorized remote device, result true.
 * @tc.number    DPMS_CanRequestPermissionFromRemote_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_1700,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    string permission = Constant::READ_HEALTH_DATA;

    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1700 end";
}

/**
 * @tc.name      If the permissionName is LOCATION and was not authorized remote device, result true.
 * @tc.number    DPMS_CanRequestPermissionFromRemote_1800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_1800,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1800 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    string permission = Constant::LOCATION;

    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1800 end";
}

/**
 * @tc.name      If the permissionName is MICROPHONE and was not authorized remote device, result true.
 * @tc.number    DPMS_CanRequestPermissionFromRemote_1900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_CanRequestPermissionFromRemote_1900,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1900 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    string permission = Constant::MICROPHONE;

    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "CanRequestPermissionFromRemote");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemote", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_CanRequestPermissionFromRemote_1900 end";
}

/**
 * @tc.name      If the nodeId is null, end of processing, do not authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = "";
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(nodeId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0100 end";
}

/**
 * @tc.name       If the nodeId length more than 65, end of processing, do not authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0200,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0200 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = long_string_65;
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(nodeId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0200 end";
}

/**
 * @tc.name      If the permissionName is other Sensitive permissions  t, end of processing, do not authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0500,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0500 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::READ_CALENDAR;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = Constant::PERMISSION_DENIED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0500 end";
}

/**
 * @tc.name       If the permissionName is CAMERA , can be able to delegate authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0600,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0600 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = Constant::PERMISSION_GRANTED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0600 end";
}

/**
 * @tc.name      If the permissionName is READ_HEALTH_DATA , can be able to delegate authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0700,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::READ_HEALTH_DATA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = Constant::PERMISSION_GRANTED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0700 end";
}

/**
 * @tc.name      If the permissionName is LOCATION , can be able to delegate authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0800
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0800,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0800 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::LOCATION;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = Constant::PERMISSION_GRANTED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0800 end";
}

/**
 * @tc.name       If the permissionName is MICROPHONE , can be able to delegate authorization
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_0900
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_0900,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0900 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = Constant::PERMISSION_GRANTED;
    int32_t uid = STDistibutePermissionUtil::GetUidByBundleName(SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A);
    service->GrantSensitivePermissionToRemoteApp(permission, nodeId, uid);
    int32_t duid = DistributedPermissionKit::AllocateDuid(deviceId, uid);
    int32_t RESULT = DistributedPermissionKit::CheckDPermission(duid, permission);
    EXPECT_EQ(RESULT, expectation);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_GrantSensitivePermissionToRemoteApp_0900 end";
}

/**
 * @tc.name      If the permissionName is null, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();

    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string nodeId = deviceId_;
    string bundleName = "testBundle";
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0100 end";
}

/**
 * @tc.name      If the nodeId is null, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0300 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    permissions.push_back(Constant::CAMERA);
    permissions.push_back(Constant::LOCATION);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string nodeId = "";
    string bundleName = "testBundle";
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0300 end";
}

/**
 * @tc.name      If the nodeId length more than 64, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0400
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0400 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    permissions.push_back(Constant::CAMERA);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string nodeId = long_string_65;
    string bundleName = "testBundle";
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0400 end";
}

/**
 * @tc.name      If the permissionName is non-sensitive permission, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0500
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0500 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    permissions.push_back("ohos.permission.GET_WIFI_INFO");
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string nodeId = deviceId_;
    string bundleName = "testBundle";
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, nodeId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0500 end";
}

/**
 * @tc.name      If the deviceId is null, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0600
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0600 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    permissions.push_back(Constant::CAMERA);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string bundleName = "testBundle";
    string deviceId = "";
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, deviceId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0600 end";
}

/**
 * @tc.name     If the deviceId length more than 64, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_0700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0700 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    auto timeFast = std::chrono::milliseconds(200);
    std::vector<std::string> permissions;
    permissions.push_back(Constant::CAMERA);
    OHOS::sptr<TestCallback> callback(new TestCallback());
    string bundleName = "testBundle";
    string deviceId = long_string_65;
    int32_t reasonResId = 1;
    int32_t expectation = -1;

    service->RequestPermissionsFromRemote(permissions, callback, deviceId, bundleName, reasonResId);
    std::this_thread::sleep_for(timeFast);

    PERMISSION_LOG_INFO(LABEL, "onResult_ : %{public}d,", callback->result);
    EXPECT_EQ(expectation, callback->result);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_0700 end";
}

/**
 * @tc.name       If the uid system signature, result 0.
 * @tc.number    DPMS_RequestPermissionsFromRemote_1100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_1100, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1100 start";
    SetSystemBundlePermission();
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 0;
    string reasonResId = "1";
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_SYSTEM_SIGNED;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_SYSTEM_SIGNED_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    params["reasonResId"] = reasonResId;

    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_SYSTEM_SIGNED, nomalCode, "RequestPermissionsFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "RequestPermissionsFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_SYSTEM_SIGNED, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1100 end";
}

/**
 * @tc.name      If the bundleName is null, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_1200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_1200, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1200 start";
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = -1;
    string reasonResId = "1";
    MAP_STR_STR params;
    params["bundleName"] = "";
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    params["reasonResId"] = reasonResId;

    Want want = STAbilityUtil::MakeWant(deviceId, SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY,
        SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "RequestPermissionsFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "RequestPermissionsFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1200 end";
}

/**
 * @tc.name     If the reasonResId less than 0, result -1. Request failure
 * @tc.number    DPMS_RequestPermissionsFromRemote_1300
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 4
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_1300, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1300 start";
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = -1;
    string reasonResId = "-1";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    params["reasonResId"] = reasonResId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "RequestPermissionsFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "RequestPermissionsFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1300 end";
}
/**
 * @tc.name       If the permissionName is other  Sensitive permissions E, Request failure return: -1.
 * @tc.number    DPMS_RequestPermissionsFromRemote_1700
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 2
 */
HWTEST_F(DistributedRequestPermissionFromRemoteFunctionCPPTest, DPMS_RequestPermissionsFromRemote_1700, TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1700 start";
    string permission = Constant::READ_CALENDAR;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = -1;
    string reasonResId = "1";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_A;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_A_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    params["reasonResId"] = reasonResId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE,
                  waitTime10s),
        0);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_A, nomalCode, "RequestPermissionsFromRemote");

    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "RequestPermissionsFromRemote", expectation, waitTime10s), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_A, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteFunctionCPPTest DPMS_RequestPermissionsFromRemote_1700 end";
}
} // namespace Permission
} // namespace Security
} // namespace OHOS