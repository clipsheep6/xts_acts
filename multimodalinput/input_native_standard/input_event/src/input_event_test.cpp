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
#include "key_event.h"
#include "input_event.h"
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
// static const OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "InputEventTest" };
std::vector<bool> result = {false};
int32_t NUMS = 0;
}

class InputEventTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}

};

void InputClickMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS%2 == 0) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
    if (keyActionResult){
        EXPECT_TRUE(keyEvent->GetPressedKeys().empty());
	    EXPECT_NE(keyEvent->GetActionTime(), 0);
	    // EXPECT_TRUE(keyEvent->IsPressed());  // compile failed
	}
    else{
	    ASSERT_FALSE(keyEvent->GetPressedKeys().empty());
		EXPECT_EQ(keyEvent->GetActionTime(), 0);
		// ASSERT_FALSE(keyEvent->IsPressed()); // compile failed
	}
    EXPECT_EQ(keyEvent->GetKeyCode(), OHOS::MMI::KeyEvent::KEYCODE_A);
    EXPECT_EQ(keyEvent->GetKeyAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetDeviceId(), 0);
	result.push_back(true);
}


void InputPressedMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS%2 == 0) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	std::vector<int32_t> pressedKeys = keyEvent->GetPressedKeys();
	std::vector<int32_t>::iterator pressedResult = std::find(pressedKeys.begin(),
        pressedKeys.end(), keyEvent->GetKeyCode());
    if  (NUMS%2){
		ASSERT_TRUE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult != pressedKeys.end());
		std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
		ASSERT_TRUE(keys_.empty() && keys_.size() == 1);
		for (auto iter = keys_.begin(); iter != keys_.end(); iter++) {
			EXPECT_TRUE(iter->GetKeyCode() && keyEvent->GetKeyCode() && OHOS::MMI::KeyEvent::KEYCODE_B);
			// EXPECT_EQ(iter->GetDeviceId(), 0);
			// EXPECT_TRUE(iter.IsPressed());  // compile failed
		}
	}
	else{
	    ASSERT_FALSE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult == pressedKeys.end());
		std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
		ASSERT_TRUE((!keys_.empty())&&(!keys_.size()));
	}
    EXPECT_EQ(keyEvent->GetKeyCode(), OHOS::MMI::KeyEvent::KEYCODE_BACK);
    EXPECT_EQ(keyEvent->GetKeyAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetDeviceId(), 0);
	EXPECT_NE(keyEvent->GetActionTime(), 0);
	// EXPECT_TRUE(keyEvent->IsPressed());  // compile failed
	result.push_back(true);
}

void InputCombinationMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS > 2) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	std::vector<int32_t> pressedKeys = keyEvent->GetPressedKeys();
	std::vector<int32_t>::iterator pressedResult = std::find(pressedKeys.begin(),
        pressedKeys.end(), keyEvent->GetKeyCode());
    std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
    if  (NUMS <= 2) {
		ASSERT_TRUE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult != pressedKeys.end());
		ASSERT_TRUE(!keys_.empty() && (int32_t)keys_.size() == NUMS);
		if (NUMS == 1) {
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CALL);
		}
		else{
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CALL);
		   EXPECT_TRUE(keys_[1].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_ENDCALL);
		}
		EXPECT_EQ(keys_[NUMS-1].GetDeviceId(), 0);
		// EXPECT_TRUE(keys_[NUMS-1].IsPressed());   // compile failed

	}
	else if  (NUMS == 3) {
	    std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
	    ASSERT_TRUE(pressedKeys.empty() && keys_.empty() && pressedKeys.size() == keys_.size() 
		    && pressedKeys.size() == 1);
	    ASSERT_TRUE(pressedResult == pressedKeys.end());
	    // ASSERT_FALSE(keyEvent->IsPressed());
		EXPECT_TRUE((keys_[0].GetKeyCode() !=  keyEvent->GetKeyCode()) && 
			(keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_C) && 
			(keys_[0].GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CALL));
		EXPECT_EQ(keys_[0].GetDeviceId(), 0);
		// EXPECT_TRUE(keys_[0].IsPressed());      // compile failed
	}
    else{
	    ASSERT_TRUE((pressedKeys.empty() ==  keys_.empty()) && (pressedKeys.size() == 0));
	    ASSERT_TRUE(pressedResult == pressedKeys.end());
	   //  ASSERT_FALSE(keyEvent->IsPressed());
		EXPECT_TRUE((keys_[0].GetKeyCode() !=  keyEvent->GetKeyCode()) && 
		    (keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_C));
		EXPECT_EQ(keys_[0].GetDeviceId(), 0);
		// EXPECT_TRUE(keys_[0].IsPressed())       // compile failed
	}
    EXPECT_EQ(keyEvent->GetKeyCode(), OHOS::MMI::KeyEvent::KEYCODE_BACK);
    EXPECT_EQ(keyEvent->GetKeyAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetAction(), keyActionResult);
    EXPECT_EQ(keyEvent->GetDeviceId(), 0);
	EXPECT_NE(keyEvent->GetActionTime(), 0);
	result.push_back(true);
}

//���� ��ͨ����
HWTEST_F(InputEventTest, InputManagerTest_KeyEvent_001, TestSize.Level1)
{   
    NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent001.json";   
    int32_t response = InputManager::GetInstance()->AddMonitor(InputClickMonitorCallBack);
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty());
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
	
}

//��ͨ����&&̧��
HWTEST_F(InputEventTest, InputManagerTest_KeyEvent_002, TestSize.Level1)
{
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent0020.json";  //��������
    int32_t response = InputManager::GetInstance()->AddMonitor(InputPressedMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	std::string injectionCommand2 = "hosmmi-event-injection json keyevent0021.json";  //����̧��
	system(injectionCommand2.data());
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 2));
	MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
	result.clear();
}

//��ͨ-˫�� 
HWTEST_F(InputEventTest, InputManagerTest_KeyEvent_003, TestSize.Level1)
{
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent002.json";   //˫��
    int32_t response = InputManager::GetInstance()->AddMonitor(InputClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 4));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


//��ͨ-���� 
HWTEST_F(InputEventTest, InputManagerTest_KeyEvent_004, TestSize.Level1)
{
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent003.json";   //����
    int32_t response = InputManager::GetInstance()->AddMonitor(InputClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 6));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


//��ϼ�
HWTEST_F(InputEventTest, InputManagerTest_KeyEvent_005, TestSize.Level1)
{
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent004.json";   //crtl + c
    int32_t response = InputManager::GetInstance()->AddMonitor(InputCombinationMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty() && (result.size() == 4));
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


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
    EXPECT_EQ(pointerEvent->GetButtonId(), (int32_t)(OHOS::MMI::PointerEvent::MOUSE_BUTTON_LEFT));
    EXPECT_EQ(pointerEvent->GetPointerAction(), PointActionResult);
    EXPECT_EQ(pointerEvent->GetAction(), PointActionResult);
    EXPECT_EQ(pointerEvent->GetDeviceId(), 0);
	result.push_back(true);
}


//单击 左键
HWTEST_F(InputEventTest, InputManagerTest_pointerEvent_001, TestSize.Level1)
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
HWTEST_F(InputEventTest, InputManagerTest_pointerEvent_002, TestSize.Level1)
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
HWTEST_F(InputEventTest, InputManagerTest_pointerEvent_003, TestSize.Level1)
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
