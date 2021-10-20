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
#include "module_test_dump_util.h"
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
int32_t stressTimes = 60 * 11;
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS =
    "com.ohos.dpmsst.service.distributed.third.stress";
static const std::string SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY = "DpmsStServiceDistributedThirdStressTest";
const std::string REQ_EVENT_NAME_THIRD_STRESS = "req_com_ohos_dpmsst_service_distributed_third_stress";
string deviceId_;
} // namespace
class DistributedRequestPermissionFromRemoteMTBFCPPTest : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
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
string DistributedRequestPermissionFromRemoteMTBFCPPTest::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}
std::vector<std::string> DistributedRequestPermissionFromRemoteMTBFCPPTest::eventList_ = {
    "resp_com_ohos_dpmsst_service_distributed_third_stress"};
STtools::Event DistributedRequestPermissionFromRemoteMTBFCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> DistributedRequestPermissionFromRemoteMTBFCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> DistributedRequestPermissionFromRemoteMTBFCPPTest::abilityMs_ = nullptr;
std::shared_ptr<DistributedRequestPermissionFromRemoteMTBFCPPTest::AppEventSubscriber>
    DistributedRequestPermissionFromRemoteMTBFCPPTest::subscriber_ = nullptr;
void DistributedRequestPermissionFromRemoteMTBFCPPTest::SetUpTestCase(void)
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
void DistributedRequestPermissionFromRemoteMTBFCPPTest::TearDownTestCase(void)
{}
bool DistributedRequestPermissionFromRemoteMTBFCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : DistributedRequestPermissionFromRemoteMTBFCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DistributedRequestPermissionFromRemoteMTBFCPPTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    int32_t avgFlag = -1;
    if (data.GetWant().GetIntParam("avgFlag", avgFlag == 0)) {
        double avgTime = 0.0;
        GTEST_LOG_(INFO) << "OnReceiveEvent: avg = " << data.GetWant().GetDoubleParam("avgTime", avgTime) << "(ms)";
    }
    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(DistributedRequestPermissionFromRemoteMTBFCPPTest::eventList_.begin(),
        DistributedRequestPermissionFromRemoteMTBFCPPTest::eventList_.end(), eventName);
    if (iter != DistributedRequestPermissionFromRemoteMTBFCPPTest::eventList_.end()) {
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
HWTEST_F(DistributedRequestPermissionFromRemoteMTBFCPPTest, DPMS_DistributedRequestPermissionFromRemote_0100,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteMTBFCPPTest DPMS_DistributedRequestPermissionFromRemote_0100 start";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY;
    MAP_STR_STR params;

    Want want = STAbilityUtil::MakeWant(deviceId_, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_STRESS, nomalCode,
        "DPMS_DistributedRequestPermissionFromRemote_0100");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_DistributedRequestPermissionFromRemote_0100", 0, stressTimes),
        0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteMTBFCPPTest DPMS_DistributedRequestPermissionFromRemote_0100 end";
}

/**
 * @tc.name      Interface sequential pressure measurement
 * @tc.number    DPMS_DistributedRequestPermissionFromRemote_0200
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemoteMTBFCPPTest, DPMS_DistributedRequestPermissionFromRemote_0200,
    TestSize.Level1)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteMTBFCPPTest DPMS_DistributedRequestPermissionFromRemote_0200 start";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_STRESS;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_STRESS_ABILITY;
    MAP_STR_STR params;

    Want want = STAbilityUtil::MakeWant(deviceId_, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_STRESS, nomalCode,
        "DPMS_DistributedRequestPermissionFromRemote_0200");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "DPMS_DistributedRequestPermissionFromRemote_0200", 0, stressTimes),
        0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_STRESS, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemoteMTBFCPPTest DPMS_DistributedRequestPermissionFromRemote_0200 end";
}

} // namespace Permission
} // namespace Security
} // namespace OHOS