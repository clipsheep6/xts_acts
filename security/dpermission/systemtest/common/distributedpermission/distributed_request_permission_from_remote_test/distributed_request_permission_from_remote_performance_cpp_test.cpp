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
int32_t nomalCode = 0;
int32_t waitTime3000Ms = 3000;
int32_t waitTime10s = 10;
static const std::string SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_F = "com.ohos.dpmsst.service.distributed.third.f";
static const std::string SYSTEM_TEST_DISTRIBUTED_THIRD_F_ABILITY = "DpmsStServiceDistributedThirdF";
const std::string REQ_EVENT_NAME_THIRD_F = "req_com_ohos_dpmsst_service_distributed_third_f";
string deviceId_;
} // namespace
class DistributedRequestPermissionFromRemotePerformanceCPPTest : public testing::Test {
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
            "DistributedRequestPermissionFromRemotePerformanceCPPTest  TestCallback :OnResult  is run!!!");
    }
    void OnCancel(const std::string nodeId, std::vector<std::string> permissions)
    {
        PERMISSION_LOG_INFO(LABEL,
            "DistributedRequestPermissionFromRemotePerformanceCPPTest  TestCallback :OnCancel  is run!!!");
    }
    void OnTimeOut(const std::string nodeId, std::vector<std::string> permissions)
    {
        PERMISSION_LOG_INFO(LABEL,
            "DistributedRequestPermissionFromRemotePerformanceCPPTest  TestCallback :OnTimeOut  is run!!! nodeId = "
            "%{public}s",
            nodeId.c_str());
    }
};
string DistributedRequestPermissionFromRemotePerformanceCPPTest::GetAppIdInfo(int32_t pid, int32_t uid)
{
    return DistributedPermissionKit::AppIdInfoHelper::CreateAppIdInfo(pid, uid);
}
std::vector<std::string> DistributedRequestPermissionFromRemotePerformanceCPPTest::eventList_ = {
    "resp_com_ohos_dpmsst_service_distributed_third_f"};
STtools::Event DistributedRequestPermissionFromRemotePerformanceCPPTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> DistributedRequestPermissionFromRemotePerformanceCPPTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> DistributedRequestPermissionFromRemotePerformanceCPPTest::abilityMs_ = nullptr;
std::shared_ptr<DistributedRequestPermissionFromRemotePerformanceCPPTest::AppEventSubscriber>
    DistributedRequestPermissionFromRemotePerformanceCPPTest::subscriber_ = nullptr;
void DistributedRequestPermissionFromRemotePerformanceCPPTest::SetUpTestCase(void)
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
void DistributedRequestPermissionFromRemotePerformanceCPPTest::TearDownTestCase(void)
{}
bool DistributedRequestPermissionFromRemotePerformanceCPPTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : DistributedRequestPermissionFromRemotePerformanceCPPTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void DistributedRequestPermissionFromRemotePerformanceCPPTest::AppEventSubscriber::OnReceiveEvent(
    const CommonEventData &data)
{
    if (data.GetData() == "VerifyPermissionFromRemotePerformance" ||
        data.GetData() == "VerifySelfPermissionFromRemotePerformance" ||
        data.GetData() == "CanRequestPermissionFromRemotePerformance" ||
        data.GetData() == "RequestPermissionsFromRemotePerformance") {
        double avgTime = 0;
        GTEST_LOG_(INFO) << "OnReceiveEvent: avg = " << data.GetWant().GetDoubleParam("avgTime", avgTime) << "(ms)";
    }

    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(DistributedRequestPermissionFromRemotePerformanceCPPTest::eventList_.begin(),
        DistributedRequestPermissionFromRemotePerformanceCPPTest::eventList_.end(), eventName);
    if (iter != DistributedRequestPermissionFromRemotePerformanceCPPTest::eventList_.end()) {
        STAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

/**
 * @tc.name      Function performance test. Execution time less than 1.5ms
 * @tc.number    DPMS_VerifyPermissionFromRemote_2100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePerformanceCPPTest, DPMS_VerifyPermissionFromRemote_2100,
    TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_VerifyPermissionFromRemote_2100 start";

    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_F;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_F_ABILITY;
    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_F, nomalCode, "VerifyPermissionFromRemotePerformance");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "VerifyPermissionFromRemotePerformance", expectation, waitTime10s),
        0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_F, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_VerifyPermissionFromRemote_2100 end";
}

/**
 * @tc.name      Function performance test. Execution time less than 1.5ms
 * @tc.number    DPMS_VerifySelfPermissionFromRemote_2100
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePerformanceCPPTest, DPMS_VerifySelfPermissionFromRemote_2100,
    TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_VerifySelfPermissionFromRemote_2100 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_F;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_F_ABILITY;
    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_F, nomalCode, "VerifySelfPermissionFromRemotePerformance");
    EXPECT_EQ(
        STAbilityUtil::WaitCompleted(event_, "VerifySelfPermissionFromRemotePerformance", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_F, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_VerifySelfPermissionFromRemote_2100 end";
}

/**
 * @tc.name      Function performance test. Execution time less than 1.5ms
 * @tc.number    DPMS_CanRequestPermissionFromRemote_2000
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePerformanceCPPTest, DPMS_CanRequestPermissionFromRemote_2000,
    TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_CanRequestPermissionFromRemote_2000 start";
    std::unique_ptr<DistributedPermissionKit> service = std::make_unique<DistributedPermissionKit>();
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_F;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_F_ABILITY;
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
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_F, nomalCode, "CanRequestPermissionFromRemotePerformance");
    EXPECT_EQ(
        STAbilityUtil::WaitCompleted(event_, "CanRequestPermissionFromRemotePerformance", expectation, waitTime10s), 0);
    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_F, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_CanRequestPermissionFromRemote_2000 end";
}
/**
 * @tc.name      Function performance test. Execution time less than 1.5ms
 * @tc.number    DPMS_RequestPermissionsFromRemote_2600
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePerformanceCPPTest, DPMS_RequestPermissionsFromRemote_2600,
    TestSize.Level3)
{
    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_RequestPermissionsFromRemote_2600 start";
    string permission = Constant::MICROPHONE;
    string nodeId = deviceId_;
    string deviceId = deviceId_;
    int32_t expectation = 1;
    string reasonResId = "1";

    std::string bundleName = SYSTEM_TEST_BUNDLE_NAME_DISTRIBUTED_THIRD_F;
    std::string abilityName = SYSTEM_TEST_DISTRIBUTED_THIRD_F_ABILITY;

    MAP_STR_STR params;
    params["bundleName"] = bundleName;
    params["permission"] = permission;
    params["nodeId"] = nodeId;
    params["reasonResId"] = reasonResId;

    Want want = STAbilityUtil::MakeWant(deviceId, abilityName, bundleName, params);
    ErrCode eCode = STAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    EXPECT_EQ(ERR_OK, eCode);

    STAbilityUtil::WaitCompleted(event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);
    STAbilityUtil::PublishEvent(REQ_EVENT_NAME_THIRD_F, nomalCode, "RequestPermissionsFromRemotePerformance");
    EXPECT_EQ(STAbilityUtil::WaitCompleted(event_, "RequestPermissionsFromRemotePerformance", expectation, waitTime10s),
        0);

    bool ret = STAbilityUtil::StopAbility(REQ_EVENT_NAME_THIRD_F, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO)
        << "DistributedRequestPermissionFromRemotePerformanceCPPTest DPMS_RequestPermissionsFromRemote_2600 end";
}
/**
 * @tc.name      Function performance test. Execution time less than 1.5ms
 * @tc.number    DPMS_GrantSensitivePermissionToRemoteApp_1200
 * @tc.size      MEDIUM
 * @tc.type      Performance
 * @tc.level     Level 3
 */
HWTEST_F(DistributedRequestPermissionFromRemotePerformanceCPPTest, DPMS_GrantSensitivePermissionToRemoteApp_1200,
    TestSize.Level3)
{
    GTEST_LOG_(INFO) << "DistributedRequestPermissionFromRemotePerformanceCPPTest "
                        "DPMS_GrantSensitivePermissionToRemoteApp_1200 start";
    string permission = Constant::CAMERA;
    string nodeId = deviceId_;
    int32_t ruid = 102345;
    double timeCounts = 0.0;
    int32_t testCount = 1000;
    for (int32_t i = 0; i < testCount; i++) {
        auto startTime = std::chrono::high_resolution_clock::now();
        DistributedPermissionKit::GrantSensitivePermissionToRemoteApp(permission, nodeId, ruid);
        auto endTime = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> fp_ms = endTime - startTime;
        double timeCount = fp_ms.count();
        timeCounts += timeCount;
    }
    double timeAvg = timeCounts / testCount;
    EXPECT_LT(timeAvg, STDistibutePermissionUtil::MAX_ELAPSED);
    GTEST_LOG_(INFO) << "GrantSensitivePermissionToRemoteAppPerformance untime fp_ms avg = , " << timeAvg << "(ms)";
    GTEST_LOG_(INFO) << "DPMS_GrantSensitivePermissionToRemoteApp_1200 end";
}
} // namespace Permission
} // namespace Security
} // namespace OHOS