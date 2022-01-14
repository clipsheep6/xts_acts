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
#include "face_auth_stability_cpp_test.h"
#include "module_test_dump_util.h"
using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Security::Permission;
using namespace OHOS::AppExecFwk;
using namespace OHOS::STABUtil;
using namespace OHOS::EventFwk;
using namespace OHOS::STtools;
using std::string;
using MAP_STR_STR = std::map<std::string, std::string>;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
namespace {
int32_t nomalCode = 0;
int32_t waitTime3000Ms = 3000;
int32_t waitTime10s = 10;
int32_t stabilityTimes = 60 * 60 * 8;
string test_label_ = "test label";
string test_description_ = "test description";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const std::string HAP_NAME_STABILITY = "FaceAuthStabilityTest";
static const std::string BUNDLE_NAME_STABILITY = "com.ohos.faceauth.service.stability";
static const std::string FACE_AUTH_STABILITY_ABILITY = "FaceAuthStabilityTest";
const std::string REQ_EVENT_NAME_FACE_AUTH_STABILITY = "req_com_ohos_face_auth_stability";
static const string PERMISSION_FACEAUTH = "ohos.permission.ACCESS_BIOMETRIC";
static const string PERMISSION_ENROLL_FACEAUTH = "ohos.permission.ENROLL_BIOMETRIC";
}  // namespace

std::vector<std::string> FaceAuthStabilityCppTest::eventList_ = {"resp_com_ohos_face_auth_stability"};
STtools::Event FaceAuthStabilityCppTest::event_ = STtools::Event();
sptr<OHOS::AppExecFwk::IAppMgr> FaceAuthStabilityCppTest::appMs_ = nullptr;
sptr<OHOS::AAFwk::IAbilityManager> FaceAuthStabilityCppTest::abilityMs_ = nullptr;
std::shared_ptr<FaceAuthStabilityCppTest::AppEventSubscriber> FaceAuthStabilityCppTest::subscriber_ = nullptr;

void FaceAuthStabilityCppTest::SetUpTestCase(void)
{
    SubscribeEvent();
    appMs_ = SystemTestAbilityUtil::GetAppMgrService();
    if (appMs_) {
        int32_t freezingTime = 60;
        appMs_->SetAppFreezingTime(freezingTime);
        int time = 0;
        appMs_->GetAppFreezingTime(time);
        std::cout << "appMs_->GetAppFreezingTime();" << time << std::endl;
    }
}

void FaceAuthStabilityCppTest::TearDownTestCase(void)
{}

void FaceAuthStabilityCppTest::SetUp(void)
{
    auto timeFast = std::chrono::milliseconds(waitTime3000Ms);
    std::this_thread::sleep_for(timeFast);
    SystemTestAbilityUtil::InstallApp(HAP_NAME_STABILITY);

    std::vector<OHOS::Security::Permission::PermissionDef> permDefList;
    OHOS::Security::Permission::PermissionDef permissionDef = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = BUNDLE_NAME_STABILITY,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    OHOS::Security::Permission::PermissionDef permissionDef_1 = {.permissionName = PERMISSION_ENROLL_FACEAUTH,
        .bundleName = BUNDLE_NAME_STABILITY,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};

    permDefList.emplace_back(permissionDef);
    permDefList.emplace_back(permissionDef_1);
    PermissionKit::AddDefPermissions(permDefList);

    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_FACEAUTH);
    permList_user.push_back(PERMISSION_ENROLL_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(BUNDLE_NAME_STABILITY, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_STABILITY, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(BUNDLE_NAME_STABILITY, PERMISSION_ENROLL_FACEAUTH, 0);
    int result = PermissionKit::VerifyPermission(BUNDLE_NAME_STABILITY, PERMISSION_FACEAUTH, 0);
    int result1 = PermissionKit::VerifyPermission(BUNDLE_NAME_STABILITY, PERMISSION_ENROLL_FACEAUTH, 0);
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest::SetUp: result=" << result;
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest::SetUp: result1=" << result1;
}

void FaceAuthStabilityCppTest::TearDown(void)
{
    GTEST_LOG_(INFO) << "void FaceAuthStabilityCppTest::TearDown(void)";
    SystemTestAbilityUtil::UninstallApp(BUNDLE_NAME_STABILITY);
}

bool FaceAuthStabilityCppTest::SubscribeEvent()
{
    MatchingSkills matchingSkills;
    for (const auto &e : FaceAuthStabilityCppTest::eventList_) {
        matchingSkills.AddEvent(e);
    }
    CommonEventSubscribeInfo subscribeInfo(matchingSkills);
    subscribeInfo.SetPriority(1);
    subscriber_ = std::make_shared<AppEventSubscriber>(subscribeInfo);
    return CommonEventManager::SubscribeCommonEvent(subscriber_);
}
void FaceAuthStabilityCppTest::AppEventSubscriber::OnReceiveEvent(const CommonEventData &data)
{
    GTEST_LOG_(INFO) << "OnReceiveEvent: event=" << data.GetWant().GetAction();
    GTEST_LOG_(INFO) << "OnReceiveEvent: data=" << data.GetData();
    GTEST_LOG_(INFO) << "OnReceiveEvent: code=" << data.GetCode();
    auto eventName = data.GetWant().GetAction();
    auto iter =
        std::find(FaceAuthStabilityCppTest::eventList_.begin(), FaceAuthStabilityCppTest::eventList_.end(), eventName);
    if (iter != FaceAuthStabilityCppTest::eventList_.end()) {
        SystemTestAbilityUtil::Completed(event_, data.GetData(), data.GetCode());
    }
}

/**
 * @tc.name      FaceAuth Interface sequential pressure measurement
 * @tc.number    CPPAPI_Stability_0100
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(FaceAuthStabilityCppTest, CPPAPI_Stability_0100, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0100 start";

    std::string bundleName = BUNDLE_NAME_STABILITY;
    std::string abilityName = FACE_AUTH_STABILITY_ABILITY;
    MAP_STR_STR params;

    Want want = SystemTestAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    SystemTestAbilityUtil::PublishEvent(REQ_EVENT_NAME_FACE_AUTH_STABILITY, nomalCode, "CPPAPI_Stability_0100");
    EXPECT_EQ(SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Stability_0100", 0, stabilityTimes), 0);

    bool ret = SystemTestAbilityUtil::StopAbility(REQ_EVENT_NAME_FACE_AUTH_STABILITY, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);

    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0100 end";
}

/**
 * @tc.name      FaceAuth Interface out of sequence voltage measurement
 * @tc.number    CPPAPI_Stability_0200
 * @tc.size      MEDIUM
 * @tc.type      Reliability
 * @tc.level     Level 3
 */
HWTEST_F(FaceAuthStabilityCppTest, CPPAPI_Stability_0200, TestSize.Level3)
{
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0200 start";
    std::string bundleName = BUNDLE_NAME_STABILITY;
    std::string abilityName = FACE_AUTH_STABILITY_ABILITY;
    MAP_STR_STR params;
    Want want = SystemTestAbilityUtil::MakeWant("device", abilityName, bundleName, params);
    SystemTestAbilityUtil::StartAbility(want, abilityMs_, waitTime3000Ms);
    SystemTestAbilityUtil::WaitCompleted(
        event_, "OnStart", AbilityLifecycleExecutor::LifecycleState::INACTIVE, waitTime10s);

    SystemTestAbilityUtil::PublishEvent(REQ_EVENT_NAME_FACE_AUTH_STABILITY, nomalCode, "CPPAPI_Stability_0200");
    EXPECT_EQ(SystemTestAbilityUtil::WaitCompleted(event_, "CPPAPI_Stability_0200", 0, stabilityTimes), 0);

    bool ret = SystemTestAbilityUtil::StopAbility(REQ_EVENT_NAME_FACE_AUTH_STABILITY, nomalCode, "StopSelfAbility");
    EXPECT_TRUE(ret);
    GTEST_LOG_(INFO) << "FaceAuthStabilityCppTest CPPAPI_Stability_0200 end";
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS
