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
#include <fstream>
#include "sim_test.h"
#include "sim_stk_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = 0;
const int32_t SimTest::LOOP_NUMBER = 1000;
const std::string SimTest::RESPONSE_CMD = "81030125000202828";
const std::string SimTest::STK_CMD = "D30781020181900101";

/**
 * @tc.number   Telephony_Sim_SendTerminalResponseCmd_0600
 * @tc.name     The test executed the SendTerminalResponseCmd interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendTerminalResponseCmd_0600, Function | MediumTest | Level1)
{
    std::shared_ptr<SimCommonEvent> getData = std::make_shared<SimCommonEvent>();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        bool retValue = g_proxy.GetHandler()->SendTerminalResponseCmd(SimTest::VAILD_SLOT_ID, SimTest::RESPONSE_CMD);
        ASSERT_TRUE(retValue);
        std::string radioField = getData->GetStkActionData();
        ASSERT_STREQ(radioField.c_str(), ACTION_SESSION_END.c_str());
    }
}

/**
 * @tc.number   Telephony_Sim_SendEnvelopeCmd_0600
 * @tc.name     The test executed the SendEnvelopeCmd interface setting function 1000 times,
 *              expecting to execute successfully each time.
 * @tc.desc     Function test
 */
HWTEST_F(SimStkTest, Telephony_Sim_SendEnvelopeCmd_0600, Function | MediumTest | Level1)
{
    std::shared_ptr<SimCommonEvent> getData = std::make_shared<SimCommonEvent>();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        bool retValue = g_proxy.GetHandler()->SendEnvelopeCmd(SimTest::VAILD_SLOT_ID, SimTest::STK_CMD);
        ASSERT_TRUE(retValue);
        std::string radioField = getData->GetStkActionData();
        ASSERT_STREQ(radioField.c_str(), ACTION_SESSION_END.c_str());
    }
}
