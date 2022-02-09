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

#include "face_auth_function_cpp_enroll_test.h"
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
    "resp_com_ohos_face_auth_test_app_second_auth",
    "resp_com_ohos_face_auth_test_app_without_permission"};
const string BUNDLE_NAME_F = "com.ohos.faceauth.service.appEnroll";
const string BUNDLE_NAME_B = "com.ohos.faceauth.service.appSecondAuth";
const string BUNDLE_NAME_C = "com.ohos.faceauth.service.appWithout_Permission";
const string APP_F_HAP_NAME = "FaceAuthTestServiceAbilityEnroll";
const string APP_B_HAP_NAME = "FaceAuthTestServiceAbilitySecondAuth";
const string APP_C_HAP_NAME = "FaceAuthTestServiceAbilityWithoutPermission";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
const string test_label_ = "test label";
const string test_description_ = "test description";
const string PERMISSION_FACEAUTH = "ohos.permission.ENROLL_BIOMETRIC";
const string PERMISSION_AUTH_FACEAUTH = "ohos.permission.ACCESS_BIOMETRIC";
}  // namespace

static std::shared_ptr<FaceAuthFunctionCppEnrollTest::AppEventSubscriber> subscriber_ = nullptr;
// Register listening events and listen for messages sent by C + + app.
bool FaceAuthFunctionCppEnrollTest::SubscribeEvent()
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
void FaceAuthFunctionCppEnrollTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
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

void FaceAuthFunctionCppEnrollTest::SetUpTestCase(void)
{
    SubscribeEvent();
    FaceAuthInnerKit::Release();
    system("chmod 777 /data");
    system("rm -rf /data/config.dat");
    SystemTestAbilityUtil::InstallApp(APP_F_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_B_HAP_NAME);
    SystemTestAbilityUtil::InstallApp(APP_C_HAP_NAME);
    FaceAuthInnerKit::ResetTimeout();
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_F = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = BUNDLE_NAME_F,
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
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_bundle_B = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = BUNDLE_NAME_B,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_F);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_F_1);
    permDefList.emplace_back(permissionDef_FaceAuth_bundle_B);
    PermissionKit::AddDefPermissions(permDefList);
    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_FACEAUTH);
    permList_user.push_back(PERMISSION_AUTH_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_F, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_B, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_F, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_F, PERMISSION_AUTH_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_B, PERMISSION_FACEAUTH, 0);
}

void FaceAuthFunctionCppEnrollTest::TearDownTestCase()
{
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_F);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_B);
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_C);
}

void FaceAuthFunctionCppEnrollTest::StartAppA(MAP_STR_STR &params, string &method)
{
    Want want = SystemTestAbilityUtil::MakeWant("device", ABILITY_NAME_ENROLL, BUNDLE_NAME_F, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, WAIT_START_ABILITY_TIMEOUT_MS);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, WAIT_ABILITY_TIMEOUT);
    SystemTestAbilityUtil::PublishEvent(
        APP_ENROLL_REQ_EVENT_NAME, AbilityLifecycleExecutor::LifecycleState::INACTIVE, method);
}

void FaceAuthFunctionCppEnrollTest::StopAppA()
{
    SystemTestAbilityUtil::StopAbility(APP_ENROLL_REQ_EVENT_NAME, 0, "StopSelfAbility");
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStop", AbilityLifecycleExecutor::LifecycleState::INITIAL, WAIT_ABILITY_TIMEOUT);
    std::this_thread::sleep_for(timeFast);
}

void FaceAuthFunctionCppEnrollTest::WriteFile(
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

bool FaceAuthFunctionCppEnrollTest::IsFindYUVFile()
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
 * @tc.number: CPPAPI_Function_Enroll_0100
 * @tc.name:: Cancel the current entry with the same reqid as the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_CANCEL, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0200
 * @tc.name:: Cancel the current entry by using a reqid different from the enrolled
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0300
 * @tc.name:: Face enroll when token size =0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0300";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_INVALID_PARAMETERS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_1100
 * @tc.name:: Face enroll when valid preview
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_1100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_1100 start";
    system("rm ./data/ST.yuv");
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_1100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    StopAppA();
    bool is_find = IsFindYUVFile();
    EXPECT_TRUE(is_find);
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_1100 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0400
 * @tc.name:: Face enroll when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0400, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0400 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0400";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_INVALID_PARAMETERS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0400 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0500
 * @tc.name:: Face enroll when faceId = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0500, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0500 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0500";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0500 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0600
 * @tc.name:: Face enroll when entered faceid
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0600 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0600";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0700
 * @tc.name:: Face enroll when faceid not entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0700 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0700";
    StartAppA(params, testMethod);
    int32_t result =
        SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_NO_FACE_DATA, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0800
 * @tc.name:: Face enroll when callback is nullptr
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0800, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0800 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0800";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0800 end";
}

/**
 * @tc.number: CPPAPI_Function_PreEnroll_0100
 * @tc.name:: Generate a challenge using preenroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_PreEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_PreEnroll_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_PreEnroll_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_PreEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_PostEnroll_0100
 * @tc.name:: End the face enroll and remove the challenge generated at the bottom
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_PostEnroll_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_PostEnroll_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_PostEnroll_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_PostEnroll_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetAngleDim_0100
 * @tc.name:: Get the number of face angles to be entered
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_GetAngleDim_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetAngleDim_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetAngleDim_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 3, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetAngleDim_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0100
 * @tc.name:: GetEnrolledFaceIDs is called when userid = - 1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetEnrolledFaceIDs_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0200
 * @tc.name:: GetEnrolledFaceIDs is called when userid = 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetEnrolledFaceIDs_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_GetEnrolledFaceIDs_0300
 * @tc.name:: GetEnrolledFaceIDs is called when userid is greater than 0
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_GetEnrolledFaceIDs_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_GetEnrolledFaceIDs_0300";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, 0, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_GetEnrolledFaceIDs_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0100
 * @tc.name:: GetEnrolledFaceIDs is called when faceId = -1
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Remove_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0100 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Remove_0100";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_FAIL, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0100 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0200
 * @tc.name:: Call remove to clear all face templates
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Remove_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0200 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Remove_0200";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0200 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0300
 * @tc.name:: Call remove to delete the face template with the specified ID
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Remove_0300, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0300 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Remove_0300";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_SUCCESS, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0300 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_1000
 * @tc.name:: Service busy during face enroll
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_1000, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_1000 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_1000";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_BUSY, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_1000 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0600
 * @tc.name:: Service busy during face deletion
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Remove_0600, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0600 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Remove_0600";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_BUSY, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0600 end";
}

/**
 * @tc.number: CPPAPI_Function_Remove_0700
 * @tc.name:: Face deletion failed
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Remove_0700, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0700 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Remove_0700";
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, ERRCODE_FAIL, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Remove_0700 end";
}

/**
 * @tc.number: CPPAPI_Function_Enroll_0900
 * @tc.name:: Face entry in case of abnormal face service
 * @tc.type: FUNC
 * @tc.require: Issue Number
 */
HWTEST_F(FaceAuthFunctionCppEnrollTest, CPPAPI_Function_Enroll_0900, TestSize.Level2)
{
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0900 start";
    MAP_STR_STR params;
    string testMethod = "CPPAPI_Function_Enroll_0900";
    std::string commandStr = "kill -9 $(pidof grep face_service)";
    SystemTestAbilityUtil::ExeShellCommand(commandStr);
    StartAppA(params, testMethod);
    int32_t result = SystemTestAbilityUtil::WaitCompleted(event_, testMethod, -1, WAIT_ABILITY_TIMEOUT);
    EXPECT_EQ(0, result);
    // stop ability
    StopAppA();
    GTEST_LOG_(INFO) << "FaceAuthFunctionCppEnrollTest CPPAPI_Function_Enroll_0900 end";
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS