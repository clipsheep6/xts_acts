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

#include "sms_manager_test.h"
#include "string_ex.h"
#include "condition_lock.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;
using namespace Telephony;
using namespace OHOS::Telephony::SmsMmsManagerTest;
using namespace SmsMmsManagerTest;

/**
 * @tc.number   Telephony_SmsMms_SplitMessage_1900
 * @tc.name     Loop call SplitMessage interface 10 times, normal input parameters, each time successfully split.
 * @tc.desc     Reliability test
 */
HWTEST_F(SmsManagerTest, Telephony_SmsMms_SplitMessage_1900, Reliability | MediumTest | Level3)
{
    std::vector<std::u16string> result;
    string message;
    for (int i = 0; i < MAX_CHINESE_MESSAGE_LENTH + 1; ++i) {
        message += "中";
    }
    for (uint i = 0; i < LOOP_MULTITUDE_NUMBER; i++) {
        result = g_smsClientPtr->GetPtr()->SplitMessage(Str8ToStr16(message));
        ASSERT_TRUE(result.size() == MessageSize::SIZE_2);
        u16string newReseult;
        for (uint i = 0; i < result.size(); ++i) {
            newReseult += result[i];
        }
        ASSERT_TRUE(newReseult == Str8ToStr16(message));
    }
}