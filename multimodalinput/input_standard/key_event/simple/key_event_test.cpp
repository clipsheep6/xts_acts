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

#include <gtest/gtest.h>
#include <semaphore.h>
#include <sstream>
#include <vector>
#include "define_multimodal.h"
#include "input_handler_manager.h"
#include "input_manager.h"
#include "key_event.h"
#include "multimodal_event_handler.h"
#include "proto.h"
#include "tools.h"

namespace OHOS {
namespace MMI {
namespace {
using namespace testing::ext;
constexpr OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "KeyEventTest" };
}

class KeyEventTest : public testing::Test {
public:
    static void SetUpTestCase(void) {}
    static void TearDownTestCase(void) {}
	void SetUp(void);
    void TearDown(void);
	
	void HandleInjectResult1(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent);
	void HandleInjectResult2(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent);
	
protected:
	void KeyCombinationMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent);
	void WaitEnd();

protected:
	int32_t timeout_ = 3; // default 3 seconds
	sem_t semId_ {};
	int32_t monitorId_ = -1;
	std::vector<std::function<void (std::shared_ptr<OHOS::MMI::KeyEvent>)>> funcList_;
	std::vector<bool> results_;
};

void KeyEventTest::SetUp(void)
{
	monitorId_ = OHOS::MMI::InputManager::GetInstance()->AddMonitor(std::bind(&OHOS::MMI::KeyEventTest::KeyCombinationMonitorCallBack, this, std::placeholders::_1));
    ASSERT_NE(monitorId_, -1); // 后面使用正式的值

	int ret = sem_init(&semId_, 0, 0);
	ASSERT_EQ(ret, 0);
}

void KeyEventTest::TearDown(void)
{
	MMIEventHdl.RemoveInputEventMontior(monitorId_);
	monitorId_ = -1;	
	sem_destroy(&semId_);
	results_.clear();
	funcList_.clear();
}

void KeyEventTest::WaitEnd()
{
	int ret = sem_wait(&semId_);
	EXPECT_EQ(ret, 0);
	if (ret != 0) {
		MMI_LOGE("ret: %{public}d", ret);
	}	
}

void KeyEventTest::KeyCombinationMonitorCallBack(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	const size_t currentCallFuncIndex = results_.size();
	ASSERT_LT(currentCallFuncIndex, funcList_.size());

	auto callback = funcList_[currentCallFuncIndex];
	if (callback != nullptr) {
		callback(keyEvent);
	}

	// 检查是否全部处理完成
	if (results_.size() == funcList_.size()) {
		sem_post(&semId_);
		return;
	}
}

void KeyEventTest::HandleInjectResult1(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
             "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
             keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
#if 0
	int keyActionResult = (NUMS > 2) ?
			(OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	//KEY_STATE_RELEASED   //KEY_STATE_PRESSED
	std::vector<int32_t> pressedKeys = keyEvent->GetPressedKeys();
	std::vector<int32_t>::iterator pressedResult = std::find(pressedKeys.begin(),
        pressedKeys.end(), keyEvent->GetKeyCode());
    std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
    if  (NUMS <= 2){
		ASSERT_TRUE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult != pressedKeys.end());
		ASSERT_TRUE(keys_.empty()&& (keys_.size() == NUMS));
		if (NUMS == 1){
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CTRL_LEFT);
		}
		else{
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CTRL_LEFT);
		   EXPECT_TRUE(keys_[1].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_C);
		}
		EXPECT_EQ(keys_[NUMS-1].GetDeviceId(), 0);
		EXPECT_TRUE(keys_[NUMS-1].IsPressed());
	}
#endif

	results_.push_back(true);
}

void KeyEventTest::HandleInjectResult2(std::shared_ptr<OHOS::MMI::KeyEvent> keyEvent)
{
	MMI_LOGD("KeyMonitorCallBack: keyCode = %{public}d, keyAction = %{public}d , action = %{public}d,"
             "deviceId=%{private}d, actionTime = %{public}d", keyEvent->GetKeyCode(), keyEvent->GetKeyAction(),
             keyEvent->GetAction(), keyEvent->GetDeviceId(), keyEvent->GetActionTime());
#if 0
	int keyActionResult = (NUMS > 2) ?
			(OHOS::MMI::KeyEvent::KEY_ACTION_UP) : (OHOS::MMI::KeyEvent::KEY_ACTION_DOWN);
	//KEY_STATE_RELEASED   //KEY_STATE_PRESSED
	std::vector<int32_t> pressedKeys = keyEvent->GetPressedKeys();
	std::vector<int32_t>::iterator pressedResult = std::find(pressedKeys.begin(),
        pressedKeys.end(), keyEvent->GetKeyCode());
    std::vector<OHOS::MMI::KeyEvent::KeyItem> keys_ =  keyEvent->GetKeyItems();
    if  (NUMS <= 2){
		ASSERT_TRUE(pressedKeys.empty());
		ASSERT_TRUE(pressedResult != pressedKeys.end());
		ASSERT_TRUE(keys_.empty()&& (keys_.size() == NUMS));
		if (NUMS == 1){
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CTRL_LEFT);
		}
		else{
		   EXPECT_TRUE(keys_[0].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_CTRL_LEFT);
		   EXPECT_TRUE(keys_[1].GetKeyCode() ==  keyEvent->GetKeyCode() == OHOS::MMI::KeyEvent::KEYCODE_C);
		}
		EXPECT_EQ(keys_[NUMS-1].GetDeviceId(), 0);
		EXPECT_TRUE(keys_[NUMS-1].IsPressed());
	}
#endif

	results_.push_back(true);
}

// 组合键
HWTEST_F(KeyEventTest, MultiModalInputTest_KeyEvent_005, TestSize.Level1)
{
	funcList_.push_back(std::bind(&KeyEventTest::HandleInjectResult1, this, std::placeholders::_1));
	funcList_.push_back(std::bind(&OHOS::MMI::KeyEventTest::HandleInjectResult1, this, std::placeholders::_1));
	funcList_.push_back(std::bind(&OHOS::MMI::KeyEventTest::HandleInjectResult2, this, std::placeholders::_1));
	funcList_.push_back(std::bind(&OHOS::MMI::KeyEventTest::HandleInjectResult1, this, std::placeholders::_1));

	ExecInjection("keyboard_key_ctrl_left_click.json"); //crtl + c

	WaitEnd();
}
} // namespace MMI
} // namespace OHOS
