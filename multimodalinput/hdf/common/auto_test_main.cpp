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
#include "auto_test_main.h"
#include "libmmi_client.h"
#include "auto_test_msg_handle.h"
#include "multimodal_events_handler.h"
#include "proto.h"

#ifdef  HWTEST_F_BUILD
using namespace testing::ext;
#endif

#ifdef OHOS_AUTO_TEST_FRAME

class AutoTestMain : public testing::Test {
public:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
};

void AutoTestMain::SetUpTestCase(void)
{
    // step 1: input testsuit setup step
}

void AutoTestMain::TearDownTestCase(void)
{
    // step 2: input testsuit teardown step
}

static bool connectIsOk = false;

static void OnConnected(const OHOS::MMI::IMMIClient& client)
{
    int32_t autoTestRegisterId = ID_MSG_AUTOTEST_FRAME;
    OHOS::MMI::NetPacket cktAutoTest(ID_MSG_AUTOTEST_FRAME);
    cktAutoTest << autoTestRegisterId;
    client.SendMessage(cktAutoTest);

    ((OHOS::MMI::MMIClient*)&client)->SdkGetMultimodeInputInfo();
    connectIsOk = true;
}

static void OnDisconnected(const OHOS::MMI::IMMIClient& client)
{
    connectIsOk = false;
}
namespace {
AUTO_TEST_FUNC(AutoTestMain, AutoRunMain, TestSize.Level1)
{
    static auto client = std::make_shared<OHOS::MMI::MMIClient>();
    static OHOS::MMI::AutoTestMsgHandle autoTestMsgHandle;
    EventManager->SetClientHandle(client);
    client->RegisterConnectedFunction(&OnConnected);
    client->RegisterDisconnectedFunction(&OnDisconnected);
    ASSERT_TRUE(client->Start(autoTestMsgHandle));
    while (!connectIsOk) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
}
#endif