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
#ifndef FACE_AUTH_FUNCTION_CPP_ENROLL_TEST_H
#define FACE_AUTH_FUNCTION_CPP_ENROLL_TEST_H

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

#include "permission/permission_kit.h"
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"

namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FaceAuthFunctionCppEnrollTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp()
    {}
    void TearDown()
    {}
    void StartAppA(OHOS::STABUtil::MAP_STR_STR &params, std::string &method);
    void StopAppA();
    static bool SubscribeEvent();
    void WriteFile(int32_t caseNum, int32_t codeNum, std::map<int32_t, ResultInfo> resultInfos_);
    bool IsFindYUVFile();
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };

public:
    const int32_t WAIT_LONG_TIMEOUT = 50;
    const int32_t WAIT_ABILITY_TIMEOUT = 20;
    const int32_t WAIT_START_ABILITY_TIMEOUT_MS = 1000;
    const std::string APP_ENROLL_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_enroll";
    const std::string APP_SECOND_AUTH_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_second_auth";
    const std::string APP_WITHOUT_PERMISSION_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_without_permission";
    const std::string ABILITY_NAME_ENROLL = "FaceAuthTestServiceAbilityEnroll";
    const std::string ABILITY_NAME_SECOND_AUTH = "FaceAuthTestServiceAbilitySecondAuth";
    const std::string ABILITY_NAME_WITHOUT_PERMISSION = "FaceAuthTestServiceAbilityWithoutPermission";
};
}  // namespace FaceAuth
}  // namespace UserIAM
}  // namespace OHOS
#endif  // FACE_AUTH_FUNCTION_CPP_ENROLL_TEST_H