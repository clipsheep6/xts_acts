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

#include "face_auth_function_cpp_scenario_test.h"
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
static std::vector<string> eventList_ = {"resp_com_ohos_face_auth_test_app_enroll",
    "resp_com_ohos_face_auth_test_app_auth",
    "resp_com_ohos_face_auth_test_app_second_auth",
    "resp_com_ohos_face_auth_test_app_without_permission"};
const string BUNDLE_NAME_A = "com.ohos.faceauth.service.appAuth";
const string BUNDLE_NAME_F = "com.ohos.faceauth.service.appEnroll";
const string BUNDLE_NAME_B = "com.ohos.faceauth.service.appSecondAuth";
const string BUNDLE_NAME_C = "com.ohos.faceauth.service.appWithout_Permission";
const string APP_A_HAP_NAME = "FaceAuthTestServiceAbilityAuth";
const string APP_F_HAP_NAME = "FaceAuthTestServiceAbilityEnroll";
const string APP_B_HAP_NAME = "FaceAuthTestServiceAbilitySecondAuth";
const string APP_C_HAP_NAME = "FaceAuthTestServiceAbilityWithoutPermission";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
const string test_label_ = "test label";
const string test_description_ = "test description";
const string PERMISSION_ENROLL_FACEAUTH = "ohos.permission.ENROLL_BIOMETRIC";
const string PERMISSION_AUTH_FACEAUTH = "ohos.permission.ACCESS_BIOMETRIC";
}  // namespace

static std::shared_ptr<FaceAuthFunctionCppScenarioTest::AppEventSubscriber> subscriber_ = nullptr;
// Register listening events and listen for messages sent by C + + app.
bool FaceAuthFunctionCppScenarioTest::SubscribeEvent()
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
void FaceAuthFunctionCppScenarioTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
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

void FaceAuthFunctionCppScenarioTest::SetUpTestCase(void)
{
    SubscribeEvent();
    FaceAuthInnerKit::Release();
    system("chmod 777 /data");
    system("rm -rf /data/config.dat");
    SystemTestAbilityUtil::InstallApp(APP_A_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_F_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_B_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_C_HAP_NAME);
    FaceAuthInnerKit::ResetTimeout();
    CreateAuthPermission();
    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_ENROLL_FACEAUTH);
    permList_user.push_back(PERMISSION_AUTH_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_A, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_F, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_B, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_A, PERMISSION_AUTH_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_A, PERMISSION_ENROLL_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_F, PERMISSION_ENROLL_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_F, PERMISSION_AUTH_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_B, PERMISSION_ENROLL_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_B, PERMISSION_AUTH_FACEAUTH, 0);
}

void FaceAuthFunctionCppScenarioTest::CreateAuthPermission()
{
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_A_1 = {
        .permissionName = PERMISSION_AUTH_FACEAUTH,
        .bundleName = BUNDLE_NAME_A,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_F_1 = {
        .permissionName = PERMISSION_AUTH_FACEAUTH,
        .bundleName = BUNDLE_NAME_F,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_B_1 = {
        .permissionName = PERMISSION_AUTH_FACEAUTH,
        .bundleName = BUNDLE_NAME_B,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_A_1);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_F_1);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_B_1);
    CreateEnrollPermission(permDefList);
}

void FaceAuthFunctionCppScenarioTest::CreateEnrollPermission(
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList)
{
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_A = {
        .permissionName = PERMISSION_ENROLL_FACEAUTH,
        .bundleName = BUNDLE_NAME_A,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_F = {
        .permissionName = PERMISSION_ENROLL_FACEAUTH,
        .bundleName = BUNDLE_NAME_F,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_B = {
        .permissionName = PERMISSION_ENROLL_FACEAUTH,
        .bundleName = BUNDLE_NAME_B,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_A);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_F);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_B);
    PermissionKit::AddDefPermissions(permDefList);
}

void FaceAuthFunctionCppScenarioTest::TearDownTestCase()
{
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_A);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_F);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_B);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_C);
}

void FaceAuthFunctionCppScenarioTest::StartAppA(MAP_STR_STR &params, string &method)
{
    Want want = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_ENROLL, BUNDLE_NAME_F, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);
    SystemTestAbilityUtil::PublishEvent(
        APP_ENROLL_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, method);
}

void FaceAuthFunctionCppScenarioTest::StopAppA()
{
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);
    std::this_thread::sleep_for(timeFast);
}

void FaceAuthFunctionCppScenarioTest::StartAppB(MAP_STR_STR &params, string &method)
{
    Want want = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_AUTH, BUNDLE_NAME_A, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);
    SystemTestAbilityUtil::PublishEvent(
        APP_AUTH_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, method);
}

void FaceAuthFunctionCppScenarioTest::StopAppB()
{
    SystemTestAbilityUtil::StopAbility(APP_AUTH_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);
    std::this_thread::sleep_for(timeFast);
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0100
 * @tc.name:: Requests are sorted by priority
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppScenarioTest, CPPAPI_Function_Scenario_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Scenario_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_LONG_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0200
 * @tc.name:: In the same priority request order
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppScenarioTest, CPPAPI_Function_Scenario_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Scenario_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_LONG_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0300
 * @tc.name:: The number of authentication failures after successful authentication is cleared.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppScenarioTest, CPPAPI_Function_Scenario_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Scenario_0300";
    StartAppB(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_LONG_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppB();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Scenario_0400
 * @tc.name:: Cancel authentication and enroll requests in the queue
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppScenarioTest, CPPAPI_Function_Scenario_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0400 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Scenario_0400";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_LONG_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppScenarioTest CPPAPI_Function_Scenario_0400 end";
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS