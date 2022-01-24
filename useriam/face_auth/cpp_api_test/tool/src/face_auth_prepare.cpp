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

#include "face_auth_prepare.h"
#include "permission/permission_kit.h"

using namespace OHOS;
using namespace OHOS::Security::Permission;

using namespace std;
using namespace testing::ext;
using std::string;
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
static const std::string test_label_ = "test label";
static const std::string test_description_ = "test description";
static const std::string PERMISSION_FACEAUTH = "ohos.permission.ACCESS_BIOMETRIC";
static const std::string PERMISSION_ENROLL_FACEAUTH = "ohos.permission.ENROLL_BIOMETRIC";
static const int32_t permission_labelId = 9527;
static const int32_t permission_descriptionId = 9528;
static const std::string bundleName1 = "com.example.myapplication101";
static const std::string bundleName2 = "com.example.myapplication102";
static const std::string bundleName3 = "com.example.myapplication103";
static const std::string bundleName4 = "com.example.myapplication104";

/**
 * @tc.name      Prepare Grant User Granted Permission
 * @tc.number    CPPAPI_Prepare_0100
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(FaceAuthPrepare, CPPAPI_Prepare_0100, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100::GrantUser Permission start";
    CreateAuthPermission();
    CreateEnrollPermission();
    AddPermission();
    CheckPermission();
}

/**
 * @tc.name      Prepare Revoke User Granted Permission
 * @tc.number    CPPAPI_Prepare_0200
 * @tc.size      MEDIUM
 * @tc.type      Function
 * @tc.level     Level 1
 */
HWTEST_F(FaceAuthPrepare, CPPAPI_Prepare_0200, TestSize.Level1)
{
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200::RevokeUserPermission start";
    PermissionKit::RevokeUserGrantedPermission(bundleName1, PERMISSION_FACEAUTH, 0);
    PermissionKit::RevokeUserGrantedPermission(bundleName1, PERMISSION_ENROLL_FACEAUTH, 0);
    PermissionKit::RevokeUserGrantedPermission(bundleName2, PERMISSION_FACEAUTH, 0);
    PermissionKit::RevokeUserGrantedPermission(bundleName3, PERMISSION_FACEAUTH, 0);
    PermissionKit::RevokeUserGrantedPermission(bundleName4, PERMISSION_FACEAUTH, 0);
    PermissionKit::RemoveUserGrantedReqPermissions(bundleName1, 0);
    PermissionKit::RemoveUserGrantedReqPermissions(bundleName2, 0);
    PermissionKit::RemoveUserGrantedReqPermissions(bundleName3, 0);
    PermissionKit::RemoveUserGrantedReqPermissions(bundleName4, 0);
    PermissionKit::RemoveDefPermissions(bundleName1);
    PermissionKit::RemoveDefPermissions(bundleName2);
    PermissionKit::RemoveDefPermissions(bundleName3);
    PermissionKit::RemoveDefPermissions(bundleName4);
    int result1 = PermissionKit::VerifyPermission(bundleName1, PERMISSION_FACEAUTH, 0);
    int result1_1 = PermissionKit::VerifyPermission(bundleName1, PERMISSION_ENROLL_FACEAUTH, 0);
    int result2 = PermissionKit::VerifyPermission(bundleName2, PERMISSION_FACEAUTH, 0);
    int result3 = PermissionKit::VerifyPermission(bundleName3, PERMISSION_FACEAUTH, 0);
    int result4 = PermissionKit::VerifyPermission(bundleName4, PERMISSION_FACEAUTH, 0);
    EXPECT_EQ(result1, -1);
    EXPECT_EQ(result1_1, -1);
    EXPECT_EQ(result2, -1);
    EXPECT_EQ(result3, -1);
    EXPECT_EQ(result4, -1);
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200: result1=" << result1;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200: result1_1=" << result1_1;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200: result2=" << result2;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200: result3=" << result3;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0200: result4=" << result4;
}

void FaceAuthPrepare::CreateAuthPermission()
{
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_1 = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = bundleName1,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_2 = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = bundleName2,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_3 = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = bundleName3,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_4 = {.permissionName = PERMISSION_FACEAUTH,
        .bundleName = bundleName4,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList_.emplace_back(permissionDef_FaceAuth_1);
    permDefList_.emplace_back(permissionDef_FaceAuth_2);
    permDefList_.emplace_back(permissionDef_FaceAuth_3);
    permDefList_.emplace_back(permissionDef_FaceAuth_4);
}

void FaceAuthPrepare::CreateEnrollPermission()
{
    OHOS::Security::Permission::PermissionDef permissionDef_FaceAuth_1_1 = {
        .permissionName = PERMISSION_ENROLL_FACEAUTH,
        .bundleName = bundleName1,
        .grantMode = GrantMode::USER_GRANT,
        .availableScope = AVAILABLE_SCOPE_ALL,
        .label = test_label_,
        .labelId = permission_labelId,
        .description = test_description_,
        .descriptionId = permission_descriptionId};
    permDefList_.emplace_back(permissionDef_FaceAuth_1_1);
}

void FaceAuthPrepare::AddPermission()
{
    PermissionKit::AddDefPermissions(permDefList_);
    std::vector<string> permList_user;
    permList_user.push_back(PERMISSION_FACEAUTH);
    permList_user.push_back(PERMISSION_ENROLL_FACEAUTH);
    PermissionKit::AddUserGrantedReqPermissions(bundleName1, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(bundleName2, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(bundleName3, permList_user, 0);
    PermissionKit::AddUserGrantedReqPermissions(bundleName4, permList_user, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName1, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName1, PERMISSION_ENROLL_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName2, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName3, PERMISSION_FACEAUTH, 0);
    PermissionKit::GrantUserGrantedPermission(bundleName4, PERMISSION_FACEAUTH, 0);
}

void FaceAuthPrepare::CheckPermission()
{
    int result1 = PermissionKit::VerifyPermission(bundleName1, PERMISSION_FACEAUTH, 0);
    EXPECT_EQ(result1, 0);
    int result1_1 = PermissionKit::VerifyPermission(bundleName1, PERMISSION_ENROLL_FACEAUTH, 0);
    EXPECT_EQ(result1_1, 0);
    int result2 = PermissionKit::VerifyPermission(bundleName2, PERMISSION_FACEAUTH, 0);
    EXPECT_EQ(result2, 0);
    int result3 = PermissionKit::VerifyPermission(bundleName3, PERMISSION_FACEAUTH, 0);
    EXPECT_EQ(result3, 0);
    int result4 = PermissionKit::VerifyPermission(bundleName4, PERMISSION_FACEAUTH, 0);
    EXPECT_EQ(result4, 0);

    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100: result1=" << result1;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100: result1_1=" << result1_1;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100: result2=" << result2;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100: result3=" << result3;
    GTEST_LOG_(INFO) << "CPPAPI_Prepare_0100: result4=" << result4;
}
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS