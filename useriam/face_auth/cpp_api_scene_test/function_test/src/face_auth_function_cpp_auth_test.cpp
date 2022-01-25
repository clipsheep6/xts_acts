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

#include "face_auth_function_cpp_auth_test.h"
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
namespace {
const auto timeFast = std::chrono::milliseconds(1000);
static STtools::Event event_ = STtools::Event();
static sptr<OHOS::AAFwk::IAbilityManager> abilityMs_ = nullptr;
static std::vector<string> eventList_ = {"resp_com_ohos_face_auth_test_app_auth",
    "resp_com_ohos_face_auth_test_app_second_auth",
    "resp_com_ohos_face_auth_test_app_without_permission"};
const string BUNDLE_NAME_A = "com.ohos.faceauth.service.appAuth";
const string BUNDLE_NAME_B = "com.ohos.faceauth.service.appSecondAuth";
const string APP_A_HAP_NAME = "FaceAuthTestServiceAbilityAuth";
const string APP_B_HAP_NAME = "FaceAuthTestServiceAbilitySecondAuth";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
const string test_label_ = "test label";
const string test_description_ = "test description";
const string PERMISSION_FACEAUTH = "ohos.permission.ACCESS_BIOMETRIC";
}  // namespace

static std::shared_ptr<FaceAuthFunctionCppAuthTest::AppEventSubscriber> subscriber_ = nullptr;
// Register listening events and listen for messages sent by C + + app.
bool FaceAuthFunctionCppAuthTest::SubscribeEvent()
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
void FaceAuthFunctionCppAuthTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
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

void FaceAuthFunctionCppAuthTest::SetUpTestCase(void)
{
    SubscribeEvent();
    FaceAuthInnerKit::Release();
    system("chmod 777 /data");
    system("rm -rf /data/config.dat");
    SystemTestAbilityUtil::InstallApp(APP_A_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_B_HAP_NAME);
    FaceAuthInnerKit::ResetTimeout();
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_A = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = BUNDLE_NAME_A,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_B = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = BUNDLE_NAME_B,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_A);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_B);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_A, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_B, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_A, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_B, PERMISSION_FACEAUTH, 0);
}

void FaceAuthFunctionCppAuthTest::TearDownTestCase()
{
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_A);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_B);
}

void FaceAuthFunctionCppAuthTest::StartAppA(MAP_STR_STR &params, string &method)
{
    Want want = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_AUTH, BUNDLE_NAME_A, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, method);
}

void FaceAuthFunctionCppAuthTest::StopAppA()
{
    SystemTestAbilityUtil::StopAbility(APP_AUTH_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);
    std::this_thread::sleep_for(timeFast);
}

/**
 * @tc.number: CPPAPI_Function_Release_0300
 * @tc.name:: Two applications call init and then call release one by one.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Release_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0300 start";
    MAP_STR_STR params;
    Want wantAuth = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_AUTH, BUNDLE_NAME_A, params);
    SystemTestAbilityUtil::StartAbility(wantAuth, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);
    AuthenticateForCPPAPI_005();
    InitForCPPAPI_005();
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Authenticate");
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, "FaceAuth_Authenticate", ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    Want wantSecondAuth = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_SECOND_AUTH, BUNDLE_NAME_B, params);
    SystemTestAbilityUtil::StartAbility(wantSecondAuth, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);

    SystemTestAbilityUtil::PublishEvent(
        APP_SECOND_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Release");
    result = SystemTestAbilityUtil::WaitCompleted(event_, "FaceAuth_Release", -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    SystemTestAbilityUtil::PublishEvent(
        APP_SECOND_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Authenticate");
    result =
        SystemTestAbilityUtil::WaitCompleted(event_, "FaceAuth_Authenticate", ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Release");
    result = SystemTestAbilityUtil::WaitCompleted(event_, "FaceAuth_Release", 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    SystemTestAbilityUtil::PublishEvent(
        APP_SECOND_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Authenticate");
    result = SystemTestAbilityUtil::WaitCompleted(
        event_, "FaceAuth_Authenticate", ERRCODE_ALGORITHM_NOT_INIT, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    StopAbilityForCPPAPI_005();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0300 end";
}

void FaceAuthFunctionCppAuthTest::InitForCPPAPI_005()
{
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Init");
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, "FaceAuth_Init", 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    return;
}

void FaceAuthFunctionCppAuthTest::AuthenticateForCPPAPI_005()
{
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, "FaceAuth_Authenticate");
    int32_t result = SystemTestAbilityUtil::WaitCompleted(
        event_, "FaceAuth_Authenticate", ERRCODE_ALGORITHM_NOT_INIT, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    return;
}

void FaceAuthFunctionCppAuthTest::StopAbilityForCPPAPI_005()
{
    SystemTestAbilityUtil::StopAbility(APP_AUTH_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);

    SystemTestAbilityUtil::StopAbility(APP_SECOND_AUTH_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);
    std::this_thread::sleep_for(timeFast);
    return;
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS
