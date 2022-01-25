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
#ifndef FACE_AUTH_STABILITY_TEST_H
#define FACE_AUTH_STABILITY_TEST_H
#define private public
#include <map>
#include <string>
#include "gtest/gtest.h"
#include "useriam_auth_kit.h"
#include "faceauth_log_wrapper.h"
#include "face_auth_defines.h"
#include "on_faceauth_stub.h"
#include "surface.h"
namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
typedef bool (*FnPtr)();
class FaceAuthStabilityCppTest : public testing::Test {
public:

private:
    static void WriteFile(int32_t caseNum, int32_t codeNum,
        std::map<int32_t, UserIAM::FaceAuth::ResultInfo> resultInfos_);
    static void EnrollFile();
    static bool Execute();
    static bool Cancel();
    static bool Init();
    static bool Release();
    static bool ResetTimeout();
    static bool GetRemainingTime();
    static bool GetRemainingNum();
    static bool Enroll();
    static bool CancelEnrollment();
    static bool PreEnroll();
    static bool PostEnroll();
    static bool Remove();
    static bool GetEnrolledFaceIDs();
    static bool GetAngleDim();
    static bool TestFountion();
    static bool ExeAPI();
    static bool TestRandomFountion();
    static bool RandomExeAPI();
    void StabilityFountion();
    void StabilityRandomFountion();
    static void GetTestFunction(std::vector<FnPtr> &vector);
    typedef void (FaceAuthStabilityCppTest::*func)();
    static std::map<std::string, func> funcMap_;
    class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
    public:
        TestCallback() = default;
        virtual ~TestCallback() = default;

        void OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
            OHOS::UserIAM::FaceAuth::Bundle &bundle);
        void OnDeathRecipient();
        uint64_t reqid_;
        int32_t type_;
        int32_t code_;
        int32_t errorcode_;
        OHOS::UserIAM::FaceAuth::Bundle bundle_;
        bool isCallback_ = false;
    };
};
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
#endif // FACE_AUTH_STABILITY_TEST_H