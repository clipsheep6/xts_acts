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
namespace {
int32_t nomalCode = 0;
int32_t waitTime3000Ms = 3000;
int32_t waitTime10s = 10;
int32_t stressTimes = 60 * 60 * 6.1;
static const int32_t device_uuid_length = 65;
string test_lable_ = "test lable";
string test_description_ = "test description";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const std::string SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS =
    "com.ohos.dpmsst.service.permission.remind.stress";
static const std::string SYSTEM_TEST_PERMISSION_REMIND_STRESS_ABILITY =
    "DpmsSystemTestServicePermissionRemindStressTest";
const std::string REQ_EVENT_NAME_REMIND_STRESS = "req_com_ohos_dpmsst_service_permission_remind_stress";
static const string PERMISSION_CAMERA = "ohos.permission.CAMERA";
} // namespace
class DistributedPermissionRemindMTBFCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void)
    {}
    static bool SubscribeEvent();
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
    static std::vector<std::string> eventList_;
    static STtools::Event event_;
    static sptr<OHOS::AppExecFwk::IAppMgr> appMs_;
    static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_;
    static std::shared_ptr<AppEventSubscriber> subscriber_;
};
string DistributedPermissionRemindMTBFCPPTest::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}
std::vector<std::string> DistributedPermissionRemindMTBFCPPTest::eventList_ = {
    "resp_com_ohos_dpmsst_service_permission_remind_stress"};
STtools::Event DistributedPermissionRemindMTBFCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> DistributedPermissionRemindMTBFCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> DistributedPermissionRemindMTBFCPPTest::abilityMs_ = nullptr;
std::shared_ptr<DistributedPermissionRemindMTBFCPPTest::AppEventSubscriber>
    DistributedPermissionRemindMTBFCPPTest::subscriber_ = nullptr;
void DistributedPermissionRemindMTBFCPPTest::SetUpTestCase(void)
{
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

    STDistibutePermissionUtil::Install(SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS);

    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_Camera = {.permissionName = PERMISSION_CAMERA,
        .bundleName = SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_lable_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    permDefList.emplace_back(permissionDef_Camera);
    PermissionKit::AddDefPermissions(permDefList);

    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_CAMERA);
    PermissionKit::AddUserGrantedReqPermissions(SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS, PERMISSION_CAMERA, 0);
}

bool DistributedPermissionRemindMTBFCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : DistributedPermissionRemindMTBFCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DistributedPermissionRemindMTBFCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(DistributedPermissionRemindMTBFCPPTest::eventList_.begin(),
        DistributedPermissionRemindMTBFCPPTest::eventList_.end(), eventName);
    if (iter != DistributedPermissionRemindMTBFCPPTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

/**
 * @tc.name      DistributedRequestPermissionFromRemote Interface sequential pressure measurement
 * @tc.number    DPMS_DistributedPermissionRemind_0100
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindMTBFCPPTest, DPMS_DistributedPermissionRemind_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindMTBFCPPTest DPMS_DistributedPermissionRemind_0100 start";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS;
    std::string abilityName = SYSTEM_TEST_PERMISSION_REMIND_STRESS_ABILITY;
    MAP_STR_STR params;
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_REMIND_STRESS, nomalCode, "DPMS_DistributedPermissionRemind_0100");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_DistributedPermissionRemind_0100", 0, stressTimes), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_REMIND_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindMTBFCPPTest DPMS_DistributedPermissionRemind_0100 end";
}

/**
 * @tc.name      DistributedRequestPermissionFromRemote Interface out of sequence voltage measurement
 * @tc.number    DPMS_DistributedPermissionRemind_0200
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(DistributedPermissionRemindMTBFCPPTest, DPMS_DistributedPermissionRemind_0200, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedPermissionRemindMTBFCPPTest DPMS_DistributedPermissionRemind_0200 start";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_PERMISSION_REMIND_STRESS;
    std::string abilityName = SYSTEM_TEST_PERMISSION_REMIND_STRESS_ABILITY;
    MAP_STR_STR params;
    char deviceId[device_uuid_length] = {0};
    GetDevUdid(deviceId, device_uuid_length);
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_REMIND_STRESS, nomalCode, "DPMS_DistributedPermissionRemind_0200");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_DistributedPermissionRemind_0200", 0, stressTimes), 0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_REMIND_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO) << "DistributedPermissionRemindMTBFCPPTest DPMS_DistributedPermissionRemind_0200 end";
}

} // namespace Permission
} // namespace Security
} // namespace OHOS