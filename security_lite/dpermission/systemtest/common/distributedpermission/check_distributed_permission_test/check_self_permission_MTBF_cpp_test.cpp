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
int32_t stressTimes = 60 * 61 * 6;
const std::string PERMISSION_WIFI = "ohos.permission.GET_WIFI_INFO";
const std::string PERMISSION_NETWORK = "ohos.permission.GET_NETWORK_INFO";
const int32_t LABEL_ID = 9527;
const int32_t DESCRIPTION_ID = 9528;
const string PERMISSION_LABEL = "test Label";
const string DESCRIPTION = "test description";
static const std::string HAP_NAME = "checkSelfPermissionStressTest";
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS =
    "com.third.dpmsStressTestcheckSelfPermission";
static const std::string SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY = "DpmsStressTestAbility";
const std::string REQ_EVENT_NAME_THIRD_STRESS = "req_com_ohos_check_self_permission_app_a1";
}  // namespace
class CheckSelfPermissionMTBFCppTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    static bool SubscribeEvent();
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp){};
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
    static std::vector<std::string> eventList_;
    static STtools::Event event_;
    static sptr<OHOS::AppExecFwk::IAppMgr> appMs_;
    static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_;
    static std::shared_ptr<AppEventSubscriber> subscriber_;
};
std::vector<std::string> CheckSelfPermissionMTBFCppTest::eventList_ = {"resp_com_ohos_check_self_permission_app_a1"};
STtools::Event CheckSelfPermissionMTBFCppTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> CheckSelfPermissionMTBFCppTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> CheckSelfPermissionMTBFCppTest::abilityMs_ = nullptr;
std::shared_ptr<CheckSelfPermissionMTBFCppTest::AppEventSubscriber> CheckSelfPermissionMTBFCppTest::subscriber_ =
    nullptr;
void CheckSelfPermissionMTBFCppTest::SetUpTestCase(void)
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
}
void CheckSelfPermissionMTBFCppTest::TearDownTestCase(void)
{}
bool CheckSelfPermissionMTBFCppTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : CheckSelfPermissionMTBFCppTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void CheckSelfPermissionMTBFCppTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();
    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(CheckSelfPermissionMTBFCppTest::eventList_.begin(),
        CheckSelfPermissionMTBFCppTest::eventList_.end(),
        eventName);
    if (iter != CheckSelfPermissionMTBFCppTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

/**
 * @tc.name      Interface sequential pressure measurement
 * @tc.number    DPMS_DistributedRequestPermissionFromRemote_0100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckSelfPermissionMTBFCppTest, DPMS_CheckDistributedPermissionMTBFTest_0200, TestSize.Level1)
{
    std::string hapName = HAP_NAME;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS;
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
    GTEST_LOG_(INFO) << "CheckSelfPermissionMTBFCppTest DPMS_CheckDistributedPermissionMTBFTest_0200 start";
    MAP_STR_STR params;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "DPMS_CheckDistributedPermissionMTBFTest_0200");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_CheckDistributedPermissionMTBFTest_0200", 0, stressTimes), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckSelfPermissionMTBFCppTest DPMS_CheckDistributedPermissionMTBFTest_0200 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}

/**
 * @tc.name      Interface sequential pressure measurement
 * @tc.number    DPMS_DistributedRequestPermissionFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(CheckSelfPermissionMTBFCppTest, DPMS_CheckDistributedPermissionMTBFTest_0400, TestSize.Level1)
{
    std::string hapName = HAP_NAME;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS;
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
    GTEST_LOG_(INFO) << "CheckSelfPermissionMTBFCppTest DPMS_CheckDistributedPermissionMTBFTest_0400 start";
    MAP_STR_STR params;
    Want want = STAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "DPMS_CheckDistributedPermissionMTBFTest_0400");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_CheckDistributedPermissionMTBFTest_0400", 0, stressTimes), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "CheckSelfPermissionMTBFCppTest DPMS_CheckDistributedPermissionMTBFTest_0400 end";
    PermissionKit::RemoveDefPermissions(bundleName);
    STDistibutePermissionUtil::Uninstall(bundleName);
}
}  // namespace Permission
}  // namespace Security
}  // namespace OHOS
