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
const string BUNDLE_NAME_C = "com.ohos.faceauth.service.appWithout_Permission";
const string APP_A_HAP_NAME = "FaceAuthTestServiceAbilityAuth";
const string APP_B_HAP_NAME = "FaceAuthTestServiceAbilitySecondAuth";
const string APP_C_HAP_NAME = "FaceAuthTestServiceAbilityWithoutPermission";
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
    SystemTestAbilityUtil::InstallApp(APP_C_HAP_NAME);
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
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_C);
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

void FaceAuthFunctionCppAuthTest::WriteFile(
    int32_t caseNum, int32_t codeNum, std::map<int32_t, ResultInfo> resultInfos_)
{
    std::ofstream mystream("/data/config.dat", std::ios::trunc);
    int32_t paramNum = 10;
    if (!mystream.is_open()) {
        return;
    }
    mystream << (std::to_string(caseNum) + "\n");
    mystream << (std::to_string(codeNum) + "\n");
    for (size_t i = 0; i < resultInfos_.size(); i++) {
        mystream << std::to_string(resultInfos_[i].resultCode);
        mystream << " ";
        for (int32_t j = 0; j < paramNum; j++) {
            mystream << std::to_string(resultInfos_[i].param[j]);
            mystream << " ";
        }
        mystream << "\n";
    }

    mystream.close();
}

bool FaceAuthFunctionCppAuthTest::IsFindYUVFile()
{
    GTEST_LOG_(INFO) << "IsFindYUVFile called";
    string cmd_1 = "find /data/ -name ST.yuv";
    static const int32_t cmd_result_buf_size = 1024;
    FILE *ptr;
    char result[cmd_result_buf_size] = {0};
    char buf_ps[cmd_result_buf_size];
    if ((ptr = popen(cmd_1.c_str(), "r")) != nullptr) {
        while (fgets(buf_ps, sizeof(buf_ps), ptr) != nullptr) {
            if (strncat_s(result, sizeof(result), buf_ps, sizeof(result) - 1) != EOK) {
                break;
            }
        }
        pclose(ptr);
        ptr = nullptr;
    }
    string sCmdResult = string(result);
    GTEST_LOG_(INFO) << "IsFindYUVFile result_str: " << sCmdResult.c_str();
    if (sCmdResult.length() > 0) {
        return true;
    } else {
        return false;
    }
}

/**
 * @tc.number: CPPAPI_Function_Release_0100
 * @tc.name:: Applications that have not executed init call release.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Release_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Release_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Release_0200
 * @tc.name:: The application repeatedly calls release.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Release_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Release_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Release_0200 end";
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

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0100
 * @tc.name:: Cancelauth is not called for authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_CancelAuth_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_CancelAuth_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0200
 * @tc.name:: Call cancelauth repeatedly.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_CancelAuth_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_CancelAuth_0200";
    StartAppA(params, testMethod);

    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0100
 * @tc.name:: Unfreeze face authentication after freezing.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_ResetTimeout_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_ResetTimeout_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_ResetTimeout_0100";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, AUTH_FAIL_MAX_TIMES, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_ResetTimeout_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_ResetTimeout_0200
 * @tc.name:: It is not frozen or unfrozen, and the number of attempts to obtain is still 5.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_ResetTimeout_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_ResetTimeout_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_ResetTimeout_0200";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, AUTH_FAIL_MAX_TIMES, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_ResetTimeout_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingNum_0100
 * @tc.name:: Gets the number of attempts until frozen.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_GetRemainingNum_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingNum_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetRemainingNum_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingNum_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0100
 * @tc.name:: Obtain the remaining unlocking time until unlocking, the time range is 0-30s.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_GetRemainingTime_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingTime_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetRemainingTime_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingTime_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetRemainingTime_0200
 * @tc.name:: Call the remaining unlocking time when it is not frozen, and return 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_GetRemainingTime_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingTime_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetRemainingTime_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_GetRemainingTime_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0300
 * @tc.name:: Reqid is set to the same value as face authentication, and the current authentication is cancelled.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_CancelAuth_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_CancelAuth_0300";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_CancelAuth_0400
 * @tc.name:: If reqid is set to a value different from that of face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_CancelAuth_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0400 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_CancelAuth_0400";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_CancelAuth_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0100
 * @tc.name:: Face authentication failed.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0100";

    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_COMPARE_FAIL, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0200
 * @tc.name:: Face authentication timeout
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0200 start";
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.param[0] = 6;
    int32_t range = 10;
    for (int32_t i = 1; i < range; i++) {
        info.param[i] = 0;
    }
    info.resultCode = 18;
    resultInfos_[0] = info;
    WriteFile(1, 1, resultInfos_);
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_TIMEOUT, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0400
 * @tc.name:: Service busy during face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0400 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0400";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_BUSY, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0500
 * @tc.name:: Face authentication is locked because it has failed more than 5 times.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0500 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0500";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_IN_LOCKOUT_MODE, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0500 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0600
 * @tc.name:: No authentication credentials are entered for face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0600 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0600";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_NO_FACE_DATA, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0700
 * @tc.name:: Authentication can be performed normally after the lock is released.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0700 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0700";
    StartAppA(params, testMethod);
    int32_t result2 = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_LONG_TIMEOUT);
    EXPECT_EQ(0, result2);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0800
 * @tc.name:: Face authentication timeout is not included in the number of failures.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0800 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0800";
    std::map<int32_t, ResultInfo> resultInfos_;
    ResultInfo info;
    info.resultCode = 18;
    info.param[0] = 6;
    resultInfos_[0] = info;
    WriteFile(1, 1, resultInfos_);
    StartAppA(params, testMethod);
    int32_t retryCount = 5;
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, retryCount, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0800 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1900
 * @tc.name:: Face auth in case of abnormal face service.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1900, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1900 start";
    system("rm ./data/ST.yuv");
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1900";
    StartAppA(params, testMethod);
    int result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    bool is_find = IsFindYUVFile();
    EXPECT_TRUE(is_find);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1900 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_2000
 * @tc.name:: Face authentication when preview = nullptr.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_2000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_2000 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_2000";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_2000 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1000
 * @tc.name:: Face authentication when challenge = - 1.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1000 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1000";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_INVALID_PARAMETERS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1000 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1100
 * @tc.name:: Face authentication when challenge = 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1100 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1200
 * @tc.name:: Face authentication when Greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1200 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1300
 * @tc.name:: Face authentication is performed when faceid = - 1.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1300";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_INVALID_PARAMETERS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1300 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1400
 * @tc.name:: Face authentication when faceid = 0.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1400 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1400";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1400 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1500
 * @tc.name:: Use the entered faceid for face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1500 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1500";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1500 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1600
 * @tc.name:: Face authentication is performed using a faceid that has not been entered.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1600 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1600";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_NO_FACE_DATA, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1600 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_1700
 * @tc.name:: Face authentication when callback = nullptr.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_1700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1700 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_1700";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_1700 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0300
 * @tc.name:: Failed to turn on the camera during face authentication.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0300 start";
    MAP_STR_STR params;

    int32_t kill_times = 5;
    const auto temp_time = std::chrono::milliseconds(1000);
    while (kill_times) {
        FILE *ptr;
        ptr = popen("kill -9 $(pidof camera_service)", "r");
        pclose(ptr);
        kill_times--;
        std::this_thread::sleep_for(temp_time);
    }

    string testMethod = "CPPAPI_Function_Authenticate_0300";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_CAMERA_FAIL, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    FILE *ptr;
    ptr = popen("/system/bin/sa_main /system/profile/camera_service.xml &", "r");
    pclose(ptr);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Authenticate_0900
 * @tc.name:: Face authentication in case of abnormal face service.
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppAuthTest, CPPAPI_Function_Authenticate_0900, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0900 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Authenticate_0900";
    std::string commandStr = "kill -9 $(pidof grep face_service)";
    SystemTestAbilityUtil::ExeShellCommand(commandStr);
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppAuthTest CPPAPI_Function_Authenticate_0900 end";
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS
