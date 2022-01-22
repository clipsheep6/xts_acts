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
#include "sim_set_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::LOOP_NUMBER = 10;
const int32_t SimTest::TIME_USEC = 1000;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;

/**
 * @tc.number   Telephony_Sim_SetVoiceMailInfo_0800
 * @tc.name     Test the SetVoiceMailInfo interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Function test
 */
HWTEST_F(SimSetVoiceMailTest, Telephony_Sim_SetVoiceMailInfo_0800, Function | MediumTest | Level1)
{
    std::u16string mailName = Str8ToStr16("123#@\%_ABCDE");
    std::u16string mailNumber = Str8ToStr16("01234567890123456789");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetVoiceMailInfo(SimTest::VAILD_SLOT_ID, mailName, mailNumber);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_IsSimActive_0400
 * @tc.name     Test the IsSimActive interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->IsSimActive(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0300
 * @tc.name     Test the GetActiveSimAccountInfoList interface query function 10 times
 *              and expect an average delay of less than 1000us.
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
 * @tc.name     Test the SetShowName interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetShowName_0400, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetShowName(SimTest::VAILD_SLOT_ID, cardName);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0400
 * @tc.name     Test the GetShowName interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0400, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetShowName(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0400
 * @tc.name     Test the SetShowNumber interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0400, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetShowNumber(VAILD_SLOT_ID, cardNumber);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0300
 * @tc.name     Test the GetShowNumber interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetShowNumber(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0300
 * @tc.name     Test the GetOperatorConfigs interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::OperatorConfig poc;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetOperatorConfigs(VAILD_SLOT_ID, poc);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0300
 * @tc.name     Test the GetSimTelephoneNumber interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetSimTelephoneNumber(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0300
 * @tc.name     Test the GetVoiceMailIdentifier interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetVoiceMailIdentifier(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0300
 * @tc.name     Test the GetVoiceMailNumber interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->GetVoiceMailNumber(VAILD_SLOT_ID);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0800
 * @tc.name     Test the UnlockPin2 interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::u16string pin2 = Str8ToStr16("123");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->UnlockPin2(VAILD_SLOT_ID, pin2, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 10 times
 *              and expect an average delay of less than 1000us.
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
        g_proxy.GetHandler()->UnlockPuk2(VAILD_SLOT_ID, pin2, puk2, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 10 times
 *              and expect an average delay of less than 1000us.
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
        g_proxy.GetHandler()->AlterPin2(VAILD_SLOT_ID, newPin2, oldPin2, response);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetActiveSim_0500
 * @tc.name     Test the SetActiveSim interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimSetTest, Telephony_Sim_SetActiveSim_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->SetActiveSim(SimTest::VAILD_SLOT_ID, SimTest::CLOSE);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimAccountInfo_0300
 * @tc.name     Test the GetSimAccountInfo interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimAccountInfo_0300, Performance | MediumTest | Level3)
{
    OHOS::Telephony::IccAccountInfo simInfo;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->GetSimAccountInfo(VAILD_SLOT_ID, simInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
        usleep(100000);
    }
    int32_t useTimeUs = totalTime / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}