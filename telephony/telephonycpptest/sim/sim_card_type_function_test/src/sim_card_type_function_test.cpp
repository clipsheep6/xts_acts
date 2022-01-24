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

#include <cstring>
#include "log.h"
#include "time_count_helper.h"
#include "sim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::SLOTID_MINUS = -1;

/**
 * @tc.number   Telephony_Sim_GetCardType_0100
 * @tc.name     Verify the return value of the slotId input parameter of GetCardType.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0100, Function | MediumTest | Level3)
{
    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::VAILD_SLOT_ID));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::SINGLE_MODE_USIM_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0200
 * @tc.name     Verify the return value of GetCardType slotId input parameter -1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0200, Function | MediumTest | Level3)
{
    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::SLOTID_MINUS));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::UNKNOWN_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0300
 * @tc.name     Verify the return value of GetCardType slotId input parameter 1.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0300, Function | MediumTest | Level3)
{
    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::SLOT_ID_3));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::UNKNOWN_CARD);
}

/**
 * @tc.number   Telephony_Sim_GetCardType_0400
 * @tc.name     Verify the return value of GetCardType slotId input parameter 2.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_GetCardType_0400, Function | MediumTest | Level3)
{
    int32_t result = static_cast<int32_t>(g_proxy.GetHandler()->GetCardType(SimTest::SLOT_ID_2));
    ASSERT_EQ(result, (int32_t)OHOS::Telephony::CardType::UNKNOWN_CARD);
}