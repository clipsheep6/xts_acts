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
// static const OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "KeyEventTest" };
std::vector<bool> result;
int32_t NUMS = 0;
}

class KeyEventTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}

};

void KeyClickMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS%2 == 0) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	//KEY_STATE_RELEASED   //KEY_STATE_PRESSED
    // MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
    //          "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
    //          keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
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


void KeyPressedMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS%2 == 0) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	//KEY_STATE_RELEASED   //KEY_STATE_PRESSED
    // MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
    //          "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
    //          keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
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

void KeyCombinationMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	NUMS += 1;
	int keyActionResult = (NUMS > 2) ?
        (OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	//KEY_STATE_RELEASED   //KEY_STATE_PRESSED
    // MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
    //          "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
    //          keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
	std::vector<int32_t> pressedKeys = keyEvent->GetPressedKeys();
	std::vector<int32_t>::iterator pressedResult = std::find(pressedKeys.begin(),
        pressedKeys.end(), keyEvent->GetKeyCode());
    std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
    if  (NUMS <= 2) {
		ASSERT_TRUE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult != pressedKeys.end());
		ASSERT_TRUE(keys_.empty() && (int32_t)keys_.size() == NUMS);
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
	    ASSERT_TRUE((pressedKeys.empty())&& (keys_.empty()) && (pressedKeys.size() == keys_.size() == 1));
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
HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_001, TestSize.Level1)
{   
    NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent001.json";   
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyClickMonitorCallBack);
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
HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_002, TestSize.Level1)
{
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent0020.json";  //��������
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyPressedMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	std::string injectionCommand2 = "hosmmi-event-injection json keyevent0021.json";  //����̧��
	system(injectionCommand2.data());
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty()&&result.size()==2);
	MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
	result.clear();
}

//��ͨ-˫�� 
HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_003, TestSize.Level1){
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent002.json";   //˫��
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty()&&result.size() == 4);
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


//��ͨ-���� 
HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_004, TestSize.Level1){
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent003.json";   //����
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyClickMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty()&&result.size() == 6);
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}


//��ϼ�
HWTEST_F(KeyEventTest, InputManagerTest_KeyEvent_005, TestSize.Level1){
	NUMS = 0;
	std::string injectionCommand = "hosmmi-event-injection json keyevent004.json";   //crtl + c
    int32_t response = InputManager::GetInstance()->AddMonitor(KeyCombinationMonitorCallBack);
	std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
    ASSERT_EQ(MMI_STANDARD_EVENT_SUCCESS, response);
	system(injectionCommand.data());
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	EXPECT_TRUE(result.empty()&&result.size() == 4);
    MMIEventHdl.RemoveInputEventMontior(INDEX_FIRST);
    std::this_thread::sleep_for(std::chrono::milliseconds(SLEEP));
	result.clear();
}

}
