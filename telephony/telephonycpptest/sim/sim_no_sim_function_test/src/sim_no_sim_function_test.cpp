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

#include <vector>
#include <fstream>
#include "sim_test.h"
#include "sim_no_sim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::INVALID_VALUE = -1;

/**
 * @tc.number   Telephony_Sim_SetPrimarySlotId_0400
 * @tc.name     If there is no card, SetPrimarySlotId indicates that slotId is normal.
 * @tc.desc     Function test
 */
HWTEST_F(SimNoSimTest, Telephony_Sim_SetPrimarySlotId_0400, Function | MediumTest | Level1)
{
    if (g_isHasCard) {
        LOG("If a sim card is inserted, this case must be executed when no sim card is inserted.");
        return;
    }
    bool result = g_proxy.GetHandler()->SetPrimarySlotId(SimTest::SLOTID_0);
    ASSERT_FALSE(result);
    int32_t defaultSlotId = g_proxy.GetHandler()->GetPrimarySlotId();
    ASSERT_EQ(defaultSlotId, SimTest::INVALID_VALUE);
}

/**
 * @tc.number   Telephony_Sim_HasOperatorPrivileges_0700
 * @tc.name     Test the HasOperatorPrivileges interface if there are no cards.
 * @tc.desc     Function test
 */
HWTEST_F(SimNoSimTest, Telephony_Sim_HasOperatorPrivileges_0700, Function | MediumTest | Level1)
{
    if (g_isHasCard) {
        LOG("If a sim card is inserted, this case must be executed when no sim card is inserted.");
        return;
    }
    bool results = g_proxy.GetHandler()->HasOperatorPrivileges(SimTest::SLOTID_0);
    ASSERT_FALSE(results);
}
