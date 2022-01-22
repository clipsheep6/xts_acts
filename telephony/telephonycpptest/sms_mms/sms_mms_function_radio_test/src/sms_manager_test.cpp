/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
#define SMS_MMS_NETWORSEARCH_RADIO_TEST
#include "sms_manager_test.h"
#include "condition_lock.h"
#include "string_ex.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsManager;
using namespace SmsManager;
using namespace SendCallback;
using namespace DeliveryShortback;
using namespace OHOS::Telephony;

/**
 * @tc.number   Telephony_SmsMms_SendMessageText_0100
 * @tc.name     Interface parameters are correct, the SMS message is successfully sent
 * @tc.desc     Function test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SendMessageText_0100, Function | MediumTest | Level1)
{
    int32_t slotId = SLOT_ID_0;
    ASSERT_TRUE(GetProxy_()->SetRadioState(slotId, false, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(GetProxy_()->GetRadioState(slotId, g_callback));
    LOCK_NUM_WHILE_NE(getRadioStatusCallback, false, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);

    std::string desAddr(SMS_SEND_DST_NUMBER);
    std::string sca("");
    std::string text("1111111111");
    sptr<SendCallbackTest> sendCallBackPtr = new SendCallbackTest();
    sptr<DeliveryCallbackTest> deliveryCallBackPtr = new DeliveryCallbackTest();

    g_smsClientPtr->GetPtr()->SendMessage(slotId, Telephony::StringUtils::ToUtf16(desAddr),
                                          Telephony::StringUtils::ToUtf16(sca), Telephony::StringUtils::ToUtf16(text),
                                          sendCallBackPtr, deliveryCallBackPtr);

    LOCK_NUM_WHILE_NE((sendCallBackPtr->GetSendCallbackResult() || deliveryCallBackPtr->GetDeliverybackResult()),
                      true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT * 2);
    bool isCallback = (SendCallback::res == SendCallback::CALLBACK_SUCCESSFUL ||
                       DeliveryShortback::res == DeliveryShortback::CALLBACK_SUCCESSFUL);
    EXPECT_TRUE(isCallback);

    hasNewData[SET_RADIO_STATUS] = false;
    ASSERT_TRUE(GetProxy_()->SetRadioState(slotId, true, g_callback));
    LOCK_NUM_WHILE_NE(hasNewData[SET_RADIO_STATUS], true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    ASSERT_TRUE(GetProxy_()->GetRadioState(slotId, g_callback));
    LOCK_NUM_WHILE_NE(getRadioStatusCallback, true, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}
