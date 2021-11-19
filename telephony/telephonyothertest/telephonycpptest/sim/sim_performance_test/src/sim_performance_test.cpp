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
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::TIME_USEC = 500;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;

/************************************************Phase one to three***********************************************/
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
 * @tc.number   Telephony_Sim_GetISOCountryCodeForSim_0300
 * @tc.name     Test the GetISOCountryCodeForSim interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetISOCountryCodeForSim_0300, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetISOCountryCodeForSim(SLOTID_0);
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
    OHOS::Telephony::IccAccountInfo simInfo;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->GetSimAccountInfo(SLOTID_0, simInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
        usleep(100000);
    }
    int32_t useTimeUs = totalTime / LOOP_NUMBER;
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

/**
 * @tc.number   Telephony_Sim_UnlockPin_0800
 * @tc.name     Test the SetDefaultSmsSlotId interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::string defaultPin = "1234";
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPin(Str8ToStr16(defaultPin), response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk_0900
 * @tc.name     Test the UnlockPuk interface query function 1000 times
 *              and expect an average delay of less than 500μs.
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
        g_proxy.GetHandler()->UnlockPuk(pin, puk, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin_1100
 * @tc.name     Test the AlterPin interface query function 1000 times
 *              and expect an average delay of less than 500μs.
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
        g_proxy.GetHandler()->AlterPin(newPin, oldPin, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetLockState_0800
 * @tc.name     Test the SetLockState interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetLockState_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string pin = Str8ToStr16("123456789");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < TIME_USEC; timeNumber++) {
        g_proxy.GetHandler()->SetLockState(pin, OPEN, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_IsSimActive_0400
 * @tc.name     Test the IsSimActive interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0300
 * @tc.name     Test the GetActiveSimAccountInfoList interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0300, Function | MediumTest | Level1)
{
    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
        usleep(100000);
    }
    int32_t useTimeUs = totalTime / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0400
 * @tc.name     Test the SetShowName interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0400, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0400
 * @tc.name     Test the GetShowName interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0400, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetShowName(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0400
 * @tc.name     Test the SetShowNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0400, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0300
 * @tc.name     Test the GetShowNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0300, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0300
 * @tc.name     Test the GetOperatorConfigs interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::OperatorConfig poc;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0300
 * @tc.name     Test the GetSimTelephoneNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0300
 * @tc.name     Test the GetVoiceMailIdentifier interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0300
 * @tc.name     Test the GetVoiceMailNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0800
 * @tc.name     Test the UnlockPin2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::string pin2 = "123";

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(pin2), response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123");
    std::u16string newPin2 = Str8ToStr16("1234");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0500
 * @tc.name     Test the SetActiveSim interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetActiveSim_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetActiveSim(CLOSE, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);

    // Restore initial state.
    bool setResult = g_proxy.GetHandler()->SetActiveSim(OPEN, SLOTID_0);
    ASSERT_TRUE(setResult);
}

/**************************************************Phase five*****************************************************/
/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0800
 * @tc.name     Test the SetVoiceMailInfo interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Function test
 */
HWTEST_F(SimTest, Telephony_Sim_SetVoiceMailInfo_0800, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetVoiceMailInfo(mailName, mailNumber, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}