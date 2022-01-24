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
#ifndef FACE_AUTH_FUNCTION_CPP_AUTO_RUN_ENROLL_TEST_H
#define FACE_AUTH_FUNCTION_CPP_AUTO_RUN_ENROLL_TEST_H

#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <gtest/gtest.h>
#include <mutex>
#include <cstring>
#include <iostream>
#include <securec.h>
#include <thread>
#include "gtest/gtest.h"
#include "ability_manager_service.h"
#include "ability_manager_errors.h"
#include "ability_lifecycle_executor.h"
#include "app_mgr_service.h"
#include "client_socket.h"
#include "useriam_auth_kit.h"
#include "faceauth_log_wrapper.h"
#include "common_event.h"
#include "common_event_manager.h"
#include "face_auth_defines.h"
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"
#include "on_faceauth_stub.h"
#include "surface.h"

namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FaceAuthFunctionCppAutoRunEnrollTest : public testing::Test {
public:
    void WriteFile(int32_t caseNum, int32_t codeNum, std::map<int32_t, ResultInfo> resultInfos_);
    UserIAM::FaceAuth::EnrollParam CreateEnrollParam(uint64_t _reqId, int64_t _challenge, int32_t _faceId,
        int32_t _previewId, std::vector<uint8_t> _token);
    UserIAM::FaceAuth::AuthParam CreateAuthParam(uint64_t _reqId = 0, int32_t _flags = 0, int64_t _challenge = 0,
        int32_t _faceId = 0, int32_t _previewId = 0);
    void EnrollFile();
    class TestCallback : public OHOS::UserIAM::FaceAuth::OnFaceAuthStub {
    public:
        TestCallback() = default;
        virtual ~TestCallback() = default;

        void OnCallbackEvent(uint64_t reqId, int32_t type, int32_t code, int32_t errorCode,
            OHOS::UserIAM::FaceAuth::Bundle &bundle);
        void OnDeathRecipient();
        int64_t reqid_;
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
#endif // FACE_AUTH_FUNCTION_CPP_AUTO_RUN_ENROLL_TEST_H