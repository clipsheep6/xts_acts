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
#include "pointer_event.h"
#include "multimodal_event_handler.h"
#include "proto.h"
#include "run_shell_util.h"

namespace {
using namespace testing::ext;
using namespace OHOS;
using namespace MMI;
namespace {
const int32_t SLEEP = 3000;
const int32_t INDEX_FIRST = 1;
// static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "PointerEventTest" };
std::vector<bool> result;
int32_t NUMS = 0;
}

class PointerEventTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}

};

void PointButtonClickMonitorCallBack(std::shared_ptr<OHOS::MMI::PointerEvent> pointerEvent)
{
	NUMS += 1;
	int PointActionResult = (NUMS%2 == 0) ?
        (OHOS::MMI::PointerEvent::POINTER_ACTION_BUTTON_UP) : (OHOS::MMI::PointerEvent::POINTER_ACTION_BUTTON_DOWN);
	//BUTTON_STATE_RELEASED   //BUTTON_STATE_PRESSED
    // MMI_LOGD("PointMonitorCallBack: buttonCode = %{public}d, pointAction = %{public}d , action = %{public}d,"
    //          "deviceId=%{private}d, actionTime = %{public}d", pointerEvent->GetButtonId(), pointerEvent->GetPointerAction(),
    //          pointerEvent->GetAction(), pointerEvent->GetDeviceId(), pointerEvent->GetActionTime());
    if (PointActionResult) {
        EXPECT_TRUE(pointerEvent->GetPressedButtons().empty());
	    EXPECT_NE(pointerEvent->GetActionTime(), 0);
	    //EXPECT_TRUE(pointerEvent->IsButtonPressed(pointerEvent->GetButtonId()));
	} else {
	    ASSERT_FALSE(pointerEvent->GetPressedButtons().empty());
		EXPECT_EQ(pointerEvent->GetActionTime(), 0);
		ASSERT_FALSE(pointerEvent->IsButtonPressed(pointerEvent->GetButtonId()));
	}
    EXPECT_EQ(pointerEvent->GetButtonId(), (int32_t)(OHOS::MMI::PointerEvent::POINTER_ACTION_BUTTON_UP));
    EXPECT_EQ(pointerEvent->GetPointerAction(), PointActionResult);
    EXPECT_EQ(pointerEvent->GetAction(), PointActionResult);
    EXPECT_EQ(pointerEvent->GetDeviceId(), 0);
	result.push_back(true);
}


//单击 左键
HWTEST_F(PointerEventTest, InputManagerTest_pointerEvent_001, TestSize.Level1)
{   
    NUMS += 1;
	std::string injectionCommand = "hosmmi-event-injection json pointerEvent001.json";   
    int32_t response = InputManager::GetInstance()->AddMonitor(PointButtonClickMonitorCallBack);
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty());
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
	
}

//普通-双击 
HWTEST_F(PointerEventTest, InputManagerTest_pointerEvent_002, TestSize.Level1)
{
	NUMS += 1;
	std::string injectionCommand = "hosmmi-event-injection json pointerEvent002.json";   //双击
    int32_t response = InputManager::GetInstance()->AddMonitor(PointButtonClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 4));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


//普通-连击 
HWTEST_F(PointerEventTest, InputManagerTest_pointerEvent_003, TestSize.Level1)
{
	NUMS += 1;
	std::string injectionCommand = "hosmmi-event-injection json pointerEvent003.json";   //三击
    int32_t response = InputManager::GetInstance()->AddMonitor(PointButtonClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 6));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}

}
