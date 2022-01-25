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
#ifndef FACE_AUTH_PREPARE_H
#define FACE_AUTH_PREPARE_H
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <cstring>
#include "gtest/gtest.h"
#include "faceauth_log_wrapper.h"
#include "permission/permission_kit.h"
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FaceAuthPrepare : public testing::Test {
public:
    static void SetUpTestCase()
    {}
    static void TearDownTestCase()
    {}
    void SetUp()
    {}
    void TearDown()
    {}
    void CreateAuthPermission();
    void CreateEnrollPermission();
    void AddPermission();
    void CheckPermission();

private:
    std::vector<OHOS::Security::Permission::PermissionDef> permDefList_;
};
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
#endif // FACE_AUTH_PREPARE_H