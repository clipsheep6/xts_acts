/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "input_manager.h"
#include <gtest/gtest.h>
#include <sstream>
#include "define_multimodal.h"
#include "input_handler_manager.h"
#include "key_event_pre.h"
#include "multimodal_event_handler.h"
#include "proto.h"
#include "run_shell_util.h"

namespace {
using namespace testing::ext;
using namespace OHOS;
using namespace MMI;
namespace {
constexpr int32_t SLEEP = 3000;
constexpr int32_t INDEX_FIRST = 1;
static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "KeyEventTest" };
}

class KeyEventTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}
};


void KeyMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
    MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
             "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
             keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
    EXPECT_EQ(keyEvent->GetKeyCode(), OHOS::MMI::KeyEvent::KEYCODE_BACK);
    EXPECT_EQ(keyEvent->GetKeyAction(), OHOS::MMI::KeyEvent::KEY_ACTION_UP);
    EXPECT_EQ(keyEvent->GetAction(), OHOS::MMI::KeyEvent::KEY_ACTION_UP);
    EXPECT_EQ(keyEvent->GetDeviceId(), 0);
}

HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_001, TestSize.Level1)
{
	std::string injectionCommand = "hosmmi-event-injection json xxx.json";
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyMonitorCallBack);
    EXPECT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
}
}

