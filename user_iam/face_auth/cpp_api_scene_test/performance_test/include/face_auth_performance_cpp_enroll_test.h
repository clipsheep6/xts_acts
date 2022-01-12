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
#ifndef FACE_AUTH_PERFORMANCE_CPP_ENROLL_TEST_H
#define FACE_AUTH_PERFORMANCE_CPP_ENROLL_TEST_H
#include <cstdio>
#include <fstream>
#include <sstream>
#include <chrono>
#include <gtest/gtest.h>
#include <mutex>
#include <cstring>
#include <iostream>
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
#include "system_test_ability_util.h"
#include "sa_mgr_client.h"
#include "system_ability_definition.h"

namespace OHOS {
namespace UserIAM {
namespace FaceAuth {
class FaceAuthPerformanceCppEnrollTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp()
    {}
    void TearDown()
    {}
    static bool SubscribeEvent();
    class AppEventSubscriber : public OHOS::EventFwk::CommonEventSubscriber {
    public:
        explicit AppEventSubscriber(const OHOS::EventFwk::CommonEventSubscribeInfo &sp) : CommonEventSubscriber(sp) {};
        ~AppEventSubscriber() = default;
        virtual void OnReceiveEvent(const OHOS::EventFwk::CommonEventData &data) override;
    };

public:
    uint16_t wait_ability_timeout = 5;
    uint16_t wait_ability_timeout_long_1 = 1300;
    uint16_t wait_ability_timeout_long_2 = 2600;
    uint16_t wait_ability_timeout_ten_second = 10;
    uint16_t wait_start_ability_timeout_ms = 1000;
    const std::string abilityNameF = "FaceAuthTestServiceAbilityEnroll";
    const std::string APP_ENROLL_REQ_EVENT_NAME = "req_com_ohos_face_auth_test_app_enroll";
};
} // namespace FaceAuth
} // namespace UserIAM
} // namespace OHOS
#endif // FACE_AUTH_PERFORMANCE_CPP_ENROLL_TEST_H