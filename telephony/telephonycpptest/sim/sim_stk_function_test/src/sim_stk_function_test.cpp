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
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include "sim_test.h"
#include "sim_stk_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::SLOT_ID_2 = 2;
const int32_t SimTest::SLOT_ID_3 = 3;
const int32_t SimTest::VAILD_SLOT_ID = 0;
const int32_t SimTest::SLOTID_MINUS = -1;
const std::string SimTest::RESPONSE_CMD = "81030125000202828";
const std::string SimTest::STK_CMD = "D30781020181900101";

/*
 * @tc.number  Telephony_Sim_SendTerminalResponseCmd_0100
 * @tc.name    Test SendTerminalResponseCmd interface, slotId exception input parameter -1.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendTerminalResponseCmd_0100, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendTerminalResponseCmd(SimTest::SLOTID_MINUS, SimTest::RESPONSE_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendTerminalResponseCmd_0200
 * @tc.name    Test SendTerminalResponseCmd interface, slotId exception input parameter 1.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendTerminalResponseCmd_0200, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendTerminalResponseCmd(SimTest::SLOT_ID_3, SimTest::RESPONSE_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendTerminalResponseCmd_0300
 * @tc.name    Test SendTerminalResponseCmd interface, slotId exception input parameter 2.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendTerminalResponseCmd_0300, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendTerminalResponseCmd(SimTest::SLOT_ID_2, SimTest::RESPONSE_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendTerminalResponseCmd_0400
 * @tc.name    Test SendTerminalResponseCmd interface, slotId exception input parameter 2.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendTerminalResponseCmd_0400, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendTerminalResponseCmd(SimTest::VAILD_SLOT_ID, SimTest::RESPONSE_CMD);
    ASSERT_TRUE(retValue);
    std::shared_ptr<SimCommonEvent> getData = std::make_shared<SimCommonEvent>();
    std::string radioField = getData->GetStkActionData();
    ASSERT_STREQ(radioField.c_str(), ACTION_SESSION_END.c_str());
}

/*
 * @tc.number  Telephony_Sim_SendEnvelopeCmd_0100
 * @tc.name    Test the SendEnvelopeCmd interface, slotId exception parameter -1.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendEnvelopeCmd_0100, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendEnvelopeCmd(SimTest::SLOTID_MINUS, SimTest::STK_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendEnvelopeCmd_0200
 * @tc.name    Test the SendEnvelopeCmd interface, slotId exception parameter 1.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendEnvelopeCmd_0200, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendEnvelopeCmd(SimTest::SLOT_ID_3, SimTest::STK_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendEnvelopeCmd_0300
 * @tc.name    Test the SendEnvelopeCmd interface, slotId exception parameter 2.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendEnvelopeCmd_0300, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendEnvelopeCmd(SimTest::SLOT_ID_2, SimTest::STK_CMD);
    ASSERT_FALSE(retValue);
}

/*
 * @tc.number  Telephony_Sim_SendEnvelopeCmd_0400
 * @tc.name    Test the SendEnvelopeCmd interface, and slotId is a normal input parameter.
 * @tc.desc    Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendEnvelopeCmd_0400, Function | MediumTest | Level3)
{
    bool retValue = g_proxy.GetHandler()->SendEnvelopeCmd(SimTest::VAILD_SLOT_ID, SimTest::STK_CMD);
    ASSERT_TRUE(retValue);
    std::shared_ptr<SimCommonEvent> getData = std::make_shared<SimCommonEvent>();
    std::string radioField = getData->GetStkActionData();
    ASSERT_STREQ(radioField.c_str(), ACTION_SESSION_END.c_str());
}