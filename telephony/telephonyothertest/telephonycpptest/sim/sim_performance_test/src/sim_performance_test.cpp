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

#include "sim_test.h"
#include <cstring>
#include "log.h"
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::TIME_USEC = 500;
const int32_t SimTest::SLOTID_0 = 1;

/**
 * @tc.number   Telephony_Sim_GetSimState_0300
 * @tc.name     Test the GetSimState interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimState(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0300
 * @tc.name     Test the HasSimCard interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->HasSimCard(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0400
 * @tc.name     Test the GetSimIccId interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimIccId(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0300
 * @tc.name     Test the GetIMSI interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIMSI_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetIMSI(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0300
 * @tc.name     Test the GetSimOperatorNumeric interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimOperatorNumeric(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetIsoCountryCodeForSim_0300
 * @tc.name     Test the GetIsoCountryCodeForSim interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIsoCountryCodeForSim_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetIsoCountryCodeForSim(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0300
 * @tc.name     Test the GetSimSpn interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimSpn(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0300
 * @tc.name     Test the GetSimGid1 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimGid1(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0300
 * @tc.name     Test the GetSimAccountInfo interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::IccAccountInfo simInfo;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0300
 * @tc.name     Test the GetDefaultVoiceSlotId interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetDefaultVoiceSlotId_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetDefaultVoiceSlotId_0200
 * @tc.name     Test the SetDefaultVoiceSlotId interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetDefaultVoiceSlotId_0200, Performance | MediumTest | Level3)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->SetDefaultVoiceSlotId(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
    g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
}