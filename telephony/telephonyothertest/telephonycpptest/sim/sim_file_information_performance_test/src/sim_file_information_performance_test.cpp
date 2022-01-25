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
#include "sim_test.h"
#include "log.h"
#include "time_count_helper.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::LOOP_NUMBER = 10;
const int32_t SimTest::TIME_USEC = 1000;
const int32_t SimTest::OTHER_ABNORMAL = -2;

/**
 * @tc.number   Telephony_Sim_GetSimState_0300
 * @tc.name     Test the GetSimState interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimState_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimState(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_HasSimCard_0300
 * @tc.name     Test the HasSimCard interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_HasSimCard_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->HasSimCard(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimIccId_0400
 * @tc.name     Test the GetSimIccId interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimIccId_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimIccId(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetIMSI_0300
 * @tc.name     Test the GetIMSI interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetIMSI_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetIMSI(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimOperatorNumeric_0300
 * @tc.name     Test the GetSimOperatorNumeric interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimOperatorNumeric_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimOperatorNumeric(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0300
 * @tc.name     Test the GetISOCountryCodeForSim interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetISOCountryCodeForSim_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetISOCountryCodeForSim(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimSpn_0300
 * @tc.name     Test the GetSimSpn interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimSpn_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimSpn(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimGid1_0300
 * @tc.name     Test the GetSimGid1 interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimGid1_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimGid1(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetDefaultVoiceSlotId_0300
 * @tc.name     Test the GetDefaultVoiceSlotId interface query function 10 times
 *              and expect an average delay of less than 1000us.
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
 * @tc.name     Test the SetDefaultVoiceSlotId interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetDefaultVoiceSlotId_0200, Performance | MediumTest | Level3)
{
    int32_t defaultValue = g_proxy.GetHandler()->GetDefaultVoiceSlotId();
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->SetDefaultVoiceSlotId(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
    g_proxy.GetHandler()->SetDefaultVoiceSlotId(defaultValue);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin_0800
 * @tc.name     Test the SetDefaultSmsSlotId interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string defaultPin = Str8ToStr16("1234");
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPin(VAILD_SLOT_ID, defaultPin, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0900
 * @tc.name     Test the UnlockPuk interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk_0900, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string pin = Str8ToStr16("1234");
    std::u16string puk = Str8ToStr16("12345678");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPuk(VAILD_SLOT_ID, pin, puk, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1100
 * @tc.name     Test the AlterPin interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin_1100, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string oldPin = Str8ToStr16("1234");
    std::u16string newPin = Str8ToStr16("1234");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->AlterPin(VAILD_SLOT_ID, newPin, oldPin, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}
