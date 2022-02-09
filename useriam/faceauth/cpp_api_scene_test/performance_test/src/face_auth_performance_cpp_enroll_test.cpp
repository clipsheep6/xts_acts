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

#include "face_auth_performance_cpp_enroll_test.h"
#include "permission/permission_kit.h"
#include "module_test_dump_util.h"
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::AppExecFwk;
using namespace OHOS::MTUtil;
using namespace OHOS::STtools;
using namespace OHOS::STABUtil;
using namespace OHOS::EventFwk;

using namespace std;
using namespace testing::ext;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
static std::shared_ptr<FaceAuthPerformanceCppEnrollTest::AppEventSubscriber> subscriber_ = nullptr;
static OHOS::sptr<OHOS::AAFwk::IAbilityManager> abilityMs_ = nullptr;
static STtools::Event event_ = STtools::Event();
static std::vector<std::string> eventList_ = {"resp_com_ohos_face_auth_test_app_enroll"};
static const std::string test_label_ = "test label";
static const std::string test_description_ = "test description";
static const std::string PERMISSION_FACEAUTH = "ohos.permission.ENROLL_BIOMETRIC";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const std::string bundleNameF = "com.ohos.faceauth.service.appEnroll";
static const string APP_F_HAP_NAME = "FaceAuthTestServiceAbilityEnroll";

// Register listening events and listen for messages sent by C + + app.
bool FaceAuthPerformanceCppEnrollTest::SubscribeEvent()
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
void FaceAuthPerformanceCppEnrollTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();

    auto eventName = data.GetWant().GetAction();
    auto iter = std::find(eventList_.begin(), eventList_.end(), eventName);
    if (iter != eventList_.end()) {
        SystemTestAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

void FaceAuthPerformanceCppEnrollTest::SetUpTestCase(void)
{
    SubscribeEvent();
    SystemTestAbilityUtil::InstallApp(APP_F_HAP_NAME);
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_F = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = bundleNameF,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    permDefList.emplace_back(permissionDef_FaceAuth_bundle_F);
    PermissionKit::AddDefPermissions(permDefList);

    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(bundleNameF, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleNameF, PERMISSION_FACEAUTH, 0);
}

void FaceAuthPerformanceCppEnrollTest::TearDownTestCase()
{
    SystemTestAbilityUtil::UninstallApp(bundleNameF);
}

/**
 * @tc.number: CPPAPI_Performance_Enroll_0100
 * @tc.name:: Performance of Enroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_Enroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_Enroll_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_Enroll_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_Enroll_0100", 0, wait_ability_timeout), 0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_Enroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_CancelEnroll_0100
 * @tc.name:: Performance of CancelEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_CancelEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_CancelEnroll_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_CancelEnroll_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_CancelEnroll_0100", 0, wait_ability_timeout),
        0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_CancelEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_PreEnroll_0100
 * @tc.name:: Performance of PreEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_PreEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_PreEnroll_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_PreEnroll_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_PreEnroll_0100", 0, wait_ability_timeout), 0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_PreEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_PostEnroll_0100
 * @tc.name:: Performance of PostEnroll interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_PostEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_PostEnroll_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_PostEnroll_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_PostEnroll_0100", 0, wait_ability_timeout), 0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_PostEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetAngleDim_0100
 * @tc.name:: Performance of GetAngleDim interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_GetAngleDim_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_GetAngleDim_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_GetAngleDim_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_GetAngleDim_0100", 0, wait_ability_timeout),
        0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_GetAngleDim_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_GetEnrolledFaceIDs_0100
 * @tc.name:: Performance of GetEnrolledFaceIDs interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_GetEnrolledFaceIDs_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_GetEnrolledFaceIDs_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_GetEnrolledFaceIDs_0100");

    EXPECT_EQ(SystemTestAbilityUtil::WaitCompleted(
                  event_, "CPPAPI_Performance_GetEnrolledFaceIDs_0100", 0, wait_ability_timeout_ten_second),
        0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_GetEnrolledFaceIDs_0100 end";
}

/**
 * @tc.number: CPPAPI_Performance_Remove_0100
 * @tc.name:: Performance of Remove interface
 * @tc.type: PERF
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthPerformanceCppEnrollTest, CPPAPI_Performance_Remove_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_Remove_0100 start";
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityNameF, bundleNameF, params);

    // start ability
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, wait_start_ability_timeout_ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, wait_ability_timeout);

    SystemTestAbilityUtil::PublishEvent(APP_ENROLL_REQ_EVENT_NAME,
        AbilityLifecycleExecutor::LifecycleState::INACTIVE,
        "CPPAPI_Performance_Remove_0100");

    EXPECT_EQ(
        SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Performance_Remove_0100", 0, wait_ability_timeout), 0);

    // stop ability
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, wait_ability_timeout);

    GTEST_LOG_(INFO) << "FaceAuthPerformanceCppEnrollTest CPPAPI_Performance_Remove_0100 end";
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS